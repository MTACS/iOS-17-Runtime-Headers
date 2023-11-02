
@interface WFFaceTimeContextualAction : WFTopHitItemContextualAction

@property (nonatomic, readonly) INPerson *person;

- (id)initWithPerson:(id)arg1 type:(unsigned long long)arg2 callTypeSerializedRepresentation:(id)arg3 personSerializedRepresentation:(id)arg4 namedQueryInfo:(id)arg5;
- (id)person;
- (id)uniqueIdentifier;

@end
