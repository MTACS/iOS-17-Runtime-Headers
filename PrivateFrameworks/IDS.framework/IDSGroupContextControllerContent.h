
@interface IDSGroupContextControllerContent : NSObject {
    ENAccountIdentity * _accountIdentity;
    IDSCloudKitContainer * _cloudKitContainer;
    ENGroupContext * _groupContext;
}

@property (nonatomic, retain) ENAccountIdentity *accountIdentity;
@property (nonatomic, retain) IDSCloudKitContainer *cloudKitContainer;
@property (nonatomic, retain) ENGroupContext *groupContext;

- (void).cxx_destruct;
- (id)accountIdentity;
- (id)cloudKitContainer;
- (id)groupContext;
- (void)setAccountIdentity:(id)arg1;
- (void)setCloudKitContainer:(id)arg1;
- (void)setGroupContext:(id)arg1;

@end
