
@interface REMSmartListsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding> {
    NSDictionary * _accountStorages;
    NSDictionary * _parentListStorages;
    NSArray * _smartListStorages;
}

@property (nonatomic, readonly) NSDictionary *accountStorages;
@property (nonatomic, readonly) NSDictionary *parentListStorages;
@property (nonatomic, readonly) NSArray *smartListStorages;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountStorages;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSmartListStorages:(id)arg1;
- (id)initWithSmartListStorages:(id)arg1 accountStorages:(id)arg2 parentListStorages:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)parentListStorages;
- (id)smartListStorages;

@end
