
@interface WFClipboardVariable : WFVariable

- (id)icon;
- (id)initWithAggrandizements:(id)arg1;
- (bool)isAvailable;
- (id)name;
- (id)possibleContentClassesWithContext:(id)arg1;
- (id)requiredAccessResources;
- (bool)requiresModernVariableSupport;
- (void)retrieveContentCollectionWithVariableSource:(id)arg1 completionHandler:(id /* block */)arg2;

@end
