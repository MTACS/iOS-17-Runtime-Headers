
@interface HMDConfigurationMessagePolicy : HMFMessagePolicy {
    unsigned long long  _operationTypes;
}

@property (readonly) unsigned long long operationTypes;

+ (id)policyWithOperationTypes:(unsigned long long)arg1;

- (id)__initWithOperationTypes:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)operationTypes;

@end
