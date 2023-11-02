
@interface WFStartPhoneCallContextualAction : WFTopHitItemContextualAction

@property (nonatomic, readonly) INPerson *person;

+ (void)getTopHitContextualActionsWithLimit:(long long)arg1 completion:(id /* block */)arg2;

- (id)initWithPerson:(id)arg1 serializedRepresentation:(id)arg2 namedQueryInfo:(id)arg3;
- (id)person;
- (id)uniqueIdentifier;

@end
