
@interface IDSSignInServiceUserStatus : NSObject {
    unsigned long long  _serviceType;
    NSArray * _serviceUserInfos;
}

@property (nonatomic, readonly) unsigned long long appleIDUserStatus;
@property (nonatomic, readonly) unsigned long long phoneUserStatus;
@property (nonatomic, readonly) unsigned long long serviceType;
@property (nonatomic, readonly) NSArray *serviceUserInfos;

- (void).cxx_destruct;
- (unsigned long long)appleIDUserStatus;
- (id)description;
- (id)initWithServiceType:(unsigned long long)arg1 userInfos:(id)arg2;
- (unsigned long long)phoneUserStatus;
- (unsigned long long)serviceType;
- (id)serviceUserInfos;

@end
