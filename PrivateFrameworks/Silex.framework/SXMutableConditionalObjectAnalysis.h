
@interface SXMutableConditionalObjectAnalysis : SXConditionalObjectAnalysis

@property (nonatomic, copy) NSMutableSet *documentStyleConditionTypes;

- (void)addComponentIdentifier:(id)arg1 conditionTypes:(id)arg2;
- (void)addComponentLayoutIdentifier:(id)arg1 conditionTypes:(id)arg2;
- (void)addComponentStyleIdentifier:(id)arg1 conditionTypes:(id)arg2;
- (void)addComponentTextStyleIdentifier:(id)arg1 conditionTypes:(id)arg2;
- (void)addObject:(id)arg1 keys:(id)arg2 map:(id)arg3;
- (void)addObjects:(id)arg1 key:(id)arg2 map:(id)arg3;
- (void)addTextStyleIdentifier:(id)arg1 conditionTypes:(id)arg2;
- (void)removeComponentIdentifier:(id)arg1 conditionTypes:(id)arg2;
- (void)removeComponentLayoutIdentifier:(id)arg1 conditionTypes:(id)arg2;
- (void)removeComponentStyleIdentifier:(id)arg1 conditionTypes:(id)arg2;
- (void)removeComponentTextStyleIdentifier:(id)arg1 conditionTypes:(id)arg2;
- (void)removeObject:(id)arg1 keys:(id)arg2 map:(id)arg3;
- (void)removeObjects:(id)arg1 key:(id)arg2 map:(id)arg3;
- (void)removeTextStyleIdentifier:(id)arg1 conditionTypes:(id)arg2;
- (void)setDocumentStyleConditionTypes:(id)arg1;

@end
