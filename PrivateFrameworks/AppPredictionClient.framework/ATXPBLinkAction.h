
@interface ATXPBLinkAction : PBCodable <NSCopying> {
    NSData * _action;
    NSString * _bundleId;
}

@property (nonatomic, retain) NSData *action;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, readonly) bool hasAction;
@property (nonatomic, readonly) bool hasBundleId;

- (void).cxx_destruct;
- (id)action;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasBundleId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAction:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
