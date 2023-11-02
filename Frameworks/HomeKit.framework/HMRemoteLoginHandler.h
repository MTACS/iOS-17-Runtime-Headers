
@interface HMRemoteLoginHandler : NSObject <HFStateDumpBuildable, HMAccessoryInfoDataProviderDelegate, HMFLogging, HMFMessageReceiver, HMObjectMerge, NSSecureCoding> {
    HMAccessory * _accessory;
    HMAccessoryInfoDataProvider * _accessoryInfoDataProvider;
    HMRemoteLoginAnisetteDataProvider * _anisetteDataProvider;
    _HMContext * _context;
    NSString * _currentSessionID;
    bool  _didReceiveAccountInfo;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    ACAccount * _loggedInAccount;
    ACAccount * _stagedLoggedInAccount;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property HMAccessory *accessory;
@property (nonatomic, retain) HMAccessoryInfoDataProvider *accessoryInfoDataProvider;
@property (nonatomic, readonly) HMRemoteLoginAnisetteDataProvider *anisetteDataProvider;
@property (nonatomic, retain) _HMContext *context;
@property (getter=isControllable, readonly) bool controllable;
@property (retain) NSString *currentSessionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool didReceiveAccountInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ACAccount *loggedInAccount;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isSessionInProgress, nonatomic, readonly) bool sessionInProgress;
@property (retain) ACAccount *stagedLoggedInAccount;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_accountFromAccountInfo:(id)arg1;
- (void)_callAccountUpdateDelegate;
- (void)_companionLoginWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (bool)_configureAccessoryInfoDataProviderIfNeeded;
- (void)_configureWithContext:(id)arg1 accessory:(id)arg2;
- (void)_handleLoginResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleQueryProxiedDeviceResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleRemoteLoginAccountUpdated:(id)arg1;
- (void)_handleRemoteLoginSignoutResponse:(id)arg1 error:(id)arg2 completion:(id /* block */)arg3;
- (void)_proxyLoginWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)_queryProxiedDevice:(id /* block */)arg1;
- (void)_signout:(id /* block */)arg1;
- (id)accessory;
- (id)accessoryInfoDataProvider;
- (void)accessoryInfoDataProvider:(id)arg1 didReceiveUpdatesForAccessoryWithIdentifier:(id)arg2 accountInfo:(id)arg3;
- (id)anisetteDataProvider;
- (void)companionLoginWithAccount:(id)arg1 completion:(id /* block */)arg2;
- (id)context;
- (id)currentSessionID;
- (id)description;
- (bool)didReceiveAccountInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 loggedInAccount:(id)arg3 stagedLoggedInAccount:(id)arg4 anisetteDataProvider:(id)arg5;
- (bool)isControllable;
- (bool)isSessionInProgress;
- (id)logIdentifier;
- (id)loggedInAccount;
- (bool)mergeFromNewObject:(id)arg1;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (void)postConfigure;
- (void)proxyLoginWithAuthResults:(id)arg1 completion:(id /* block */)arg2;
- (void)queryProxiedDevice:(id /* block */)arg1;
- (void)registerForMessages;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryInfoDataProvider:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCurrentSessionID:(id)arg1;
- (void)setDidReceiveAccountInfo:(bool)arg1;
- (void)setLoggedInAccount:(id)arg1;
- (void)setStagedLoggedInAccount:(id)arg1;
- (void)signout:(id /* block */)arg1;
- (id)stagedLoggedInAccount;
- (id)uniqueIdentifier;
- (void)updateLoggedInAccount:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_appleMusicInAppAuthenticationContext;

@end
