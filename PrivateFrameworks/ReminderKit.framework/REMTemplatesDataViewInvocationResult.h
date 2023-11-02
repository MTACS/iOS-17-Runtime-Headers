
@interface REMTemplatesDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {
    NSArray * _templateStorages;
}

@property (nonatomic, readonly) NSArray *templateStorages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplateStorages:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)templateStorages;

@end
