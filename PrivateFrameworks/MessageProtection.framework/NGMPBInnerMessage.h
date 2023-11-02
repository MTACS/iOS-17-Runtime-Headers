
@interface NGMPBInnerMessage : PBCodable <NSCopying> {
    unsigned int  _counter;
    NSData * _debugInfo;
    struct { 
        unsigned int counter : 1; 
    }  _has;
    NSData * _ktGossipData;
    NSData * _message;
}

@property (nonatomic) unsigned int counter;
@property (nonatomic, retain) NSData *debugInfo;
@property (nonatomic) bool hasCounter;
@property (nonatomic, readonly) bool hasDebugInfo;
@property (nonatomic, readonly) bool hasKtGossipData;
@property (nonatomic, retain) NSData *ktGossipData;
@property (nonatomic, retain) NSData *message;

- (void).cxx_destruct;
- (id)attributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)counter;
- (id)debugInfo;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCounter;
- (bool)hasDebugInfo;
- (bool)hasKtGossipData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)ktGossipData;
- (void)mergeFrom:(id)arg1;
- (id)message;
- (bool)readFrom:(id)arg1;
- (void)setCounter:(unsigned int)arg1;
- (void)setDebugInfo:(id)arg1;
- (void)setHasCounter:(bool)arg1;
- (void)setKtGossipData:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
