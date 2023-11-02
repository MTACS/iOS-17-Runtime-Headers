
@interface WFWorkflowNoInputBehaviorGetClipboard : NSObject <WFWorkflowNoInputBehavior>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)behaviorName;
+ (bool)resolvesInput;

- (id)initWithSerializedRepresentation:(id)arg1;
- (void)resolveWithUserInterface:(id)arg1 runningDelegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serializedRepresentation;

@end
