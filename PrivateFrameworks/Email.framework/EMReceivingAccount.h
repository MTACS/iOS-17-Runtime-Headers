
@interface EMReceivingAccount : EMAccount <EMReceivingAccountBuilder> {
    EMDeliveryAccount * _deliveryAccount;
    NSArray * _emailAddresses;
    NSString * _hostname;
    bool  _isLocalAccount;
    NSString * _name;
    bool  _primaryiCloudAccount;
    bool  _shouldArchiveByDefault;
    bool  _sourceIsManaged;
    NSString * _statisticsKind;
    NSString * _username;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) EMDeliveryAccount *deliveryAccount;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *emailAddresses;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostname;
@property (nonatomic) bool isLocalAccount;
@property (getter=isPrimaryiCloudAccount, nonatomic) bool primaryiCloudAccount;
@property (nonatomic) bool shouldArchiveByDefault;
@property (nonatomic) bool sourceIsManaged;
@property (nonatomic, copy) NSString *statisticsKind;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(id /* block */)arg3;
- (id)deliveryAccount;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)hostname;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(id /* block */)arg4;
- (bool)isLocalAccount;
- (bool)isPrimaryiCloudAccount;
- (id)name;
- (void)setDeliveryAccount:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setIsLocalAccount:(bool)arg1;
- (void)setPrimaryiCloudAccount:(bool)arg1;
- (void)setShouldArchiveByDefault:(bool)arg1;
- (void)setSourceIsManaged:(bool)arg1;
- (void)setStatisticsKind:(id)arg1;
- (void)setUsername:(id)arg1;
- (bool)shouldArchiveByDefault;
- (bool)sourceIsManaged;
- (id)statisticsKind;
- (id)username;

@end
