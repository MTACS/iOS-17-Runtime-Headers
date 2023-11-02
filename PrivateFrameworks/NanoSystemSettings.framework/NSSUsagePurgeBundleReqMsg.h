
@interface NSSUsagePurgeBundleReqMsg : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) bool hasBundleIdentifier;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
