
@interface SXHintsConfigurationOption : SXRenderingConfigurationOption <SXHintsConfigurationOption>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool ignoreConditionHints;
@property (nonatomic, readonly) bool ignoreConditionalHints;
@property (readonly) Class superclass;

@end
