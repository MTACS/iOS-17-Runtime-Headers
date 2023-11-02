
@interface REMTemplateSectionsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {
    NSArray * _templateSectionStorages;
    NSArray * _templateStorages;
}

@property (nonatomic, readonly) NSArray *templateSectionStorages;
@property (nonatomic, readonly) NSArray *templateStorages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplateStorages:(id)arg1 templateSectionStorages:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)templateSectionStorages;
- (id)templateStorages;

@end
