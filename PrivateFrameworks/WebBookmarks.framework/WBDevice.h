
@interface WBDevice : NSObject <NSCopying, WBBookmarkRepresentable, WBSCloudTabProvider> {
    WebBookmark * _bookmark;
    NSString * _profileIdentifier;
    bool  _remoteDevice;
    NSArray * _unnamedTabGroups;
}

@property (nonatomic, retain) WebBookmark *bookmark;
@property (getter=isCloseRequestSupported, nonatomic, readonly) bool closeRequestSupported;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *disambiguatedName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSDictionary *modifiedSettingsFieldsByName;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) bool needsSecureDelete;
@property (nonatomic, readonly, copy) NSString *privacyPreservingDescription;
@property (nonatomic, readonly, copy) NSString *profileIdentifier;
@property (getter=isRemoteDevice, nonatomic, readonly) bool remoteDevice;
@property (readonly) Class superclass;
@property (nonatomic, copy) WBSCRDTPosition *syncPosition;
@property (nonatomic, readonly, copy) NSArray *tabs;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *unnamedMutableTabGroups;
@property (nonatomic, readonly, copy) NSArray *unnamedTabGroups;
@property (nonatomic, readonly, copy) NSString *uuid;

+ (id)currentDeviceIdentifier;

- (void).cxx_destruct;
- (int)_identifier;
- (id)bookmark;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)disambiguatedName;
- (unsigned long long)hash;
- (id)initWithBookmark:(id)arg1;
- (id)initWithBookmark:(id)arg1 unnamedTabGroups:(id)arg2 profileIdentifier:(id)arg3;
- (id)initWithTitle:(id)arg1 deviceIdentifier:(id)arg2 remote:(bool)arg3 unnamedTabGroups:(id)arg4 profileIdentifier:(id)arg5;
- (bool)isCloseRequestSupported;
- (bool)isEqual:(id)arg1;
- (bool)isInserted;
- (bool)isRemoteDevice;
- (void)mergeWithDevice:(id)arg1;
- (id)name;
- (bool)needsSecureDelete;
- (id)privacyPreservingDescription;
- (id)profileIdentifier;
- (void)setBookmark:(id)arg1;
- (void)setSyncPosition:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnnamedMutableTabGroups:(id)arg1;
- (id)syncPosition;
- (id)tabs;
- (id)title;
- (id)unnamedMutableTabGroups;
- (id)unnamedTabGroups;
- (id)uuid;

@end
