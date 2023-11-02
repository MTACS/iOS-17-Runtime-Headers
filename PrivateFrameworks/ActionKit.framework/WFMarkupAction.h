
@interface WFMarkupAction : WFAction

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)inputDictionary;
- (id)localizedSubcategoryForCategory:(id)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (id)subcategoryForCategory:(id)arg1;

@end
