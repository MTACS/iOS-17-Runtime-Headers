
@interface FCWidgetConfig : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _configDictionary;
    NTPBWidgetConfig * _pbWidgetConfig;
}

@property (nonatomic, copy) NSDictionary *configDictionary;
@property (nonatomic, readonly) long long forYouBackgroundMinimumUpdateInterval;
@property (nonatomic, readonly) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic, readonly) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic, readonly) double parsecPopulationCeiling;
@property (nonatomic, readonly) double parsecPopulationFloor;
@property (nonatomic, copy) NTPBWidgetConfig *pbWidgetConfig;
@property (nonatomic, readonly) long long smallWidgetSystemHoneymoonDuration;
@property (nonatomic, readonly) long long smallWidgetSystemReloadInterval;
@property (nonatomic, readonly) long long smallWidgetSystemReloadIntervalHoneymoon;
@property (nonatomic, readonly) long long smallWidgetSystemReloadJitterMax;
@property (nonatomic, readonly) long long smallWidgetSystemReloadJitterMaxHoneymoon;
@property (nonatomic, readonly) long long widgetSystemHoneymoonDuration;
@property (nonatomic, readonly) long long widgetSystemReloadInterval;
@property (nonatomic, readonly) long long widgetSystemReloadIntervalHoneymoon;
@property (nonatomic, readonly) long long widgetSystemReloadJitterMax;
@property (nonatomic, readonly) long long widgetSystemReloadJitterMaxHoneymoon;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)configDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)forYouBackgroundMinimumUpdateInterval;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithWidgetConfig:(id)arg1;
- (long long)minimumArticleExposureDurationToBePreseen;
- (unsigned int)minimumNumberOfTimesPreseenToBeSeen;
- (double)parsecPopulationCeiling;
- (double)parsecPopulationFloor;
- (id)pbWidgetConfig;
- (void)setConfigDictionary:(id)arg1;
- (void)setPbWidgetConfig:(id)arg1;
- (long long)smallWidgetSystemHoneymoonDuration;
- (long long)smallWidgetSystemReloadInterval;
- (long long)smallWidgetSystemReloadIntervalHoneymoon;
- (long long)smallWidgetSystemReloadJitterMax;
- (long long)smallWidgetSystemReloadJitterMaxHoneymoon;
- (long long)widgetSystemHoneymoonDuration;
- (long long)widgetSystemReloadInterval;
- (long long)widgetSystemReloadIntervalHoneymoon;
- (long long)widgetSystemReloadJitterMax;
- (long long)widgetSystemReloadJitterMaxHoneymoon;

@end
