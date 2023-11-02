
@interface ICMusicSubscriptionStatus : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSNumber * _acceptSilentAuth;
    bool  _bundleOwner;
    long long  _carrierBundlingErrorCode;
    long long  _carrierBundlingStatusType;
    NSString * _cellularOperatorName;
    NSArray * _eligibleOffers;
    NSDate * _expirationDate;
    bool  _hasFamily;
    bool  _hasFamilyGreaterThanOneMember;
    bool  _hasOfflineSlots;
    bool  _isAdministrator;
    bool  _isBundleOwner;
    bool  _isDiscoveryModeEligible;
    bool  _isEligibleForFreeTrial;
    bool  _isHeadOfHousehold;
    bool  _isInFreeTrial;
    bool  _isInGlidePreview;
    bool  _isMatchEnabled;
    bool  _isMinorAccountHolder;
    bool  _isPartOfBundle;
    bool  _isPurchaser;
    bool  _partOfBundle;
    NSString * _phoneNumber;
    long long  _reasonType;
    NSDictionary * _responseDictionary;
    NSString * _sessionIdentifier;
    long long  _sourceType;
    long long  _statusType;
    NSArray * _termsStatusList;
}

@property (nonatomic, readonly, copy) NSNumber *acceptSilentAuth;
@property (getter=isAdministrator, nonatomic, readonly) bool administrator;
@property (getter=isBundleOnwer, nonatomic, readonly) bool bundleOwner;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly) long long carrierBundlingErrorCode;
@property (nonatomic, readonly) long long carrierBundlingStatusType;
@property (nonatomic, readonly, copy) NSString *cellularOperatorName;
@property (getter=isCloudMusicServiceEnabled, nonatomic, readonly) bool cloudMusicServiceEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (getter=isDiscoveryModeEligible, nonatomic, readonly) bool discoveryModeEligible;
@property (getter=isEligibleForFreeTrial, nonatomic, readonly) bool eligibleForFreeTrial;
@property (nonatomic, readonly, copy) NSArray *eligibleOffers;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) bool hasAddToCloudLibraryCapability;
@property (nonatomic, readonly) bool hasCatalogPlaybackCapability;
@property (nonatomic, readonly) bool hasFamily;
@property (nonatomic, readonly) bool hasFamilyGreaterThanOneMember;
@property (nonatomic, readonly) bool hasOfflineSlots;
@property (readonly) unsigned long long hash;
@property (getter=isHeadOfHousehold, nonatomic, readonly) bool headOfHousehold;
@property (getter=isInFreeTrial, nonatomic, readonly) bool inFreeTrial;
@property (getter=isInGlidePreview, nonatomic, readonly) bool inGlidePreview;
@property (getter=isMatchEnabled, nonatomic, readonly) bool matchEnabled;
@property (getter=isMinorAccountHolder, nonatomic, readonly) bool minorAccountHolder;
@property (getter=isPartOfBundle, nonatomic, readonly) bool partOfBundle;
@property (nonatomic, readonly, copy) NSString *phoneNumber;
@property (getter=isPurchaser, nonatomic, readonly) bool purchaser;
@property (nonatomic, readonly) long long reasonType;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (nonatomic, readonly) long long sourceType;
@property (nonatomic, readonly) long long statusType;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *termsStatusList;

// Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

+ (unsigned long long)_capabilitiesForStatusType:(long long)arg1 carrierBundlingStatusType:(long long)arg2 isMatchEnabled:(bool)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_copySubscriptionStatusPropertiesToStatus:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (id)_init;
- (id)acceptSilentAuth;
- (unsigned long long)capabilities;
- (long long)carrierBundlingErrorCode;
- (long long)carrierBundlingStatusType;
- (id)cellularOperatorName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eligibleOffers;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (bool)hasAddToCloudLibraryCapability;
- (bool)hasCapability:(unsigned long long)arg1;
- (bool)hasCatalogPlaybackCapability;
- (bool)hasFamily;
- (bool)hasFamilyGreaterThanOneMember;
- (bool)hasOfflineSlots;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;
- (bool)isAdministrator;
- (bool)isBundleOnwer;
- (bool)isCloudMusicServiceEnabled;
- (bool)isDiscoveryModeEligible;
- (bool)isEligibleForFreeTrial;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStatus:(id)arg1;
- (bool)isHeadOfHousehold;
- (bool)isInFreeTrial;
- (bool)isInGlidePreview;
- (bool)isMatchEnabled;
- (bool)isMinorAccountHolder;
- (bool)isPartOfBundle;
- (bool)isPurchaser;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)phoneNumber;
- (long long)reasonType;
- (id)responseDictionary;
- (id)sessionIdentifier;
- (long long)sourceType;
- (long long)statusType;
- (id)termsStatusList;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

@end
