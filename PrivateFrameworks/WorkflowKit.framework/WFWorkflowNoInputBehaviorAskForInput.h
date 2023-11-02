
@interface WFWorkflowNoInputBehaviorAskForInput : NSObject <WFWorkflowNoInputBehavior> {
    Class  _contentItemClass;
    NSDictionary * _serializedParameters;
}

@property (nonatomic, readonly) Class contentItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *serializedParameters;
@property (readonly) Class superclass;

+ (id)behaviorName;
+ (bool)resolvesInput;

- (void).cxx_destruct;
- (Class)contentItemClass;
- (id)initWithContentItemClass:(Class)arg1 serializedParameters:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1;
- (void)resolveWithUserInterface:(id)arg1 runningDelegate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)serializedParameters;
- (id)serializedRepresentation;

@end
