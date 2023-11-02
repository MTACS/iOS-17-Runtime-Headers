
@interface AAFAnalyticsEvent : NSObject <NSSecureCoding> {
    NSString * _clientBundleId;
    NSString * _clientName;
    NSNumber * _clientType;
    struct mach_timebase_info { 
        unsigned int numer; 
        unsigned int denom; 
    }  _clock_timebase;
    NSNumber * _eventCategory;
    double  _eventCreationTime;
    NSString * _eventName;
    unsigned long long  _initTime;
    NSDictionary * _reportData;
}

@property (nonatomic, copy) NSString *clientBundleId;
@property (nonatomic, copy) NSString *clientName;
@property (nonatomic, copy) NSNumber *clientType;
@property (nonatomic) struct mach_timebase_info { unsigned int x1; unsigned int x2; } clock_timebase;
@property (nonatomic, readonly, copy) NSNumber *eventCategory;
@property (nonatomic) double eventCreationTime;
@property (nonatomic, readonly, copy) NSString *eventName;
@property (nonatomic) unsigned long long initTime;
@property (nonatomic, readonly, copy) NSDictionary *reportData;

// Image: /System/Library/PrivateFrameworks/AAAFoundation.framework/AAAFoundation

+ (id)analyticsEventWithName:(id)arg1 eventCategory:(id)arg2 initData:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_populateUnderlyingErrorsStartingWithRootError:(id)arg1 maxDepth:(unsigned int)arg2;
- (id)clientBundleId;
- (id)clientName;
- (id)clientType;
- (struct mach_timebase_info { unsigned int x1; unsigned int x2; })clock_timebase;
- (void)completeEvent;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)eventCategory;
- (double)eventCreationTime;
- (id)eventName;
- (unsigned long long)initTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventName:(id)arg1 eventCategory:(id)arg2 initData:(id)arg3;
- (double)machAbsoluteTimeToMilliseconds:(unsigned long long)arg1;
- (double)machAbsoluteTimeToSeconds:(unsigned long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)populateUnderlyingErrorsStartingWithRootError:(id)arg1;
- (id)reportData;
- (void)setClientBundleId:(id)arg1;
- (void)setClientName:(id)arg1;
- (void)setClientType:(id)arg1;
- (void)setClock_timebase:(struct mach_timebase_info { unsigned int x1; unsigned int x2; })arg1;
- (void)setEventCreationTime:(double)arg1;
- (void)setInitTime:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount

+ (id)analyticsEventWithName:(id)arg1 altDSID:(id)arg2 flowID:(id)arg3;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_analyticsEventWithEventName:(id)arg1 account:(id)arg2 error:(id)arg3;
+ (id)ak_analyticsEventWithEventName:(id)arg1 error:(id)arg2;

- (void)ak_updateTelemetryIdWithAccount:(id)arg1;
- (void)ak_updateWithAuthenticationResults:(id)arg1 authContext:(id)arg2 error:(id)arg3;

// Image: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP

+ (id)analyticsEventWithContext:(id)arg1 eventName:(id)arg2 category:(id)arg3;
+ (id)analyticsEventWithFollowUpContext:(id)arg1 eventName:(id)arg2 category:(id)arg3;

@end
