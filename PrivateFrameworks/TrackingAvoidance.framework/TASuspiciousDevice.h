
@interface TASuspiciousDevice : NSObject <NSCopying, NSSecureCoding> {
    TAAccessoryInformation * _accessoryInfo;
    NSData * _address;
    NSDate * _date;
    TAMetricsDetection * _detectionMetrics;
    NSDictionary * _detectionSummary;
    unsigned long long  _detectionType;
    unsigned long long  _forceSurfaceReason;
    unsigned long long  _immediacyType;
    TASPAdvertisement * _latestAdvertisement;
    NSArray * _locationHistory;
}

@property (nonatomic, copy) TAAccessoryInformation *accessoryInfo;
@property (nonatomic, readonly, copy) NSData *address;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly) TAMetricsDetection *detectionMetrics;
@property (nonatomic, readonly, copy) NSDictionary *detectionSummary;
@property (nonatomic, readonly) unsigned long long detectionType;
@property (nonatomic, readonly) unsigned long long forceSurfaceReason;
@property (nonatomic, readonly) unsigned long long immediacyType;
@property (nonatomic, readonly, copy) TASPAdvertisement *latestAdvertisement;
@property (nonatomic, readonly, copy) NSArray *locationHistory;

+ (id)convertTAForceSurfaceReasonToString:(unsigned long long)arg1;
+ (id)convertTANotificationImmediacyTypeToString:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryInfo;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)descriptionDictionary;
- (id)detectionMetrics;
- (id)detectionSummary;
- (unsigned long long)detectionType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)forceSurfaceReason;
- (unsigned long long)immediacyType;
- (id)initWithCoder:(id)arg1;
- (id)initWithLatestAdv:(id)arg1 detectionSummary:(id)arg2 date:(id)arg3 locHistory:(id)arg4 detectionMetrics:(id)arg5 detectionType:(unsigned long long)arg6 immediacyType:(unsigned long long)arg7 accessoryInfo:(id)arg8 forceSurfaceReason:(unsigned long long)arg9;
- (bool)isEqual:(id)arg1;
- (id)latestAdvertisement;
- (id)locationHistory;
- (void)setAccessoryInfo:(id)arg1;
- (void)updateForceReasonWith:(unsigned long long)arg1;

@end
