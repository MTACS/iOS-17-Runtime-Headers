
@interface EMDeliveryAccount : EMAccount <EMDeliveryAccountBuilder> {
    NSString * _hostname;
    unsigned long long  _maximumMessageBytes;
    NSString * _name;
    bool  _primaryiCloudAccount;
    NSString * _username;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostname;
@property (nonatomic) unsigned long long maximumMessageBytes;
@property (getter=isPrimaryiCloudAccount, nonatomic) bool primaryiCloudAccount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitName:(id)arg1 hostname:(id)arg2 builder:(id /* block */)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)hostname;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1 name:(id)arg2 hostname:(id)arg3 builder:(id /* block */)arg4;
- (bool)isPrimaryiCloudAccount;
- (unsigned long long)maximumMessageBytes;
- (id)name;
- (void)setHostname:(id)arg1;
- (void)setMaximumMessageBytes:(unsigned long long)arg1;
- (void)setPrimaryiCloudAccount:(bool)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
