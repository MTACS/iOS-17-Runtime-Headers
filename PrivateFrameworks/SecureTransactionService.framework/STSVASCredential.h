
@interface STSVASCredential : STSAuxiliaryCredential {
    NSData * _data;
    NSData * _merchantId;
    NSData * _mobileToken;
    bool  _userInterventionRequired;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSData *merchantId;
@property (nonatomic, retain) NSData *mobileToken;
@property (nonatomic) bool userInterventionRequired;

+ (bool)supportsSecureCoding;
+ (id)vasCredentialWithMerchantId:(id)arg1 data:(id)arg2 mobileToken:(id)arg3 userInterventionRequired:(bool)arg4;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMerchantId:(id)arg1 data:(id)arg2 mobileToken:(id)arg3 userInterventionRequired:(bool)arg4;
- (id)merchantId;
- (id)mobileToken;
- (void)setData:(id)arg1;
- (void)setMerchantId:(id)arg1;
- (void)setMobileToken:(id)arg1;
- (void)setUserInterventionRequired:(bool)arg1;
- (bool)userInterventionRequired;

@end
