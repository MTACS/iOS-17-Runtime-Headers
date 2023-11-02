
@protocol WFWorkflowNoInputBehavior <NSObject>

@required

+ (NSString *)behaviorName;
+ (bool)resolvesInput;

- (id)initWithSerializedRepresentation:(NSDictionary *)arg1;
- (void)resolveWithUserInterface:(void *)arg1 runningDelegate:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: <WFUserInterfaceHost> *, <WFWorkflowNoInputBehaviorDelegate> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFContentCollection *, NSError *, void*
- (NSDictionary *)serializedRepresentation;

@end
