
@interface SignpostAggregation : NSObject <NSCopying> {
    NSMutableDictionary * __groupToTypeToDuration;
    NSMutableDictionary * __groupToTypeToMaxDuration;
    NSMutableDictionary * __groupToTypeToMinDuration;
    NSString * _aggregationDescription;
    NSString * _category;
    unsigned long long  _durationNs;
    NSDate * _earliestDate;
    NSDictionary * _groupNameToGroupDict;
    NSDate * _latestDate;
    NSString * _name;
    NSArray * _rawIntervals;
    NSString * _subsystem;
}

@property (nonatomic, retain) NSMutableDictionary *_groupToTypeToDuration;
@property (nonatomic, retain) NSMutableDictionary *_groupToTypeToMaxDuration;
@property (nonatomic, retain) NSMutableDictionary *_groupToTypeToMinDuration;
@property (nonatomic, readonly) NSString *aggregationDescription;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) double durationMs;
@property (nonatomic, readonly) unsigned long long durationNs;
@property (nonatomic, readonly) double durationSeconds;
@property (nonatomic, readonly) NSDate *earliestDate;
@property (nonatomic, readonly) NSDictionary *groupNameToGroupDict;
@property (nonatomic, readonly) NSDate *latestDate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *rawIntervals;
@property (nonatomic, readonly) NSString *signatureString;
@property (nonatomic, readonly) NSString *subsystem;
@property (nonatomic, readonly) bool telemetryEnabled;

+ (id)_aggregationDescriptionStringForInterval:(id)arg1;
+ (id)_signatureForSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 aggregationDescription:(id)arg4;
+ (id)_timeRangeDictForInterval:(id)arg1;
+ (id)sumOfAggregation1:(id)arg1 aggregation2:(id)arg2 errorOut:(id*)arg3;

- (void).cxx_destruct;
- (id)_canAdd:(id)arg1;
- (void)_checkGroupTypeTuplesForPlaceholderType:(unsigned char)arg1 errors:(id)arg2;
- (id)_coreAnalyticsEventName;
- (id)_coreAnalyticsEventPayloadDictionary;
- (id)_dictionaryRepresentation;
- (void)_fixupGroupsAndDurationsWithErrors:(id)arg1;
- (id)_groupToTypeToDuration;
- (id)_groupToTypeToMaxDuration;
- (id)_groupToTypeToMinDuration;
- (id)_handleCountSegment:(id)arg1;
- (id)_handleDurationSegment:(id)arg1 placeholderType:(unsigned char)arg2;
- (id)_handleMaxDurationSegment:(id)arg1;
- (id)_handleMinDurationSegment:(id)arg1;
- (id)_handleTotalDurationSegment:(id)arg1;
- (id)_initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 rawIntervals:(id)arg4 durationNs:(unsigned long long)arg5;
- (id)_processDescription:(id)arg1;
- (id)_processInterval:(id)arg1;
- (id)_processMetadataSegment:(id)arg1;
- (void)_sortRawIntervals;
- (id)_telemetryEnabledGroupDurations;
- (id)_telemetryEnabledGroups;
- (id)_updateDict:(id)arg1 withGroup:(id)arg2 type:(id)arg3 durationNs:(id)arg4 namespaceType:(id)arg5;
- (id)addAggregation:(id)arg1;
- (id)aggregationDescription;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)dropRawIntervals;
- (double)durationMs;
- (unsigned long long)durationNs;
- (double)durationSeconds;
- (id)earliestDate;
- (id)groupNameToGroupDict;
- (id)initWithInterval:(id)arg1 errorsOut:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDescription:(unsigned long long)arg1;
- (id)latestDate;
- (id)name;
- (id)rawIntervals;
- (void)set_groupToTypeToDuration:(id)arg1;
- (void)set_groupToTypeToMaxDuration:(id)arg1;
- (void)set_groupToTypeToMinDuration:(id)arg1;
- (id)signatureString;
- (id)subsystem;
- (bool)telemetryEnabled;

@end
