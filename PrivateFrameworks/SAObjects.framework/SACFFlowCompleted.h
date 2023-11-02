
@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, retain) SACFProvideContext *updateContext;

+ (id)flowCompleted;
+ (id)flowCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)domain;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setDomain:(id)arg1;
- (void)setUpdateContext:(id)arg1;
- (id)updateContext;

@end
