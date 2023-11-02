
@interface EMAccount : EMObject {
    NSString * _hostname;
    NSString * _name;
    bool  _primaryiCloudAccount;
    NSString * _username;
}

@property (nonatomic, readonly, copy) NSString *hostname;
@property (nonatomic, readonly, copy) NSString *name;
@property (getter=isPrimaryiCloudAccount, nonatomic, readonly) bool primaryiCloudAccount;
@property (nonatomic, readonly, copy) NSString *username;

+ (id)predicateForDeliveryAccounts;
+ (id)predicateForReceivingAccounts;
+ (id)sortDescriptorForNameAscending:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ef_publicDescription;
- (id)hostname;
- (bool)isEqual:(id)arg1;
- (bool)isPrimaryiCloudAccount;
- (id)name;
- (id)username;

@end
