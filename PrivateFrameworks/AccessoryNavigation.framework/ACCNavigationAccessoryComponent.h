
@interface ACCNavigationAccessoryComponent : NSObject <NSSecureCoding> {
    unsigned long long  _identifier;
    bool  _isEnabled;
    unsigned long long  _maxCapacity_GuidanceManeuver;
    unsigned long long  _maxCapacity_LaneGuidance;
    unsigned long long  _maxLength_CurrentRoadName;
    unsigned long long  _maxLength_DestinationRoadName;
    unsigned long long  _maxLength_LaneGuidanceDescription;
    unsigned long long  _maxLength_ManeuverDescription;
    unsigned long long  _maxLength_PostManeuverRoadName;
    NSString * _name;
    bool  _requestSourceName;
    bool  _requestSourceSupportsRouteGuidance;
    bool  _supportsExitInfo;
    bool  _supportsLaneGuidance;
    bool  _supportsTimeZoneOffset;
}

@property (nonatomic, readonly) unsigned long long CP_maxCapacity_GuidanceManeuver;
@property (nonatomic, readonly) unsigned long long CP_maxCapacity_LaneGuidance;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) bool isEnabled;
@property (nonatomic) unsigned long long maxCapacity_GuidanceManeuver;
@property (nonatomic) unsigned long long maxCapacity_LaneGuidance;
@property (nonatomic) unsigned long long maxLength_CurrentRoadName;
@property (nonatomic) unsigned long long maxLength_DestinationRoadName;
@property (nonatomic) unsigned long long maxLength_LaneGuidanceDescription;
@property (nonatomic) unsigned long long maxLength_ManeuverDescription;
@property (nonatomic) unsigned long long maxLength_PostManeuverRoadName;
@property (retain) NSString *name;
@property (nonatomic) bool requestSourceName;
@property (nonatomic) bool requestSourceSupportsRouteGuidance;
@property (nonatomic) bool supportsExitInfo;
@property (nonatomic) bool supportsLaneGuidance;
@property (nonatomic) bool supportsTimeZoneOffset;

// Image: /System/Library/PrivateFrameworks/AccessoryNavigation.framework/AccessoryNavigation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxCapacity_GuidanceManeuver;
- (unsigned long long)maxCapacity_LaneGuidance;
- (unsigned long long)maxLength_CurrentRoadName;
- (unsigned long long)maxLength_DestinationRoadName;
- (unsigned long long)maxLength_LaneGuidanceDescription;
- (unsigned long long)maxLength_ManeuverDescription;
- (unsigned long long)maxLength_PostManeuverRoadName;
- (id)name;
- (bool)requestSourceName;
- (bool)requestSourceSupportsRouteGuidance;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setMaxCapacity_GuidanceManeuver:(unsigned long long)arg1;
- (void)setMaxCapacity_LaneGuidance:(unsigned long long)arg1;
- (void)setMaxLength_CurrentRoadName:(unsigned long long)arg1;
- (void)setMaxLength_DestinationRoadName:(unsigned long long)arg1;
- (void)setMaxLength_LaneGuidanceDescription:(unsigned long long)arg1;
- (void)setMaxLength_ManeuverDescription:(unsigned long long)arg1;
- (void)setMaxLength_PostManeuverRoadName:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setRequestSourceName:(bool)arg1;
- (void)setRequestSourceSupportsRouteGuidance:(bool)arg1;
- (void)setSupportsExitInfo:(bool)arg1;
- (void)setSupportsLaneGuidance:(bool)arg1;
- (void)setSupportsTimeZoneOffset:(bool)arg1;
- (bool)supportsExitInfo;
- (bool)supportsLaneGuidance;
- (bool)supportsTimeZoneOffset;

// Image: /System/Library/PrivateFrameworks/CarKitNavigation.framework/CarKitNavigation

+ (id)CP_variant:(id)arg1 fittingMaxLength:(unsigned long long)arg2;

- (unsigned long long)CP_maxCapacity_GuidanceManeuver;
- (unsigned long long)CP_maxCapacity_LaneGuidance;
- (id)CP_variantFittingCurrentRoadName:(id)arg1;
- (id)CP_variantFittingDestinationRoadName:(id)arg1;
- (id)CP_variantFittingLaneGuidanceDescription:(id)arg1;
- (id)CP_variantFittingManeuverDescription:(id)arg1;
- (id)CP_variantFittingPostManeuverRoadName:(id)arg1;

@end
