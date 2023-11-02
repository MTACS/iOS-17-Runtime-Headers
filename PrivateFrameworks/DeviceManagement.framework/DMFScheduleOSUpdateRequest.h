
@interface DMFScheduleOSUpdateRequest : DMFTaskRequest {
    unsigned long long  _action;
    NSString * _productKey;
    NSString * _productVersion;
    bool  _useDelay;
}

@property (nonatomic) unsigned long long action;
@property (nonatomic, copy) NSString *productKey;
@property (nonatomic, copy) NSString *productVersion;
@property (nonatomic) bool useDelay;

+ (bool)_action:(unsigned long long*)arg1 fromString:(id)arg2;
+ (id)_descriptionForAction:(unsigned long long)arg1;
+ (Class)allowlistedClassForResultObject;
+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)productKey;
- (id)productVersion;
- (void)setAction:(unsigned long long)arg1;
- (void)setProductKey:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setUseDelay:(bool)arg1;
- (bool)useDelay;

@end
