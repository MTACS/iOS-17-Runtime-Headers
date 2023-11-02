
@interface CRCarPlayCapabilities : NSObject <NSSecureCoding> {
    NSValue * _dashboardRoundedCorners;
    unsigned long long  _disabledFeature;
    long long  _nowPlayingAlbumArtMode;
    bool  _persisted;
    NSDictionary * _userInfo;
    long long  _userInterfaceStyle;
    NSString * _version;
    NSValue * _viewAreaInsets;
}

@property (nonatomic, retain) NSValue *dashboardRoundedCorners;
@property (nonatomic) unsigned long long disabledFeature;
@property (nonatomic) long long nowPlayingAlbumArtMode;
@property (nonatomic) bool persisted;
@property (nonatomic, copy) NSDictionary *userInfo;
@property (nonatomic) long long userInterfaceStyle;
@property (nonatomic, copy) NSString *version;
@property (nonatomic, retain) NSValue *viewAreaInsets;

+ (void)_resetCapabilitiesGlobalDomain;
+ (id)capabilitiesIdentifier;
+ (id)capabilitiesVersion;
+ (id)carPlayCapabilitiesCache;
+ (id)fetchCarCapabilities;
+ (void)invalidateCarPlayCapabilitiesCache;
+ (id)newCapabilitiesFromGlobalDomain;
+ (void)setCapabilitiesIdentifier:(id)arg1;
+ (void)setCapabilitiesVersion:(id)arg1;
+ (void)setCarPlayCapabilitiesCache:(id)arg1;
+ (bool)supportsSecureCoding;
+ (void)waitForCarCapabilitiesValuesWithReply:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dashboardRoundedCorners;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)disabledFeature;
- (void)encodeWithCoder:(id)arg1;
- (id)informativeText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCapabilities:(id)arg1;
- (long long)nowPlayingAlbumArtMode;
- (void)persistCapabilitiesToGlobalDomain;
- (bool)persisted;
- (void)setDashboardRoundedCorners:(id)arg1;
- (void)setDisabledFeature:(unsigned long long)arg1;
- (void)setNowPlayingAlbumArtMode:(long long)arg1;
- (void)setPersisted:(bool)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (void)setVersion:(id)arg1;
- (void)setViewAreaInsets:(id)arg1;
- (id)userInfo;
- (long long)userInterfaceStyle;
- (id)version;
- (id)viewAreaInsets;

@end
