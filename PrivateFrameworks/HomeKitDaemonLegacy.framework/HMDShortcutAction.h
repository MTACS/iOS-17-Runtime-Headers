
@interface HMDShortcutAction : HMDAction <NSCopying> {
    WFHomeWorkflowController * _controller;
    WFHomeWorkflow * _shortcut;
    NSData * _shortcutData;
}

+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 actionSet:(id)arg3;
+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedAccessories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)entitlementsForNotification;
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3;
- (id)initWithSerializedShortcut:(id)arg1 uuid:(id)arg2 actionSet:(id)arg3;
- (bool)isAssociatedWithAccessory:(id)arg1;
- (bool)isCompatibleWithAction:(id)arg1;
- (bool)isUnsecuringAction;
- (Class)modelClass;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;
- (id)removeShortcut;
- (bool)requiresDeviceUnlock;
- (id)stateDump;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (unsigned long long)type;

@end
