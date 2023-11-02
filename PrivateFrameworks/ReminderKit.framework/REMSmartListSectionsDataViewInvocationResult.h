
@interface REMSmartListSectionsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {
    NSArray * _accountStorages;
    NSArray * _groupStorages;
    NSArray * _smartListSectionStorages;
    NSArray * _smartListStorages;
}

@property (nonatomic, readonly) NSArray *accountStorages;
@property (nonatomic, readonly) NSArray *groupStorages;
@property (nonatomic, readonly) NSArray *smartListSectionStorages;
@property (nonatomic, readonly) NSArray *smartListStorages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountStorages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)groupStorages;
- (unsigned long long)hash;
- (id)initWithAccountStorages:(id)arg1 smartListStorages:(id)arg2 groupStorages:(id)arg3 smartListSectionStorages:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)smartListSectionStorages;
- (id)smartListStorages;

@end
