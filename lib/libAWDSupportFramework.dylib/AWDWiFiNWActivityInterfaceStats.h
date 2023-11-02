
@interface AWDWiFiNWActivityInterfaceStats : PBCodable <NSCopying> {
    AWDWiFiNWActivityAssoc * _assoc;
    AWDWiFiNWActivityStateBin * _awdlMode;
    NSMutableArray * _bytes;
    unsigned int  _consecutivedps;
    unsigned int  _dps;
    struct { 
        unsigned int consecutivedps : 1; 
        unsigned int dps : 1; 
        unsigned int role : 1; 
    }  _has;
    NSMutableArray * _npeers;
    NSMutableArray * _packets;
    NSMutableArray * _peers;
    int  _role;
}

@property (nonatomic, retain) AWDWiFiNWActivityAssoc *assoc;
@property (nonatomic, retain) AWDWiFiNWActivityStateBin *awdlMode;
@property (nonatomic, retain) NSMutableArray *bytes;
@property (nonatomic) unsigned int consecutivedps;
@property (nonatomic) unsigned int dps;
@property (nonatomic, readonly) bool hasAssoc;
@property (nonatomic, readonly) bool hasAwdlMode;
@property (nonatomic) bool hasConsecutivedps;
@property (nonatomic) bool hasDps;
@property (nonatomic) bool hasRole;
@property (nonatomic, retain) NSMutableArray *npeers;
@property (nonatomic, retain) NSMutableArray *packets;
@property (nonatomic, retain) NSMutableArray *peers;
@property (nonatomic) int role;

+ (Class)bytesType;
+ (Class)npeersType;
+ (Class)packetsType;
+ (Class)peerType;

- (int)StringAsRole:(id)arg1;
- (void)addBytes:(id)arg1;
- (void)addNpeers:(id)arg1;
- (void)addPackets:(id)arg1;
- (void)addPeer:(id)arg1;
- (id)assoc;
- (id)awdlMode;
- (id)bytes;
- (id)bytesAtIndex:(unsigned long long)arg1;
- (unsigned long long)bytesCount;
- (void)clearBytes;
- (void)clearNpeers;
- (void)clearPackets;
- (void)clearPeers;
- (unsigned int)consecutivedps;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dps;
- (bool)hasAssoc;
- (bool)hasAwdlMode;
- (bool)hasConsecutivedps;
- (bool)hasDps;
- (bool)hasRole;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)npeers;
- (id)npeersAtIndex:(unsigned long long)arg1;
- (unsigned long long)npeersCount;
- (id)packets;
- (id)packetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)packetsCount;
- (id)peerAtIndex:(unsigned long long)arg1;
- (id)peers;
- (unsigned long long)peersCount;
- (bool)readFrom:(id)arg1;
- (int)role;
- (id)roleAsString:(int)arg1;
- (void)setAssoc:(id)arg1;
- (void)setAwdlMode:(id)arg1;
- (void)setBytes:(id)arg1;
- (void)setConsecutivedps:(unsigned int)arg1;
- (void)setDps:(unsigned int)arg1;
- (void)setHasConsecutivedps:(bool)arg1;
- (void)setHasDps:(bool)arg1;
- (void)setHasRole:(bool)arg1;
- (void)setNpeers:(id)arg1;
- (void)setPackets:(id)arg1;
- (void)setPeers:(id)arg1;
- (void)setRole:(int)arg1;
- (void)writeTo:(id)arg1;

@end
