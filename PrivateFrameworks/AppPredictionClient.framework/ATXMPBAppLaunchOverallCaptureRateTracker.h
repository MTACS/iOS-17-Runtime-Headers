
@interface ATXMPBAppLaunchOverallCaptureRateTracker : PBCodable <NSCopying> {
    bool  _appLibraryEnabled;
    bool  _appPredictionPanelEnabled;
    bool  _appPredictionPanelTodayEnabled;
    int  _captureType;
    struct { 
        unsigned int captureType : 1; 
        unsigned int iconLocation : 1; 
        unsigned int appLibraryEnabled : 1; 
        unsigned int appPredictionPanelEnabled : 1; 
        unsigned int appPredictionPanelTodayEnabled : 1; 
        unsigned int spotlightEnabled : 1; 
        unsigned int suggestionsWidgetEnabled : 1; 
        unsigned int suggestionsWidgetTodayEnabled : 1; 
    }  _has;
    int  _iconLocation;
    bool  _spotlightEnabled;
    bool  _suggestionsWidgetEnabled;
    bool  _suggestionsWidgetTodayEnabled;
}

@property (nonatomic) bool appLibraryEnabled;
@property (nonatomic) bool appPredictionPanelEnabled;
@property (nonatomic) bool appPredictionPanelTodayEnabled;
@property (nonatomic) int captureType;
@property (nonatomic) bool hasAppLibraryEnabled;
@property (nonatomic) bool hasAppPredictionPanelEnabled;
@property (nonatomic) bool hasAppPredictionPanelTodayEnabled;
@property (nonatomic) bool hasCaptureType;
@property (nonatomic) bool hasIconLocation;
@property (nonatomic) bool hasSpotlightEnabled;
@property (nonatomic) bool hasSuggestionsWidgetEnabled;
@property (nonatomic) bool hasSuggestionsWidgetTodayEnabled;
@property (nonatomic) int iconLocation;
@property (nonatomic) bool spotlightEnabled;
@property (nonatomic) bool suggestionsWidgetEnabled;
@property (nonatomic) bool suggestionsWidgetTodayEnabled;

- (int)StringAsCaptureType:(id)arg1;
- (int)StringAsIconLocation:(id)arg1;
- (bool)appLibraryEnabled;
- (bool)appPredictionPanelEnabled;
- (bool)appPredictionPanelTodayEnabled;
- (int)captureType;
- (id)captureTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppLibraryEnabled;
- (bool)hasAppPredictionPanelEnabled;
- (bool)hasAppPredictionPanelTodayEnabled;
- (bool)hasCaptureType;
- (bool)hasIconLocation;
- (bool)hasSpotlightEnabled;
- (bool)hasSuggestionsWidgetEnabled;
- (bool)hasSuggestionsWidgetTodayEnabled;
- (unsigned long long)hash;
- (int)iconLocation;
- (id)iconLocationAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppLibraryEnabled:(bool)arg1;
- (void)setAppPredictionPanelEnabled:(bool)arg1;
- (void)setAppPredictionPanelTodayEnabled:(bool)arg1;
- (void)setCaptureType:(int)arg1;
- (void)setHasAppLibraryEnabled:(bool)arg1;
- (void)setHasAppPredictionPanelEnabled:(bool)arg1;
- (void)setHasAppPredictionPanelTodayEnabled:(bool)arg1;
- (void)setHasCaptureType:(bool)arg1;
- (void)setHasIconLocation:(bool)arg1;
- (void)setHasSpotlightEnabled:(bool)arg1;
- (void)setHasSuggestionsWidgetEnabled:(bool)arg1;
- (void)setHasSuggestionsWidgetTodayEnabled:(bool)arg1;
- (void)setIconLocation:(int)arg1;
- (void)setSpotlightEnabled:(bool)arg1;
- (void)setSuggestionsWidgetEnabled:(bool)arg1;
- (void)setSuggestionsWidgetTodayEnabled:(bool)arg1;
- (bool)spotlightEnabled;
- (bool)suggestionsWidgetEnabled;
- (bool)suggestionsWidgetTodayEnabled;
- (void)writeTo:(id)arg1;

@end
