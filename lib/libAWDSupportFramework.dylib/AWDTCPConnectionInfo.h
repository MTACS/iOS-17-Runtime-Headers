
@interface AWDTCPConnectionInfo : PBCodable <NSCopying> {
    unsigned int  _dnsResolutionLatency;
    struct { 
        unsigned int dnsResolutionLatency : 1; 
        unsigned int interfaceType : 1; 
        unsigned int tcpHandshakeLatency : 1; 
        unsigned int tcpRetransmissions : 1; 
        unsigned int tcpRxBytes : 1; 
        unsigned int tcpTxBytes : 1; 
        unsigned int tlsLatency : 1; 
    }  _has;
    int  _interfaceType;
    unsigned int  _tcpHandshakeLatency;
    unsigned int  _tcpRetransmissions;
    unsigned int  _tcpRxBytes;
    unsigned int  _tcpTxBytes;
    unsigned int  _tlsLatency;
}

@property (nonatomic) unsigned int dnsResolutionLatency;
@property (nonatomic) bool hasDnsResolutionLatency;
@property (nonatomic) bool hasInterfaceType;
@property (nonatomic) bool hasTcpHandshakeLatency;
@property (nonatomic) bool hasTcpRetransmissions;
@property (nonatomic) bool hasTcpRxBytes;
@property (nonatomic) bool hasTcpTxBytes;
@property (nonatomic) bool hasTlsLatency;
@property (nonatomic) int interfaceType;
@property (nonatomic) unsigned int tcpHandshakeLatency;
@property (nonatomic) unsigned int tcpRetransmissions;
@property (nonatomic) unsigned int tcpRxBytes;
@property (nonatomic) unsigned int tcpTxBytes;
@property (nonatomic) unsigned int tlsLatency;

- (int)StringAsInterfaceType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dnsResolutionLatency;
- (bool)hasDnsResolutionLatency;
- (bool)hasInterfaceType;
- (bool)hasTcpHandshakeLatency;
- (bool)hasTcpRetransmissions;
- (bool)hasTcpRxBytes;
- (bool)hasTcpTxBytes;
- (bool)hasTlsLatency;
- (unsigned long long)hash;
- (int)interfaceType;
- (id)interfaceTypeAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDnsResolutionLatency:(unsigned int)arg1;
- (void)setHasDnsResolutionLatency:(bool)arg1;
- (void)setHasInterfaceType:(bool)arg1;
- (void)setHasTcpHandshakeLatency:(bool)arg1;
- (void)setHasTcpRetransmissions:(bool)arg1;
- (void)setHasTcpRxBytes:(bool)arg1;
- (void)setHasTcpTxBytes:(bool)arg1;
- (void)setHasTlsLatency:(bool)arg1;
- (void)setInterfaceType:(int)arg1;
- (void)setTcpHandshakeLatency:(unsigned int)arg1;
- (void)setTcpRetransmissions:(unsigned int)arg1;
- (void)setTcpRxBytes:(unsigned int)arg1;
- (void)setTcpTxBytes:(unsigned int)arg1;
- (void)setTlsLatency:(unsigned int)arg1;
- (unsigned int)tcpHandshakeLatency;
- (unsigned int)tcpRetransmissions;
- (unsigned int)tcpRxBytes;
- (unsigned int)tcpTxBytes;
- (unsigned int)tlsLatency;
- (void)writeTo:(id)arg1;

@end
