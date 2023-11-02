
@interface C2MetricOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _anonymous;
    NSString * _applicationBundleIdentifierOverrideForContainerAccess;
    NSString * _applicationBundleIdentifierOverrideForNetworkAttribution;
    NSURL * _c2MetricsEndpoint;
    NSArray * _clientOperations;
    NSString * _clientProcessBundleId;
    NSString * _clientProcessVersion;
    NSString * _container;
    NSString * _containerScopedDeviceIdentifier;
    NSString * _containerScopedUserIdentifier;
    NSString * _databaseScope;
    id /* block */  _didCompleteWithError;
    NSString * _environment;
    NSArray * _operationGroups;
    bool  _pushTrigger;
    unsigned long long  _reportClientOperationFrequency;
    unsigned long long  _reportClientOperationFrequencyBase;
    unsigned long long  _reportFrequency;
    unsigned long long  _reportFrequencyBase;
    unsigned int  _reportFrequencyRandomValue;
    unsigned long long  _reportOperationGroupFrequency;
    unsigned long long  _reportOperationGroupFrequencyBase;
    id /* block */  _testBehavior_reportMetric;
}

@property (nonatomic) bool anonymous;
@property (nonatomic, copy) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (nonatomic, copy) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (nonatomic, copy) NSURL *c2MetricsEndpoint;
@property (nonatomic, copy) NSArray *clientOperations;
@property (nonatomic, copy) NSString *clientProcessBundleId;
@property (nonatomic, copy) NSString *clientProcessVersion;
@property (nonatomic, copy) NSString *container;
@property (nonatomic, copy) NSString *containerScopedDeviceIdentifier;
@property (nonatomic, copy) NSString *containerScopedUserIdentifier;
@property (nonatomic, copy) NSString *databaseScope;
@property (nonatomic, copy) id /* block */ didCompleteWithError;
@property (nonatomic, copy) NSString *environment;
@property (nonatomic, readonly) NSString *headerValueForTriggers;
@property (nonatomic, copy) NSArray *operationGroups;
@property (nonatomic) bool pushTrigger;
@property (nonatomic) unsigned long long reportClientOperationFrequency;
@property (nonatomic) unsigned long long reportClientOperationFrequencyBase;
@property (nonatomic) unsigned long long reportFrequency;
@property (nonatomic) unsigned long long reportFrequencyBase;
@property (nonatomic) unsigned int reportFrequencyRandomValue;
@property (nonatomic) unsigned long long reportOperationGroupFrequency;
@property (nonatomic) unsigned long long reportOperationGroupFrequencyBase;
@property (nonatomic, copy) id /* block */ testBehavior_reportMetric;

// Image: /System/Library/PrivateFrameworks/C2.framework/C2

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)anonymous;
- (id)applicationBundleIdentifierOverrideForContainerAccess;
- (id)applicationBundleIdentifierOverrideForNetworkAttribution;
- (id)c2MetricsEndpoint;
- (bool)clientOperationTriggered:(id)arg1;
- (id)clientOperations;
- (id)clientProcessBundleId;
- (id)clientProcessVersion;
- (id)container;
- (id)containerScopedDeviceIdentifier;
- (id)containerScopedUserIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseScope;
- (id /* block */)didCompleteWithError;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (id)generateCloudKitInfo;
- (int)generateTriggerWithResponseHeader:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)headerValueForTriggers;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)operationGroupTriggered:(id)arg1;
- (id)operationGroups;
- (bool)pushTrigger;
- (unsigned long long)reportClientOperationFrequency;
- (unsigned long long)reportClientOperationFrequencyBase;
- (unsigned long long)reportFrequency;
- (unsigned long long)reportFrequencyBase;
- (unsigned int)reportFrequencyRandomValue;
- (unsigned long long)reportOperationGroupFrequency;
- (unsigned long long)reportOperationGroupFrequencyBase;
- (void)rollReportFrequencyRandomValue;
- (void)setAnonymous:(bool)arg1;
- (void)setApplicationBundleIdentifierOverrideForContainerAccess:(id)arg1;
- (void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(id)arg1;
- (void)setC2MetricsEndpoint:(id)arg1;
- (void)setClientOperations:(id)arg1;
- (void)setClientProcessBundleId:(id)arg1;
- (void)setClientProcessVersion:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setContainerScopedDeviceIdentifier:(id)arg1;
- (void)setContainerScopedUserIdentifier:(id)arg1;
- (void)setDatabaseScope:(id)arg1;
- (void)setDidCompleteWithError:(id /* block */)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setOperationGroups:(id)arg1;
- (void)setPushTrigger:(bool)arg1;
- (void)setReportClientOperationFrequency:(unsigned long long)arg1;
- (void)setReportClientOperationFrequencyBase:(unsigned long long)arg1;
- (void)setReportFrequency:(unsigned long long)arg1;
- (void)setReportFrequencyBase:(unsigned long long)arg1;
- (void)setReportFrequencyRandomValue:(unsigned int)arg1;
- (void)setReportOperationGroupFrequency:(unsigned long long)arg1;
- (void)setReportOperationGroupFrequencyBase:(unsigned long long)arg1;
- (void)setTestBehavior_reportMetric:(id /* block */)arg1;
- (id /* block */)testBehavior_reportMetric;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

+ (id)metricOptionsForEventMetric:(id)arg1 metricType:(long long)arg2 container:(id)arg3 config:(id)arg4 reportingCompletionBlock:(id /* block */)arg5;
+ (id)metricOptionsForNetworkOperation:(id)arg1;
+ (id)metricOptionsForNetworkRequest:(id)arg1;

- (void)_attributeCurrentContainer:(id)arg1 config:(id)arg2;
- (void)_setupC2MetricsEndpointWithContainer:(id)arg1;

@end
