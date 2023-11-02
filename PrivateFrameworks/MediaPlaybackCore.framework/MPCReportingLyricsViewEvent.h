
@interface MPCReportingLyricsViewEvent : NSObject {
    bool  _continuityCameraUsed;
    long long  _displayType;
    long long  _displayedCharacterCount;
    NSString * _featureName;
    NSString * _language;
    NSString * _lyricsID;
    MPModelPlayEvent * _modelPlayEvent;
    MPModelSong * _modelSong;
    NSString * _queueGroupingID;
    NSData * _recommendationData;
    long long  _sourceType;
    long long  _userPreferenceSyllable;
    double  _visibleDuration;
}

@property (nonatomic) bool continuityCameraUsed;
@property (nonatomic) long long displayType;
@property (nonatomic) long long displayedCharacterCount;
@property (nonatomic, copy) NSString *featureName;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, retain) NSString *lyricsID;
@property (nonatomic, retain) MPModelPlayEvent *modelPlayEvent;
@property (nonatomic, retain) MPModelSong *modelSong;
@property (nonatomic, copy) NSString *queueGroupingID;
@property (nonatomic, copy) NSData *recommendationData;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long userPreferenceSyllable;
@property (nonatomic) double visibleDuration;

- (void).cxx_destruct;
- (bool)continuityCameraUsed;
- (long long)displayType;
- (long long)displayedCharacterCount;
- (id)featureName;
- (id)language;
- (id)lyricsID;
- (id)modelPlayEvent;
- (id)modelSong;
- (id)queueGroupingID;
- (id)recommendationData;
- (void)setContinuityCameraUsed:(bool)arg1;
- (void)setDisplayType:(long long)arg1;
- (void)setDisplayedCharacterCount:(long long)arg1;
- (void)setFeatureName:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLyricsID:(id)arg1;
- (void)setModelPlayEvent:(id)arg1;
- (void)setModelSong:(id)arg1;
- (void)setQueueGroupingID:(id)arg1;
- (void)setRecommendationData:(id)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setUserPreferenceSyllable:(long long)arg1;
- (void)setVisibleDuration:(double)arg1;
- (long long)sourceType;
- (long long)userPreferenceSyllable;
- (double)visibleDuration;

@end
