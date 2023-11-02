
@interface HMPhotosPersonManagerSettings : NSObject <HMDPersonManagerSettings, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _importingFromPhotoLibraryEnabled;
    bool  _sharingFaceClassificationsEnabled;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, readonly) bool enabled;
@property (readonly) unsigned long long hash;
@property (getter=isImportingFromPhotoLibraryEnabled) bool importingFromPhotoLibraryEnabled;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly) bool requiresPersistentStorage;
@property (getter=isSharingFaceClassificationsAllowed, readonly) bool sharingFaceClassificationsAllowed;
@property (getter=isSharingFaceClassificationsEnabled) bool sharingFaceClassificationsEnabled;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isImportingFromPhotoLibraryEnabled;
- (bool)isSharingFaceClassificationsAllowed;
- (bool)isSharingFaceClassificationsEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)privateDescription;
- (void)setImportingFromPhotoLibraryEnabled:(bool)arg1;
- (void)setSharingFaceClassificationsEnabled:(bool)arg1;
- (id)shortDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)createHMHomePersonManagerSettings;
- (id)createHMIExternalPersonManagerSettings;
- (id)createHMIHomePersonManagerSettings;
- (id)createHMPhotosPersonManagerSettings;
- (bool)requiresPersistentStorage;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

- (id)createHMHomePersonManagerSettings;
- (id)createHMIExternalPersonManagerSettings;
- (id)createHMIHomePersonManagerSettings;
- (id)createHMPhotosPersonManagerSettings;
- (bool)requiresPersistentStorage;

@end
