
@interface SXAdComponentRemovalModifier : NSObject <SXDOMModifying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)modifyDOM:(id)arg1 context:(id)arg2;
- (void)removeAdComponentsEmbeddedWithinContainer:(id)arg1 childComponents:(id)arg2;

@end
