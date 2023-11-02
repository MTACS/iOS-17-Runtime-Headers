
@interface ATXPBMinimalAction : PBCodable <NSCopying> {
    NSString * _actionType;
    NSString * _bundleId;
    struct { 
        unsigned int paramHash : 1; 
    }  _has;
    unsigned long long  _paramHash;
}

@property (nonatomic, retain) NSString *actionType;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) bool hasActionType;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic) bool hasParamHash;
@property (nonatomic) unsigned long long paramHash;

- (void).cxx_destruct;
- (id)actionType;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionType;
- (bool)hasBundleId;
- (bool)hasParamHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)paramHash;
- (bool)readFrom:(id)arg1;
- (void)setActionType:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasParamHash:(bool)arg1;
- (void)setParamHash:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
