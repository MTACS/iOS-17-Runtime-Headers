
@interface MKSystemHairlineStyleProvider : NSObject <MKHairlineViewStyleProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *fillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)fillColor;
- (id)vibrancyEffectForTraitCollection:(id)arg1;

@end
