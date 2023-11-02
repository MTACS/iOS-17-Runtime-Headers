
@interface CKDApplicationMetadata : NSObject {
    long long  _adopterProcessType;
    NSString * _applicationContainerPath;
    unsigned int  _clientSDKVersion;
    NSString * _containingBundleID;
    CKEntitlements * _entitlements;
    bool  _isClientMainBundleAppleExecutable;
}

@property (nonatomic) long long adopterProcessType;
@property (nonatomic, copy) NSString *applicationContainerPath;
@property (nonatomic) unsigned int clientSDKVersion;
@property (nonatomic, copy) NSString *containingBundleID;
@property (nonatomic, retain) CKEntitlements *entitlements;
@property (nonatomic) bool isClientMainBundleAppleExecutable;

- (void).cxx_destruct;
- (long long)adopterProcessType;
- (id)applicationContainerPath;
- (unsigned int)clientSDKVersion;
- (id)containingBundleID;
- (id)entitlements;
- (id)init;
- (id)initWithAdopterProcessType:(long long)arg1 containingBundleID:(id)arg2 applicationContainerPath:(id)arg3 entitlements:(id)arg4 clientSDKVersion:(unsigned int)arg5 isClientMainBundleAppleExecutable:(bool)arg6;
- (bool)isClientMainBundleAppleExecutable;
- (void)setAdopterProcessType:(long long)arg1;
- (void)setApplicationContainerPath:(id)arg1;
- (void)setClientSDKVersion:(unsigned int)arg1;
- (void)setContainingBundleID:(id)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setIsClientMainBundleAppleExecutable:(bool)arg1;

@end
