
@interface SBFAlwaysOnLiveRenderingBLSAttributesProvider : NSObject <SBFAlwaysOnLiveRenderingBLSAttributesProvider> {
    <SBFAlwaysOnLiveRenderingBLSAttributesProvider> * _provider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assertionAttributes;
- (id)initWithFBSScene:(id)arg1;
- (id)initWithProvider:(id)arg1;
- (id)initWithUIScene:(id)arg1;

@end
