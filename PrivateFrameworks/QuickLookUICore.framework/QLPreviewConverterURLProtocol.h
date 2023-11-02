
@interface QLPreviewConverterURLProtocol : QLPreviewURLProtocol

+ (id)_errorForNoPreview;
+ (void)initialize;
+ (id)protocolScheme;
+ (void)registerPreview:(id)arg1;
+ (void)stopLoadingProtocol:(id)arg1;
+ (void)unregisterURLs:(id)arg1 andPreview:(id)arg2;

@end
