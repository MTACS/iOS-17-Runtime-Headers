
@interface FCContentArchive : NSObject <NSCopying, NSSecureCoding>

@property (nonatomic, readonly, copy) FCContentManifest *manifest;

+ (id)archiveWithAVAsset:(id)arg1;
+ (id)archiveWithAVAssetKey:(id)arg1;
+ (id)archiveWithAsset:(id)arg1 remoteURL:(id)arg2 filePath:(id)arg3;
+ (id)archiveWithAssetWrappingKey:(id)arg1 wrappingKeyID:(id)arg2;
+ (id)archiveWithChildArchives:(id)arg1;
+ (id)archiveWithPersistedArchivePath:(id)arg1;
+ (id)archiveWithRecord:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)manifest;
- (id)unarchiveIntoContentContext:(id)arg1;

@end
