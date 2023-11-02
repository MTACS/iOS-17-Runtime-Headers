
@interface PKSEConsistencyCheckDeviceCredentialAppletProperties : NSObject {
    bool  _container;
    bool  _locked;
}

@property (getter=isContainer, nonatomic, readonly) bool container;
@property (getter=isLocked, nonatomic, readonly) bool locked;

- (id)description;
- (id)init;
- (bool)isContainer;
- (bool)isLocked;

@end
