
@interface SAReminderListSearch : SADomainCommand

@property (nonatomic, copy) NSString *accountName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SAReminderTrigger *trigger;

+ (id)listSearch;
+ (id)listSearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)accountName;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)name;
- (bool)requiresResponse;
- (void)setAccountName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTrigger:(id)arg1;
- (id)trigger;

@end
