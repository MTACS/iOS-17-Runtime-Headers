
@interface NTPBNetworkEventGroup : PBCodable <NSCopying> {
    NSString * _respondingInstance;
    NSString * _via;
}

@property (nonatomic, readonly) bool hasRespondingInstance;
@property (nonatomic, readonly) bool hasVia;
@property (nonatomic, retain) NSString *respondingInstance;
@property (nonatomic, retain) NSString *via;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRespondingInstance;
- (bool)hasVia;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)respondingInstance;
- (void)setRespondingInstance:(id)arg1;
- (void)setVia:(id)arg1;
- (id)via;
- (void)writeTo:(id)arg1;

@end
