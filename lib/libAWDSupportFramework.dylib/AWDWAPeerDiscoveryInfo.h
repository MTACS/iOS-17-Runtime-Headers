
@interface AWDWAPeerDiscoveryInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int iOSPeers : 1; 
        unsigned int macOSPeers : 1; 
        unsigned int numPeersDiscovered : 1; 
        unsigned int tvOSPeers : 1; 
    }  _has;
    unsigned int  _iOSPeers;
    unsigned int  _macOSPeers;
    unsigned int  _numPeersDiscovered;
    unsigned int  _tvOSPeers;
}

@property (nonatomic) bool hasIOSPeers;
@property (nonatomic) bool hasMacOSPeers;
@property (nonatomic) bool hasNumPeersDiscovered;
@property (nonatomic) bool hasTvOSPeers;
@property (nonatomic) unsigned int iOSPeers;
@property (nonatomic) unsigned int macOSPeers;
@property (nonatomic) unsigned int numPeersDiscovered;
@property (nonatomic) unsigned int tvOSPeers;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIOSPeers;
- (bool)hasMacOSPeers;
- (bool)hasNumPeersDiscovered;
- (bool)hasTvOSPeers;
- (unsigned long long)hash;
- (unsigned int)iOSPeers;
- (bool)isEqual:(id)arg1;
- (unsigned int)macOSPeers;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numPeersDiscovered;
- (bool)readFrom:(id)arg1;
- (void)setHasIOSPeers:(bool)arg1;
- (void)setHasMacOSPeers:(bool)arg1;
- (void)setHasNumPeersDiscovered:(bool)arg1;
- (void)setHasTvOSPeers:(bool)arg1;
- (void)setIOSPeers:(unsigned int)arg1;
- (void)setMacOSPeers:(unsigned int)arg1;
- (void)setNumPeersDiscovered:(unsigned int)arg1;
- (void)setTvOSPeers:(unsigned int)arg1;
- (unsigned int)tvOSPeers;
- (void)writeTo:(id)arg1;

@end
