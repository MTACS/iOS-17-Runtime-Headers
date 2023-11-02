
@interface SwitchProfileIntent : INIntent

@property (nonatomic, retain) Account *account;
@property (nonatomic, copy) NSString *homeUserId;
@property (nonatomic, copy) NSString *iCloudAltDSID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long switchType;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3;
- (id)initWithIdentifier:(id)arg1 backingStore:(id)arg2;

@end
