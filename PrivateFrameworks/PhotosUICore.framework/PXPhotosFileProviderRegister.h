
@interface PXPhotosFileProviderRegister : NSObject {
    void configuration;
    void domain;
    void fileProviderManager;
}

+ (id)urlQueryItemClientEncodingPolicyKey;
+ (id)urlQueryItemDownscalingTargetDimensionKey;
+ (id)urlQueryItemIncludeCaptionKey;
+ (id)urlQueryItemIncludeLocationKey;
+ (id)urlQueryItemItemTypeKey;
+ (id)urlQueryItemLibraryIdentifierKey;
+ (id)urlQueryItemUUIDKey;

- (void).cxx_destruct;
- (id)init;
- (id)initWithConfiguration:(id)arg1 fileProviderManager:(id)arg2 domain:(id)arg3;
- (id)registerFileRepresentationsWithItemProvider:(id)arg1 asset:(id)arg2;

@end
