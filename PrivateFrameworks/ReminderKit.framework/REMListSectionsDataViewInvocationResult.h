
@interface REMListSectionsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {
    NSArray * _accountStorages;
    NSArray * _listSectionStorages;
    NSArray * _listStorages;
}

@property (nonatomic, readonly) NSArray *accountStorages;
@property (nonatomic, readonly) NSArray *listSectionStorages;
@property (nonatomic, readonly) NSArray *listStorages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountStorages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 listSectionStorages:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)listSectionStorages;
- (id)listStorages;

@end
