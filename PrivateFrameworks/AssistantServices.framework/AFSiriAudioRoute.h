
@interface AFSiriAudioRoute : NSObject {
    long long  _announcePlatformForRoute;
    NSString * _avAudioRouteName;
    unsigned long long  _availableAnnouncementRequestTypes;
    NSDictionary * _avscRouteDescription;
    NSString * _btAddress;
    bool  _builtInSpeakerAnnounceEnabled;
    bool  _headsetSupportsAnnounceCalls;
    bool  _headsetSupportsFauxIED;
    bool  _headsetSupportsIED;
    bool  _hearingAidsAnnounceEnabled;
    bool  _inEarDetectEnabled;
    bool  _inEarDetectEnabledSpecified;
    bool  _isBuiltInSpeakerRoute;
    bool  _isDoAPCapable;
    bool  _isGenuineAppleAccessory;
    bool  _isHeadsetInEar;
    bool  _isHearingAidsRoute;
    bool  _isInTriangleMode;
    bool  _isOtherDeviceConnected;
    bool  _isRouteCurrentlyPicked;
    bool  _isTipiRoute;
    NSString * _name;
    NSString * _productID;
    bool  _shouldDeferToOtherConnectedDevice;
    bool  _shouldTakeRouteFromOtherConnectedDevice;
}

@property (nonatomic) long long announcePlatformForRoute;
@property (nonatomic) unsigned long long availableAnnouncementRequestTypes;
@property (nonatomic, retain) NSDictionary *avscRouteDescription;
@property (nonatomic, retain) NSString *btAddress;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *productID;

- (void).cxx_destruct;
- (long long)_announcementPlatform;
- (unsigned long long)_getRouteCapabilities;
- (void)_initializeInternalState;
- (bool)_isBuiltInSpeakerRoute;
- (bool)_isHearingAidsRoute;
- (long long)announcePlatformForRoute;
- (unsigned long long)availableAnnouncementRequestTypes;
- (id)avscRouteDescription;
- (id)btAddress;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)hasAuthenticationCapability;
- (unsigned long long)hash;
- (id)initWithRouteDescription:(id)arg1 hearingAidsAnnounceEnabled:(bool)arg2 builtInSpeakerAnnounceEnabled:(bool)arg3;
- (bool)isEqualToRoute:(id)arg1;
- (bool)isRouteCurrentlyPicked;
- (bool)isThirdPartyBluetoothHeadset;
- (id)name;
- (id)productID;
- (id)routeName;
- (void)setAnnouncePlatformForRoute:(long long)arg1;
- (void)setAvailableAnnouncementRequestTypes:(unsigned long long)arg1;
- (void)setAvscRouteDescription:(id)arg1;
- (void)setBtAddress:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProductID:(id)arg1;
- (bool)supportsVolumeAdjustment;

@end
