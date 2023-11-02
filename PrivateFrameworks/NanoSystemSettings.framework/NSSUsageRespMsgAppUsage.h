
@interface NSSUsageRespMsgAppUsage : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    unsigned long long  _dynamicSizeInBytes;
    NSString * _name;
    unsigned long long  _sharedSizeInBytes;
    unsigned long long  _staticSizeInBytes;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *bundleVersion;
@property (nonatomic) unsigned long long dynamicSizeInBytes;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long sharedSizeInBytes;
@property (nonatomic) unsigned long long staticSizeInBytes;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)dynamicSizeInBytes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setDynamicSizeInBytes:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setSharedSizeInBytes:(unsigned long long)arg1;
- (void)setStaticSizeInBytes:(unsigned long long)arg1;
- (unsigned long long)sharedSizeInBytes;
- (unsigned long long)staticSizeInBytes;
- (void)writeTo:(id)arg1;

@end
