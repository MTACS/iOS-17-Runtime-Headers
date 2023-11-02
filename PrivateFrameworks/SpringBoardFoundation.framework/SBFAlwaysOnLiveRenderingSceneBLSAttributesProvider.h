
@interface SBFAlwaysOnLiveRenderingSceneBLSAttributesProvider : NSObject <SBFAlwaysOnLiveRenderingBLSAttributesProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_init;
- (id)assertionAttributes;
- (id)initWithFBSScene:(id)arg1;
- (id)initWithUIScene:(id)arg1;

@end
