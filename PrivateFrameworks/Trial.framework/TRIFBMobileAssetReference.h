
@interface TRIFBMobileAssetReference : NSObject <AFBBufferReferencing, NSCopying> {
    AFBBufRef * _br;
    const struct MobileAssetReference { unsigned char x1[1]; } * _ptr;
}

@property (nonatomic, readonly) NSString *assetName;
@property (nonatomic, readonly) const char *assetNameAsCString;
@property (nonatomic, readonly) NSData *assetNameAsData;
@property (nonatomic, readonly) unsigned long long downloadSize;
@property (nonatomic, readonly) unsigned char fileType;
@property (nonatomic, readonly) bool hasDownloadSize;
@property (nonatomic, readonly) bool hasFileType;
@property (nonatomic, readonly) bool hasIsOnDemand;
@property (nonatomic, readonly) bool isOnDemand;
@property (nonatomic, readonly) NSString *specifier;
@property (nonatomic, readonly) const char *specifierAsCString;
@property (nonatomic, readonly) NSData *specifierAsData;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) const char *typeAsCString;
@property (nonatomic, readonly) NSData *typeAsData;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) const char *versionAsCString;
@property (nonatomic, readonly) NSData *versionAsData;

- (void).cxx_destruct;
- (id)assetName;
- (const char *)assetNameAsCString;
- (id)assetNameAsData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1;
- (id)deepCopyUsingBufferBuilder:(id)arg1 changes:(id)arg2;
- (unsigned long long)downloadSize;
- (unsigned char)fileType;
- (bool)hasDownloadSize;
- (bool)hasFileType;
- (bool)hasIsOnDemand;
- (unsigned long long)hash;
- (id)init;
- (id)initVerifiedRootObjectFromData:(id)arg1;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2;
- (id)initVerifiedRootObjectFromData:(id)arg1 requireUTF8:(bool)arg2 maxDepth:(unsigned int)arg3 maxTables:(unsigned int)arg4;
- (id)initWithBufRef:(id)arg1 cppPointer:(const struct MobileAssetReference { unsigned char x1[1]; }*)arg2;
- (id)initWithBufRef:(id)arg1 rawPointer:(const void*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isOnDemand;
- (id)specifier;
- (const char *)specifierAsCString;
- (id)specifierAsData;
- (id)type;
- (const char *)typeAsCString;
- (id)typeAsData;
- (bool)verifyUTF8Fields;
- (id)version;
- (const char *)versionAsCString;
- (id)versionAsData;

@end
