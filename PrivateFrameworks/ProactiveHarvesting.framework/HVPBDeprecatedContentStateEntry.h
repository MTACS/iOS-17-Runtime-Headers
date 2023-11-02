
@interface HVPBDeprecatedContentStateEntry : PBCodable <NSCopying> {
    HVPBContentState * _state;
    NSString * _uniqueId;
}

@property (nonatomic, readonly) bool hasState;
@property (nonatomic, readonly) bool hasUniqueId;
@property (nonatomic, retain) HVPBContentState *state;
@property (nonatomic, retain) NSString *uniqueId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasState;
- (bool)hasUniqueId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setState:(id)arg1;
- (void)setUniqueId:(id)arg1;
- (id)state;
- (id)uniqueId;
- (void)writeTo:(id)arg1;

@end
