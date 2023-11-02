
@protocol SXRenderingConfigurationOption <NSObject>

@required

- (NSString *)maxClientSpecVersion;
- (NSString *)maxDocumentSpecVersion;
- (NSString *)minClientSpecVersion;
- (NSString *)minDocumentSpecVersion;

@end
