
@interface AFPeerInfo : NSObject <AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSString * _aceVersion;
    NSString * _assistantIdentifier;
    NSString * _buildVersion;
    NSString * _homeKitAccessoryIdentifier;
    NSString * _idsDeviceUniqueIdentifier;
    NSString * _idsIdentifier;
    bool  _isCommunalDevice;
    bool  _isDeviceOwnedByCurrentUser;
    bool  _isLocationSharingDevice;
    bool  _isSiriCloudSyncEnabled;
    NSString * _mediaRouteIdentifier;
    NSString * _mediaSystemIdentifier;
    NSString * _name;
    NSString * _productType;
    NSString * _rapportEffectiveIdentifier;
    NSString * _roomName;
    NSString * _sharedUserIdentifier;
    NSString * _userInterfaceIdiom;
}

@property (nonatomic, readonly, copy) NSString *aceVersion;
@property (nonatomic, readonly, copy) NSString *assistantIdentifier;
@property (nonatomic, readonly, copy) NSString *buildVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *homeKitAccessoryIdentifier;
@property (nonatomic, readonly, copy) NSString *idsDeviceUniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *idsIdentifier;
@property (nonatomic, readonly) bool isCommunalDevice;
@property (nonatomic, readonly) bool isDeviceOwnedByCurrentUser;
@property (nonatomic, readonly) bool isLocationSharingDevice;
@property (nonatomic, readonly) bool isSiriCloudSyncEnabled;
@property (nonatomic, readonly, copy) NSString *mediaRouteIdentifier;
@property (nonatomic, readonly, copy) NSString *mediaSystemIdentifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *productType;
@property (nonatomic, readonly, copy) NSString *rapportEffectiveIdentifier;
@property (nonatomic, readonly, copy) NSString *roomName;
@property (nonatomic, readonly, copy) NSString *sharedUserID;
@property (nonatomic, readonly, copy) NSString *sharedUserIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *userInterfaceIdiom;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)aceVersion;
- (id)ad_shortDescription;
- (id)assistantIdentifier;
- (id)buildDictionaryRepresentation;
- (id)buildVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)homeKitAccessoryIdentifier;
- (id)idsDeviceUniqueIdentifier;
- (id)idsIdentifier;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithIsDeviceOwnedByCurrentUser:(bool)arg1 assistantIdentifier:(id)arg2 idsIdentifier:(id)arg3 idsDeviceUniqueIdentifier:(id)arg4 sharedUserID:(id)arg5 rapportEffectiveIdentifier:(id)arg6 homeKitAccessoryIdentifier:(id)arg7 mediaSystemIdentifier:(id)arg8 mediaRouteIdentifier:(id)arg9 isCommunalDevice:(bool)arg10 roomName:(id)arg11 name:(id)arg12 productType:(id)arg13 buildVersion:(id)arg14 userInterfaceIdiom:(id)arg15 aceVersion:(id)arg16;
- (id)initWithIsDeviceOwnedByCurrentUser:(bool)arg1 assistantIdentifier:(id)arg2 sharedUserIdentifier:(id)arg3 idsIdentifier:(id)arg4 idsDeviceUniqueIdentifier:(id)arg5 rapportEffectiveIdentifier:(id)arg6 homeKitAccessoryIdentifier:(id)arg7 mediaSystemIdentifier:(id)arg8 mediaRouteIdentifier:(id)arg9 isCommunalDevice:(bool)arg10 roomName:(id)arg11 name:(id)arg12 productType:(id)arg13 buildVersion:(id)arg14 userInterfaceIdiom:(id)arg15 aceVersion:(id)arg16 isLocationSharingDevice:(bool)arg17;
- (id)initWithIsDeviceOwnedByCurrentUser:(bool)arg1 assistantIdentifier:(id)arg2 sharedUserIdentifier:(id)arg3 idsIdentifier:(id)arg4 idsDeviceUniqueIdentifier:(id)arg5 rapportEffectiveIdentifier:(id)arg6 homeKitAccessoryIdentifier:(id)arg7 mediaSystemIdentifier:(id)arg8 mediaRouteIdentifier:(id)arg9 isCommunalDevice:(bool)arg10 roomName:(id)arg11 name:(id)arg12 productType:(id)arg13 buildVersion:(id)arg14 userInterfaceIdiom:(id)arg15 aceVersion:(id)arg16 isLocationSharingDevice:(bool)arg17 isSiriCloudSyncEnabled:(bool)arg18;
- (bool)isCommunalDevice;
- (bool)isDeviceOwnedByCurrentUser;
- (bool)isEqual:(id)arg1;
- (bool)isLocationSharingDevice;
- (bool)isSiriCloudSyncEnabled;
- (id)mediaRouteIdentifier;
- (id)mediaSystemIdentifier;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)name;
- (id)productType;
- (id)rapportEffectiveIdentifier;
- (id)roomName;
- (id)sharedUserID;
- (id)sharedUserIdentifier;
- (id)userInterfaceIdiom;

@end
