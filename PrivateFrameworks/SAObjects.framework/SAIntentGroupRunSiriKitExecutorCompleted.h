
@interface SAIntentGroupRunSiriKitExecutorCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsServerExecution;
@property (nonatomic) bool needsUserInput;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)runSiriKitExecutorCompleted;
+ (id)runSiriKitExecutorCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)needsServerExecution;
- (bool)needsUserInput;
- (bool)requiresResponse;
- (void)setNeedsServerExecution:(bool)arg1;
- (void)setNeedsUserInput:(bool)arg1;

@end
