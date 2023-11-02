
@interface SXMutableDOMAnalysis : SXDOMAnalysis

@property (nonatomic, copy) SXMutableConditionalObjectAnalysis *conditionalObjectAnalysis;
@property (nonatomic, readonly, copy) SXMutableNamespacedObjectReferences *namespacedObjectReferences;

- (void)addComponent:(id)arg1 parent:(id)arg2;
- (void)addComponent:(id)arg1 type:(id)arg2 role:(int)arg3;
- (void)addComponentStyle:(id)arg1 component:(id)arg2;
- (void)addComponentTextStyle:(id)arg1 component:(id)arg2;
- (void)addTextStyle:(id)arg1 component:(id)arg2;
- (void)removeComponent:(id)arg1;
- (void)removeComponentStyle:(id)arg1 component:(id)arg2;
- (void)removeComponentTextStyle:(id)arg1 component:(id)arg2;
- (void)removeTextStyle:(id)arg1 component:(id)arg2;

@end
