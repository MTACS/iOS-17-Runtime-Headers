
@interface WatchSportsEventIntent : INIntent

@property (nonatomic, copy) NSString *matchupId;
@property (nonatomic, copy) NSData *usoEntityData;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
