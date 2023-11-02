
@interface CNRenderingSessionAttributes : NSObject {
    PTGlobalRenderingMetadata * _internalMetadata;
}

@property (readonly) PTGlobalRenderingMetadata *internalMetadata;
@property (readonly) long long majorVersion;
@property (readonly) long long minorVersion;
@property (readonly) long long renderingVersion;

+ (id)_PTGlobalRenderingMetadataFromAsset:(id)arg1;
+ (id)_PTGlobalRenderingMetadataFromItems:(id)arg1;
+ (void)_loadPTGlobalRenderingMetadataFromAsset:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)loadFromAsset:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)initWithPTGlobalRenderingMetadata:(id)arg1;
- (id)internalMetadata;
- (long long)majorVersion;
- (long long)minorVersion;
- (long long)renderingVersion;

@end
