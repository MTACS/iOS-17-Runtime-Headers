
@interface PHExternalAssetResource : NSObject <PHCPLAssetResource> {
    unsigned long long  _cplResourceType;
    PHAssetResourceCreationOptions * _creationOptions;
    NSData * _data;
    bool  _duplicateAllowsReadAccess;
    NSURL * _fileURL;
    bool  _isLibraryAssetResource;
    long long  _pixelHeight;
    long long  _pixelWidth;
    long long  _resourceType;
    long long  _sandboxExtensionHandle;
}

@property (nonatomic, readonly) unsigned long long cplResourceType;
@property (nonatomic, copy) PHAssetResourceCreationOptions *creationOptions;
@property (nonatomic, retain) NSData *data;
@property (setter=_setDuplicateAllowsReadAccess:, nonatomic) bool duplicateAllowsReadAccess;
@property (nonatomic, copy) NSURL *fileURL;
@property (nonatomic, readonly) bool isLibraryAssetResource;
@property (nonatomic, readonly) NSString *originalFilename;
@property (nonatomic) long long pixelHeight;
@property (nonatomic) long long pixelWidth;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *uniformTypeIdentifier;

+ (id)assetResourceForDuplicatingAssetResource:(id)arg1 asData:(bool)arg2 error:(id*)arg3;
+ (id)assetResourceForDuplicatingAssetResource:(id)arg1 newResourceType:(long long)arg2 asData:(bool)arg3 error:(id*)arg4;
+ (unsigned long long)probableCPLResourceTypeFromAssetResourceType:(long long)arg1;

- (void).cxx_destruct;
- (void)_consumeSandboxExtension:(id)arg1;
- (id)_issueSandboxExtension;
- (void)_releaseSandboxExtension;
- (void)_setDuplicateAllowsReadAccess:(bool)arg1;
- (unsigned long long)cplResourceType;
- (id)creationOptions;
- (id)data;
- (void)dealloc;
- (bool)duplicateAllowsReadAccess;
- (id)fileURL;
- (id)init;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithResourceType:(long long)arg1;
- (bool)isLibraryAssetResource;
- (id)originalFilename;
- (long long)pixelHeight;
- (long long)pixelWidth;
- (id)propertyListRepresentation;
- (void)setCreationOptions:(id)arg1;
- (void)setData:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setPixelHeight:(long long)arg1;
- (void)setPixelWidth:(long long)arg1;
- (long long)type;
- (id)uniformTypeIdentifier;

@end
