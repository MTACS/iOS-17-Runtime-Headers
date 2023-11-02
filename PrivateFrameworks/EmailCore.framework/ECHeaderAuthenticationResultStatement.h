
@interface ECHeaderAuthenticationResultStatement : NSObject {
    unsigned long long  _hash;
    NSString * _method;
    NSArray * _properties;
    NSString * _reason;
    NSString * _result;
}

@property (nonatomic, readonly, copy) NSString *method;
@property (nonatomic, readonly, copy) NSArray *properties;
@property (nonatomic, readonly, copy) NSString *reason;
@property (nonatomic, readonly, copy) NSString *result;

- (void).cxx_destruct;
- (id)_valueForPropertyPassingTest:(id /* block */)arg1;
- (id)initWithMethod:(id)arg1 result:(id)arg2 reason:(id)arg3 properties:(id)arg4;
- (id)method;
- (id)properties;
- (id)reason;
- (id)result;
- (id)valueForFullProperty:(id)arg1;
- (id)valueForPropertyType:(id)arg1 property:(id)arg2;

@end
