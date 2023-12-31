
@interface SASmsGroupSearch : SADomainCommand

@property (nonatomic, copy) NSString *smsGroupName;

+ (id)groupSearch;
+ (id)groupSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setSmsGroupName:(id)arg1;
- (id)smsGroupName;

@end
