#include <net-snmp/version.h>

const char     *NetSnmpVersionInfo = "5.0.8.pre1";

const char     *
netsnmp_get_version()
{
    return NetSnmpVersionInfo;
}
