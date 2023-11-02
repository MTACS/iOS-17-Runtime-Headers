
@interface NTPBTodayWidgetConfig : PBCodable <NSCopying> {
    NSString * _audioIndicatorColor;
    NSString * _backgroundColorDark;
    NSString * _backgroundColorLight;
    bool  _contentPrefetchEnabled;
    NSData * _externalAnalyticsConfigurationsData;
    struct { 
        unsigned int minimumArticleExposureDurationToBePreseen : 1; 
        unsigned int prerollLoadingTimeout : 1; 
        unsigned int widgetSystemReloadInterval : 1; 
        unsigned int widgetSystemReloadJitterMax : 1; 
        unsigned int minimumNumberOfTimesPreseenToBeSeen : 1; 
        unsigned int contentPrefetchEnabled : 1; 
    }  _has;
    long long  _minimumArticleExposureDurationToBePreseen;
    unsigned int  _minimumNumberOfTimesPreseenToBeSeen;
    double  _prerollLoadingTimeout;
    long long  _widgetSystemReloadInterval;
    long long  _widgetSystemReloadJitterMax;
}

@property (nonatomic, retain) NSString *audioIndicatorColor;
@property (nonatomic, retain) NSString *backgroundColorDark;
@property (nonatomic, retain) NSString *backgroundColorLight;
@property (nonatomic) bool contentPrefetchEnabled;
@property (nonatomic, retain) NSData *externalAnalyticsConfigurationsData;
@property (nonatomic, readonly) bool hasAudioIndicatorColor;
@property (nonatomic, readonly) bool hasBackgroundColorDark;
@property (nonatomic, readonly) bool hasBackgroundColorLight;
@property (nonatomic) bool hasContentPrefetchEnabled;
@property (nonatomic, readonly) bool hasExternalAnalyticsConfigurationsData;
@property (nonatomic) bool hasMinimumArticleExposureDurationToBePreseen;
@property (nonatomic) bool hasMinimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) bool hasPrerollLoadingTimeout;
@property (nonatomic) bool hasWidgetSystemReloadInterval;
@property (nonatomic) bool hasWidgetSystemReloadJitterMax;
@property (nonatomic) long long minimumArticleExposureDurationToBePreseen;
@property (nonatomic) unsigned int minimumNumberOfTimesPreseenToBeSeen;
@property (nonatomic) double prerollLoadingTimeout;
@property (nonatomic) long long widgetSystemReloadInterval;
@property (nonatomic) long long widgetSystemReloadJitterMax;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (void).cxx_destruct;
- (id)audioIndicatorColor;
- (id)backgroundColorDark;
- (id)backgroundColorLight;
- (bool)contentPrefetchEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalAnalyticsConfigurationsData;
- (bool)hasAudioIndicatorColor;
- (bool)hasBackgroundColorDark;
- (bool)hasBackgroundColorLight;
- (bool)hasContentPrefetchEnabled;
- (bool)hasExternalAnalyticsConfigurationsData;
- (bool)hasMinimumArticleExposureDurationToBePreseen;
- (bool)hasMinimumNumberOfTimesPreseenToBeSeen;
- (bool)hasPrerollLoadingTimeout;
- (bool)hasWidgetSystemReloadInterval;
- (bool)hasWidgetSystemReloadJitterMax;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)minimumArticleExposureDurationToBePreseen;
- (unsigned int)minimumNumberOfTimesPreseenToBeSeen;
- (double)prerollLoadingTimeout;
- (bool)readFrom:(id)arg1;
- (void)setAudioIndicatorColor:(id)arg1;
- (void)setBackgroundColorDark:(id)arg1;
- (void)setBackgroundColorLight:(id)arg1;
- (void)setContentPrefetchEnabled:(bool)arg1;
- (void)setExternalAnalyticsConfigurationsData:(id)arg1;
- (void)setHasContentPrefetchEnabled:(bool)arg1;
- (void)setHasMinimumArticleExposureDurationToBePreseen:(bool)arg1;
- (void)setHasMinimumNumberOfTimesPreseenToBeSeen:(bool)arg1;
- (void)setHasPrerollLoadingTimeout:(bool)arg1;
- (void)setHasWidgetSystemReloadInterval:(bool)arg1;
- (void)setHasWidgetSystemReloadJitterMax:(bool)arg1;
- (void)setMinimumArticleExposureDurationToBePreseen:(long long)arg1;
- (void)setMinimumNumberOfTimesPreseenToBeSeen:(unsigned int)arg1;
- (void)setPrerollLoadingTimeout:(double)arg1;
- (void)setWidgetSystemReloadInterval:(long long)arg1;
- (void)setWidgetSystemReloadJitterMax:(long long)arg1;
- (long long)widgetSystemReloadInterval;
- (long long)widgetSystemReloadJitterMax;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)externalAnalyticsConfigurations;
- (void)setExternalAnalyticsConfigurations:(id)arg1;

@end
