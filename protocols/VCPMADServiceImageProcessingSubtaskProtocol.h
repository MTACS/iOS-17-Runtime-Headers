
@protocol VCPMADServiceImageProcessingSubtaskProtocol

@required

+ (NSArray *)dependencies;
+ (id)taskWithRequest:(MADRequest *)arg1 imageAsset:(VCPMADServiceImageAsset *)arg2 andSignpostPayload:(NSString *)arg3;

@optional

- (void)setPreferredMetalDevice:(id <MTLDevice>)arg1;

@end
