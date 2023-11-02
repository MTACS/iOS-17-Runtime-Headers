
@interface NNMKProtoWebKitStatusNotification : PBCodable <NSCopying> {
    struct { 
        unsigned int supportsWebKit : 1; 
    }  _has;
    bool  _supportsWebKit;
}

@property (nonatomic) bool hasSupportsWebKit;
@property (nonatomic) bool supportsWebKit;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSupportsWebKit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSupportsWebKit:(bool)arg1;
- (void)setSupportsWebKit:(bool)arg1;
- (bool)supportsWebKit;
- (void)writeTo:(id)arg1;

@end
