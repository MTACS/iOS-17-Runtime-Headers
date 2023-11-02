
@interface CKEventMetric : NSObject <NSSecureCoding> {
    NSMutableDictionary * _associatedOperationGroups;
    NSMutableDictionary * _associatedOperations;
    NSMutableDictionary * _attributes;
    NSDate * _endTime;
    NSString * _eventName;
    bool  _hasBeenSubmitted;
    bool  _inferredAllowsCellular;
    bool  _inferredAllowsExpensive;
    NSString * _inferredApplicationBundleIdentifierOverrideForContainerAccess;
    NSString * _inferredApplicationBundleIdentifierOverrideForNetworkAttribution;
    long long  _inferredDatabaseScope;
    NSString * _inferredDeviceIdentifier;
    bool  _inferredPreferAnonymousRequests;
    NSString * _inferredSourceApplicationBundleIdentifier;
    NSString * _inferredSourceApplicationSecondaryIdentifier;
    bool  _isCKInternalMetric;
    bool  _isPushTriggerFired;
    NSUUID * _metricUUID;
    NSDate * _startTime;
}

@property (nonatomic, readonly, copy) NSMutableDictionary *attributes;
@property (copy) NSDate *endTime;
@property (nonatomic, readonly, copy) NSString *eventName;
@property (nonatomic) bool isCKInternalMetric;
@property bool isPushTriggerFired;
@property (copy) NSDate *startTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)associateWithCompletedOperation:(id)arg1;
- (id)attributes;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)eventName;
- (id)generateEventMetricInfo;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventName:(id)arg1;
- (id)initWithEventName:(id)arg1 atTime:(id)arg2;
- (bool)isCKInternalMetric;
- (bool)isPushTriggerFired;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setIsCKInternalMetric:(bool)arg1;
- (void)setIsPushTriggerFired:(bool)arg1;
- (void)setMetricValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setStartTime:(id)arg1;
- (id)startTime;

@end
