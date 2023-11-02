
@interface DIVerificationSessionContext : NSObject <NSSecureCoding> {
    NSDictionary * _httpHeaders;
    unsigned long long  _invocationReason;
    NSArray * _preferredLanguages;
    NSString * _regionCode;
    NSString * _serviceName;
    NSString * _serviceURL;
    NSString * _tier;
}

@property (nonatomic, readonly) NSDictionary *httpHeaders;
@property (nonatomic) unsigned long long invocationReason;
@property (nonatomic, copy) NSArray *preferredLanguages;
@property (nonatomic, copy) NSString *regionCode;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) NSString *serviceURL;
@property (nonatomic, readonly) NSString *tier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)httpHeaders;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 tier:(id)arg2 serviceUrl:(id)arg3 httpHeaders:(id)arg4;
- (unsigned long long)invocationReason;
- (id)preferredLanguages;
- (id)regionCode;
- (id)serviceName;
- (id)serviceURL;
- (void)setInvocationReason:(unsigned long long)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setRegionCode:(id)arg1;
- (id)tier;

@end
