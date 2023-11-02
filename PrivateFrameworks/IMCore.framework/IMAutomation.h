
@interface IMAutomation : NSObject

- (id)IMCoreAutomationPerformOperationWithDictionary:(id)arg1;
- (id)callIMCoreMethodWithDictionary:(id)arg1;
- (bool)checkArgumentValidity:(id)arg1 forExpectedNumberOfArguments:(int)arg2;
- (id)startConversationFrom:(id)arg1 andReceiveAt:(id)arg2;

@end
