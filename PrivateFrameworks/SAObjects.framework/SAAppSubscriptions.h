
@interface SAAppSubscriptions : SADomainObject <SABackgroundContextObject>

@property (nonatomic, copy) NSArray *activeSubscriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)appSubscriptions;
+ (id)appSubscriptionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)activeSubscriptions;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setActiveSubscriptions:(id)arg1;

@end
