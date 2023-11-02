
@interface WBSCloudTabDevice : NSObject <NSCopying, WBSCloudTabProvider> {
    bool  _closeRequestSupported;
    bool  _cloudKitBookmarkSyncingSupported;
    NSString * _disambiguatedName;
    bool  _ephemeralDevice;
    bool  _hasDuplicateName;
    NSDate * _lastModified;
    NSString * _name;
    NSArray * _tabs;
    NSString * _uuid;
}

@property (getter=isCloseRequestSupported, nonatomic, readonly) bool closeRequestSupported;
@property (getter=isCloudKitBookmarkSyncingSupported, nonatomic, readonly) bool cloudKitBookmarkSyncingSupported;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSString *disambiguatedName;
@property (getter=isEphemeralDevice, nonatomic, readonly) bool ephemeralDevice;
@property (nonatomic, readonly) bool hasDuplicateName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *tabs;
@property (nonatomic, readonly, copy) NSString *uuid;

+ (id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(bool)arg3 tabs:(id)arg4 isEphemeralDevice:(bool)arg5;
+ (id)deviceNameInDictionary:(id)arg1;
+ (bool)hasDuplicateDeviceNameInDictionary:(id)arg1;
+ (bool)isCloudTabDeviceDictionary:(id)arg1;
+ (bool)isEphemeralDeviceInDictionary:(id)arg1;
+ (id)lastModifiedDateInDictionary:(id)arg1;
+ (unsigned long long)tabCountInDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceByRemovingTab:(id)arg1;
- (id)deviceByRemovingTabs:(id)arg1;
- (id)deviceBySettingDisambiguatedName:(id)arg1;
- (id)dictionaryRepresentation;
- (id)disambiguatedName;
- (bool)hasDuplicateName;
- (unsigned long long)hash;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(bool)arg3 tabs:(id)arg4 uuid:(id)arg5;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(bool)arg3 tabs:(id)arg4 uuid:(id)arg5 isEphemeralDevice:(bool)arg6;
- (id)initWithDictionary:(id)arg1 uuid:(id)arg2;
- (bool)isCloseRequestSupported;
- (bool)isCloudKitBookmarkSyncingSupported;
- (bool)isEphemeralDevice;
- (bool)isEqual:(id)arg1;
- (id)lastModified;
- (id)name;
- (id)tabs;
- (id)uuid;

@end
