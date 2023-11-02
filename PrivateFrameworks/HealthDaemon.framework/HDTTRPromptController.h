
@interface HDTTRPromptController : NSObject {
    bool  _canRepromptOnSameBuild;
    _Atomic bool  _isPresenting;
    NSObject<OS_os_log> * _loggingCategory;
    long long  _maximumErrorCount;
    double  _minimumPromptInterval;
    NSString * _name;
    NSString * _notificationMessage;
    NSString * _notificationTitle;
    HDProfile * _profile;
    NSString * _radarDescription;
    NSString * _radarTitle;
    id /* block */  _unitTest_willPresentTTRAlertHandler;
}

@property (nonatomic) bool canRepromptOnSameBuild;
@property (nonatomic) long long maximumErrorCount;
@property (nonatomic) double minimumPromptInterval;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) NSString *notificationMessage;
@property (nonatomic, copy) NSString *notificationTitle;
@property (nonatomic, copy) NSString *radarDescription;
@property (nonatomic, copy) NSString *radarTitle;
@property (nonatomic, copy) id /* block */ unitTest_willPresentTTRAlertHandler;

+ (id)formattedPersistedValuesForDomainName:(id)arg1 database:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (bool)canRepromptOnSameBuild;
- (id)description;
- (id)init;
- (id)initWithProfile:(id)arg1 domainName:(id)arg2 loggingCategory:(id)arg3;
- (long long)maximumErrorCount;
- (double)minimumPromptInterval;
- (id)name;
- (id)notificationMessage;
- (id)notificationTitle;
- (void)promptIfRequiredForReason:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (id)radarDescription;
- (id)radarTitle;
- (void)setCanRepromptOnSameBuild:(bool)arg1;
- (void)setMaximumErrorCount:(long long)arg1;
- (void)setMinimumPromptInterval:(double)arg1;
- (void)setNotificationMessage:(id)arg1;
- (void)setNotificationTitle:(id)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setRadarTitle:(id)arg1;
- (void)setUnitTest_willPresentTTRAlertHandler:(id /* block */)arg1;
- (bool)unitTest_setLastPromptBuild:(id)arg1 error:(id*)arg2;
- (bool)unitTest_setLastPromptDate:(id)arg1 error:(id*)arg2;
- (id /* block */)unitTest_willPresentTTRAlertHandler;

@end
