
@interface CSLPRFApp : NSObject <CSLPRFApplication> {
    NSString * _SDKVersion;
    NSURL * _URL;
    LSApplicationRecord * _applicationRecord;
    BBSectionInfo * _bbSectionInfo;
    NSString * _bundleIdentifier;
    NSArray * _counterpartIdentifiers;
    bool  _defaultsToPrivateAlwaysOnDisplayTreatment;
    bool  _isBBSourcedApplication;
    bool  _isRemovedSystemApp;
    bool  _local;
    NSString * _localizedName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    LSApplicationRecord * _lock_applicationRecord;
    bool  _supportsAlwaysOnDisplay;
}

@property (nonatomic, readonly, copy) NSString *SDKVersion;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) LSApplicationRecord *applicationRecord;
@property (nonatomic, readonly) BBSectionInfo *bbSectionInfo;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSArray *counterpartIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool defaultsToPrivateAlwaysOnDisplayTreatment;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBBSourcedApplication;
@property (nonatomic, readonly) bool isRemovedSystemApp;
@property (getter=isLocal, nonatomic, readonly) bool local;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *sdkVersion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAlwaysOnDisplay;

+ (id)appWithACXRemoteApplication:(id)arg1;
+ (id)appWithApplicationRecord:(id)arg1;
+ (id)appWithBBSectionInfo:(id)arg1;
+ (id)appWithBundleID:(id)arg1 name:(id)arg2 sdkVersion:(id)arg3 supportsAlwaysOnDisplay:(bool)arg4 defaultsToPrivateAlwaysOnDisplayTreatment:(bool)arg5;

- (void).cxx_destruct;
- (id)SDKVersion;
- (id)URL;
- (id)applicationRecord;
- (id)bbSectionInfo;
- (id)bundleID;
- (id)bundleIdentifier;
- (long long)compare:(id)arg1;
- (id)counterpartIdentifiers;
- (bool)defaultsToPrivateAlwaysOnDisplayTreatment;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 localizedName:(id)arg2 sdkVersion:(id)arg3 supportsAlwaysOnDisplay:(bool)arg4 defaultsToPrivateAlwaysOnDisplayTreatment:(bool)arg5 applicationRecord:(id)arg6 bbSectionInfo:(id)arg7;
- (bool)isBBSourcedApplication;
- (bool)isEqual:(id)arg1;
- (bool)isLocal;
- (bool)isRemovedSystemApp;
- (id)localizedName;
- (id)name;
- (id)sdkVersion;
- (bool)supportsAlwaysOnDisplay;

@end
