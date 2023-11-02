
@interface NTPBTodayConfig : PBCodable <NSCopying> {
    NSString * _audioIndicatorColor;
    NSString * _backgroundColorDark;
    NSString * _backgroundColorLight;
    struct { 
        unsigned int widgetSystemReloadInterval : 1; 
        unsigned int widgetSystemReloadJitterMax : 1; 
    }  _has;
    NSMutableArray * _todayQueueConfigs;
    NSString * _widgetIdentifier;
    long long  _widgetSystemReloadInterval;
    long long  _widgetSystemReloadJitterMax;
}

@property (nonatomic, retain) NSString *audioIndicatorColor;
@property (nonatomic, retain) NSString *backgroundColorDark;
@property (nonatomic, retain) NSString *backgroundColorLight;
@property (nonatomic, readonly) bool hasAudioIndicatorColor;
@property (nonatomic, readonly) bool hasBackgroundColorDark;
@property (nonatomic, readonly) bool hasBackgroundColorLight;
@property (nonatomic, readonly) bool hasWidgetIdentifier;
@property (nonatomic) bool hasWidgetSystemReloadInterval;
@property (nonatomic) bool hasWidgetSystemReloadJitterMax;
@property (nonatomic, retain) NSMutableArray *todayQueueConfigs;
@property (nonatomic, retain) NSString *widgetIdentifier;
@property (nonatomic) long long widgetSystemReloadInterval;
@property (nonatomic) long long widgetSystemReloadJitterMax;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)todayQueueConfigsType;

- (void)addTodayQueueConfigs:(id)arg1;
- (id)audioIndicatorColor;
- (id)backgroundColorDark;
- (id)backgroundColorLight;
- (void)clearTodayQueueConfigs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioIndicatorColor;
- (bool)hasBackgroundColorDark;
- (bool)hasBackgroundColorLight;
- (bool)hasWidgetIdentifier;
- (bool)hasWidgetSystemReloadInterval;
- (bool)hasWidgetSystemReloadJitterMax;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAudioIndicatorColor:(id)arg1;
- (void)setBackgroundColorDark:(id)arg1;
- (void)setBackgroundColorLight:(id)arg1;
- (void)setHasWidgetSystemReloadInterval:(bool)arg1;
- (void)setHasWidgetSystemReloadJitterMax:(bool)arg1;
- (void)setTodayQueueConfigs:(id)arg1;
- (void)setWidgetIdentifier:(id)arg1;
- (void)setWidgetSystemReloadInterval:(long long)arg1;
- (void)setWidgetSystemReloadJitterMax:(long long)arg1;
- (id)todayQueueConfigs;
- (id)todayQueueConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)todayQueueConfigsCount;
- (id)widgetIdentifier;
- (long long)widgetSystemReloadInterval;
- (long long)widgetSystemReloadJitterMax;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)_resolveArticle:(id)arg1 withPaidAccessChecker:(id)arg2 heldArticleRecords:(id)arg3;
- (id)_resolveArticles:(id)arg1 withPaidAccessChecker:(id)arg2 heldArticleRecords:(id)arg3;
- (id)configByResolvingWithTag:(id)arg1;
- (void)nt_resolveFallbacksWithPaidAccessChecker:(id)arg1 heldArticleRecords:(id)arg2;

@end
