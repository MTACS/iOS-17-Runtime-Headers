
@interface SASmsDraftShow : SADomainCommand

@property (nonatomic, copy) NSURL *smsIdentifier;

+ (id)draftShow;
+ (id)draftShowWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setSmsIdentifier:(id)arg1;
- (id)smsIdentifier;

@end
