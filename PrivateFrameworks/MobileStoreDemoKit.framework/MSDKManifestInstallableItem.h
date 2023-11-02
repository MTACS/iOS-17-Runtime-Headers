
@interface MSDKManifestInstallableItem : MSDKManifestItem {
    NSNumber * _appType;
    NSString * _bundleFilePath;
    NSString * _bundleShortVersionString;
    NSData * _fileHash;
    NSString * _identifier;
    bool  _isContainerized;
    NSString * _osVersion;
    NSString * _platformType;
    NSDictionary * _privacyPermissions;
    NSNumber * _realSize;
    NSNumber * _size;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) NSNumber *appType;
@property (nonatomic, readonly) NSString *bundleFilePath;
@property (nonatomic, readonly) NSString *bundleShortVersionString;
@property (nonatomic, readonly) NSData *fileHash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isContainerized;
@property (nonatomic, readonly) bool isSystemApp;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *platformType;
@property (nonatomic, readonly) NSDictionary *privacyPermissions;
@property (nonatomic, readonly) NSNumber *realSize;
@property (nonatomic, readonly) NSNumber *size;
@property (nonatomic, readonly) NSString *uniqueID;

- (void).cxx_destruct;
- (id)appType;
- (id)bundleFilePath;
- (id)bundleShortVersionString;
- (id)description;
- (id)fileHash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 andDictionary:(id)arg2 forComponent:(id)arg3;
- (bool)isContainerized;
- (bool)isSystemApp;
- (id)osVersion;
- (id)platformType;
- (id)privacyPermissions;
- (id)realSize;
- (id)size;
- (id)uniqueID;

@end
