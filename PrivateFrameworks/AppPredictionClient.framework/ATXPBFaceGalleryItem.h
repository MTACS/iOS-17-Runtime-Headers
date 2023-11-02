
@interface ATXPBFaceGalleryItem : PBCodable <NSCopying> {
    NSString * _descriptorIdentifier;
    NSString * _extensionBundleIdentifier;
    NSString * _identifier;
}

@property (nonatomic, retain) NSString *descriptorIdentifier;
@property (nonatomic, retain) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) bool hasDescriptorIdentifier;
@property (nonatomic, readonly) bool hasExtensionBundleIdentifier;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptorIdentifier;
- (id)dictionaryRepresentation;
- (id)extensionBundleIdentifier;
- (bool)hasDescriptorIdentifier;
- (bool)hasExtensionBundleIdentifier;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDescriptorIdentifier:(id)arg1;
- (void)setExtensionBundleIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
