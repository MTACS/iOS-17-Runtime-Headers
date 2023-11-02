
@interface HMIExternalPersonManagerSettings : HMFObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {
    bool  _importingFromPhotoLibraryEnabled;
    bool  _sharingFaceClassificationsEnabled;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isImportingFromPhotoLibraryEnabled) bool importingFromPhotoLibraryEnabled;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (getter=isSharingFaceClassificationsEnabled) bool sharingFaceClassificationsEnabled;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isImportingFromPhotoLibraryEnabled;
- (bool)isSharingFaceClassificationsEnabled;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setImportingFromPhotoLibraryEnabled:(bool)arg1;
- (void)setSharingFaceClassificationsEnabled:(bool)arg1;

@end
