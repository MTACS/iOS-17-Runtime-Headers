
@interface SXRenderingConfigurationOption : SXJSONObject <SXRenderingConfigurationOption>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *maxClientSpecVersion;
@property (nonatomic, readonly) NSString *maxDocumentSpecVersion;
@property (nonatomic, readonly) NSString *minClientSpecVersion;
@property (nonatomic, readonly) NSString *minDocumentSpecVersion;
@property (readonly) Class superclass;

@end
