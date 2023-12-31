
@protocol SXPresentationAttributesProvider <NSObject>

@required

- (void)addObserver:(id <SXPresentationAttributesObserver>)arg1;
- (SXPresentationAttributes *)presentationAttributes;
- (void)removeObserver:(id <SXPresentationAttributesObserver>)arg1;

@end
