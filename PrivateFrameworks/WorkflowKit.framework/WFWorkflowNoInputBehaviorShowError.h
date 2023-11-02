
@interface WFWorkflowNoInputBehaviorShowError : NSObject <WFWorkflowNoInputBehavior> {
    NSString * _errorString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *errorString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)behaviorName;
+ (bool)resolvesInput;

- (void).cxx_destruct;
- (id)errorString;
- (id)initWithErrorString:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (void)resolveWithUserInterface:(id)arg1 runningDelegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serializedRepresentation;

@end
