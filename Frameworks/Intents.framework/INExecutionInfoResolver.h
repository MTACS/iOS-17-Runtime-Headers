
@interface INExecutionInfoResolver : NSObject {
    NSDictionary * __counterpartMapping;
    INExecutionCounterpartMapper * _counterpartMapper;
    INExecutionFrameworkMapper * _frameworkMapper;
}

@property (nonatomic, readonly) INExecutionCounterpartMapper *_counterpartMapper;
@property (nonatomic, readonly, copy) NSDictionary *_counterpartMapping;
@property (nonatomic, readonly) INExecutionFrameworkMapper *_frameworkMapper;

+ (id)defaultResolver;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_counterpartMapper;
- (id)_counterpartMapping;
- (id)_frameworkMapper;
- (id)_resolveExecutionInfo:(id)arg1;
- (id)_resolveExecutionInfoByLinkingExtensionToApp:(id)arg1;
- (id)_resolveExecutionInfoBySwappingIdentifiers:(id)arg1;
- (id)_resolveIntentExecutionInfoByLinkingExtensionToApp:(id)arg1;
- (id)_resolveIntentExecutionInfoBySwappingIdentifiers:(id)arg1;
- (id)_resolveIntentExecutionInfoUsingCounterparts:(id)arg1;
- (id)_resolveUserActivityExecutionInfoByLinkingFileProvidersToFilesApp:(id)arg1;
- (id)_resolveUserActivityExecutionInfoBySwappingIdentifiers:(id)arg1;
- (id)_resolveUserActivityExecutionInfoUsingCounterparts:(id)arg1;
- (id)counterpartBundleIdentifiersForBundleIdentifier:(id)arg1;
- (id)counterpartIdentifiersForLocalIdentifier:(id)arg1;
- (id)localIdentifiersForCounterpartIdentifier:(id)arg1;
- (id)resolveIntentExecutionInfo:(id)arg1;
- (id)resolveUserActivityExecutionInfo:(id)arg1;

@end
