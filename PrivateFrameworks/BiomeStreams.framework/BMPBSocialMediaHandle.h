
@interface BMPBSocialMediaHandle : PBCodable <NSCopying> {
    NSString * _bundleId;
    NSString * _handle;
}

@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSString *handle;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic, readonly) bool hasHandle;

- (void).cxx_destruct;
- (id)bundleId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handle;
- (bool)hasBundleId;
- (bool)hasHandle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)writeTo:(id)arg1;

@end
