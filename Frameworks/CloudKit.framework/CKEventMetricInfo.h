
@interface CKEventMetricInfo : NSObject <NSSecureCoding> {
    bool  _allowsCellularAccess;
    bool  _allowsExpensiveNetworkAccess;
    NSString * _applicationBundleIdentifierOverrideForContainerAccess;
    NSString * _applicationBundleIdentifierOverrideForNetworkAttribution;
    NSDictionary * _associatedOperationGroups;
    NSDictionary * _associatedOperations;
    NSDictionary * _attributes;
    long long  _databaseScope;
    NSString * _deviceIdentifier;
    NSDate * _endTime;
    NSString * _eventName;
    bool  _isCKInternalMetric;
    bool  _isPushTriggerFired;
    NSUUID * _metricUUID;
    bool  _preferAnonymousRequests;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    NSDate * _startTime;
}

@property (nonatomic, readonly) bool allowsCellularAccess;
@property (nonatomic, readonly) bool allowsExpensiveNetworkAccess;
@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (nonatomic, readonly, copy) NSDictionary *associatedOperationGroups;
@property (nonatomic, readonly, copy) NSDictionary *associatedOperations;
@property (nonatomic, readonly, copy) NSDictionary *attributes;
@property (nonatomic, readonly) long long databaseScope;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (nonatomic, readonly, copy) NSDate *endTime;
@property (nonatomic, readonly, copy) NSString *eventName;
@property (nonatomic, readonly) bool isCKInternalMetric;
@property (nonatomic, readonly) bool isPushTriggerFired;
@property (nonatomic, readonly, copy) NSUUID *metricUUID;
@property (nonatomic, readonly) bool preferAnonymousRequests;
@property (nonatomic, readonly, copy) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic, readonly, copy) NSDate *startTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsCellularAccess;
- (bool)allowsExpensiveNetworkAccess;
- (id)applicationBundleIdentifierOverrideForContainerAccess;
- (id)applicationBundleIdentifierOverrideForNetworkAttribution;
- (id)associatedOperationGroups;
- (id)associatedOperations;
- (id)attributes;
- (long long)databaseScope;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventMetric:(id)arg1;
- (bool)isCKInternalMetric;
- (bool)isPushTriggerFired;
- (id)metricUUID;
- (bool)preferAnonymousRequests;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (id)startTime;

@end
