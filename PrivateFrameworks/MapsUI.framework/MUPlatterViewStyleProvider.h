
@interface MUPlatterViewStyleProvider : NSObject <MUPlatterViewStyleProviding>

@property (nonatomic, readonly) long long backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIColor *fillColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)backgroundStyle;
- (id)fillColor;
- (id)visualEffectForTraitCollection:(id)arg1;

@end
