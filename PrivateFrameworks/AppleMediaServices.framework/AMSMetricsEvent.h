
@interface AMSMetricsEvent : NSObject <AMSEngagementEvent, NSCopying, NSSecureCoding> {
    ACAccount * _account;
    NSDictionary * _data;
    NSNumber * _databasePID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _internalStateLock;
    NSMutableDictionary * _underlyingDictionary;
    NSDictionary * _underlyingDictionaryOverride;
}

@property (nonatomic, retain) ACAccount *account;
@property (getter=isAnonymous, nonatomic) bool anonymous;
@property (nonatomic, copy) NSString *app;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, retain) NSNumber *baseVersion;
@property (nonatomic, copy) NSString *canaryIdentifier;
@property (nonatomic) bool checkDiagnosticsAndUsageSetting;
@property (nonatomic, copy) NSString *clientEventID;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (retain) NSDictionary *data;
@property (nonatomic, readonly) NSDictionary *databaseEventBody;
@property (nonatomic, readonly) NSNumber *databasePID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *diagnosticsSubmissionBugType;
@property (nonatomic, readonly) NSDictionary *dictionaryForPosting;
@property (readonly) NSDictionary *engagementData;
@property (nonatomic, readonly) bool engagementEvent;
@property (nonatomic, readonly) NSDictionary *engagementMetrics;
@property (nonatomic, retain) NSNumber *eventTime;
@property (nonatomic, copy) NSString *eventType;
@property (nonatomic, retain) NSNumber *eventVersion;
@property (readonly) unsigned long long hash;
@property (setter=im_setContentIdentifier:, nonatomic, retain) id im_contentIdentifier;
@property (setter=im_setName:, nonatomic, retain) NSString *im_name;
@property (setter=im_setToken:, nonatomic, retain) NSString *im_token;
@property (nonatomic, copy) NSString *osBuildVersion;
@property (nonatomic, copy) NSString *osName;
@property (nonatomic, copy) NSString *osVersion;
@property (nonatomic) bool preventSampling;
@property (readonly) Class superclass;
@property (nonatomic) bool suppressEngagement;
@property (nonatomic, retain) NSNumber *timezoneOffset;
@property (nonatomic, copy) NSString *topic;
@property (nonatomic, readonly) NSDictionary *underlyingDictionary;
@property (nonatomic, readonly) NSDictionary *underlyingDictionaryOverride;

// Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

+ (id)_buyParamsFromString:(id)arg1;
+ (id)_buyParamsStringFromAuthenticationContext:(id)arg1;
+ (id)_deepCopiedAndSanitizedTopLevelDictionaryFromDictionary:(id)arg1;
+ (id)_deepCopiedJSONObjectOrNilForObject:(id)arg1;
+ (id)_deepCopiedJSONObjectOrNilForObject:(id)arg1 key:(id)arg2 enforcingClassUsingKnownPropertiesClassMapping:(id)arg3;
+ (id)_propertyValueClassesForKnownProperties;
+ (id)_topicFromAuthenticationContext:(id)arg1;
+ (id)createEventFromAuthenticationContext:(id)arg1 error:(id)arg2;
+ (id)metricsAuthenticationAttemptDictionaryForAuthKitError:(id)arg1;
+ (id)sanitizedObject:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSanitizedUnderlyingDictionary:(id)arg1 account:(id)arg2 databasePID:(id)arg3;
- (id)_initWithUnderlyingDictionary:(id)arg1 account:(id)arg2 databasePID:(id)arg3 addBasefields:(bool)arg4;
- (id)_propertyForBodyKey:(id)arg1 clientOnly:(bool)arg2;
- (void)_setProperty:(id)arg1 forBodyKey:(id)arg2 clientOnly:(bool)arg3;
- (id)account;
- (void)addClientIdentifier:(id)arg1;
- (void)addPropertiesWithDictionary:(id)arg1;
- (id)app;
- (id)appVersion;
- (id)baseVersion;
- (id)canaryIdentifier;
- (bool)checkDiagnosticsAndUsageSetting;
- (id)clientEventID;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)databaseEventBody;
- (id)databasePID;
- (id)diagnosticsSubmissionBugType;
- (id)dictionaryForPosting;
- (void)encodeWithCoder:(id)arg1;
- (id)engagementData;
- (bool)engagementEvent;
- (id)engagementMetrics;
- (id)eventTime;
- (id)eventType;
- (id)eventVersion;
- (id)initForEngagement;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatabaseEventBody:(id)arg1 account:(id)arg2 databasePID:(id)arg3;
- (id)initWithTopic:(id)arg1;
- (id)initWithUnderlyingDictionary:(id)arg1;
- (bool)isAnonymous;
- (id)osBuildVersion;
- (id)osName;
- (id)osVersion;
- (bool)preventSampling;
- (id)propertyForBodyKey:(id)arg1;
- (void)removePropertiesForKeys:(id)arg1;
- (void)setAccount:(id)arg1;
- (void)setAnonymous:(bool)arg1;
- (void)setApp:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setBaseVersion:(id)arg1;
- (void)setCanaryIdentifier:(id)arg1;
- (void)setCheckDiagnosticsAndUsageSetting:(bool)arg1;
- (void)setClientEventID:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDiagnosticsSubmissionBugType:(id)arg1;
- (void)setEventTime:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setEventVersion:(id)arg1;
- (void)setOsBuildVersion:(id)arg1;
- (void)setOsName:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setPreventSampling:(bool)arg1;
- (void)setProperty:(id)arg1 forBodyKey:(id)arg2;
- (void)setSuppressEngagement:(bool)arg1;
- (void)setTimezoneOffset:(id)arg1;
- (void)setTopic:(id)arg1;
- (bool)suppressEngagement;
- (id)timezoneOffset;
- (id)topic;
- (id)underlyingDictionary;
- (id)underlyingDictionaryOverride;

// Image: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation

+ (id)im_clickEventWithDefaultTopic;
+ (id)im_defaultTopicForEvents;
+ (id)im_eventWithDefaultTopic;
+ (id)im_eventWithDefaultTopicAndEventType:(id)arg1;
+ (id)im_eventWithTopic:(id)arg1 eventType:(id)arg2;
+ (id)im_pageEventWithDefaultTopic;

- (void)im_addPropertiesWithDictionary:(id)arg1;
- (id)im_contentIdentifier;
- (id)im_name;
- (void)im_setContentIdentifier:(id)arg1;
- (void)im_setName:(id)arg1;
- (void)im_setProperty:(id)arg1 forBodyKey:(id)arg2;
- (void)im_setToken:(id)arg1;
- (id)im_token;
- (id)shortDescription;

@end
