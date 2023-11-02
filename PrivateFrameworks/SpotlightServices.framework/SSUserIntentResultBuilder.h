
@interface SSUserIntentResultBuilder : SSResultBuilder {
    NSString * _appBundleId;
    NSString * _intentName;
    bool  _isBackgroundRunnable;
    NSString * _punchoutLabel;
    NSDate * _startDate;
    NSData * _userActivityData;
    NSString * _userActivityRequiredString;
}

@property (nonatomic, retain) NSString *appBundleId;
@property (nonatomic, retain) NSString *intentName;
@property (nonatomic) bool isBackgroundRunnable;
@property (nonatomic, retain) NSString *punchoutLabel;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic, retain) NSData *userActivityData;
@property (nonatomic, retain) NSString *userActivityRequiredString;

+ (bool)supportsResult:(id)arg1;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildResult;
- (id)buildThumbnail;
- (id)initWithResult:(id)arg1;
- (id)intentName;
- (bool)isBackgroundRunnable;
- (id)punchoutLabel;
- (void)setAppBundleId:(id)arg1;
- (void)setIntentName:(id)arg1;
- (void)setIsBackgroundRunnable:(bool)arg1;
- (void)setPunchoutLabel:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setUserActivityData:(id)arg1;
- (void)setUserActivityRequiredString:(id)arg1;
- (id)startDate;
- (id)userActivityData;
- (id)userActivityRequiredString;

@end
