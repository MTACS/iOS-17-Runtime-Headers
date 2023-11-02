
@interface DMFScheduleOSUpdateResultObject : CATTaskResultObject {
    unsigned long long  _action;
    NSError * _error;
    NSString * _productKey;
}

@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) NSString *productKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithAction:(unsigned long long)arg1 productKey:(id)arg2 error:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)productKey;

@end
