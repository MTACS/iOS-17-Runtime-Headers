
@interface GEOLogMsgEventMapsWidgetsInteractionSession : PBCodable <NSCopying> {
    int  _duration;
    int  _endState;
    struct { 
        unsigned int has_duration : 1; 
        unsigned int has_endState : 1; 
        unsigned int has_localDayOfWeek : 1; 
        unsigned int has_localHour : 1; 
        unsigned int has_mapsWidgetType : 1; 
        unsigned int has_lockedMode : 1; 
        unsigned int read_mapsDestinationsWidget : 1; 
        unsigned int read_mapsNearbyWidget : 1; 
        unsigned int read_mapsTransitWidget : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _localDayOfWeek;
    int  _localHour;
    bool  _lockedMode;
    GEOMapsDestinationsWidget * _mapsDestinationsWidget;
    GEOMapsNearbyWidget * _mapsNearbyWidget;
    GEOMapsTransitWidget * _mapsTransitWidget;
    int  _mapsWidgetType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) int duration;
@property (nonatomic) int endState;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEndState;
@property (nonatomic) bool hasLocalDayOfWeek;
@property (nonatomic) bool hasLocalHour;
@property (nonatomic) bool hasLockedMode;
@property (nonatomic, readonly) bool hasMapsDestinationsWidget;
@property (nonatomic, readonly) bool hasMapsNearbyWidget;
@property (nonatomic, readonly) bool hasMapsTransitWidget;
@property (nonatomic) bool hasMapsWidgetType;
@property (nonatomic) int localDayOfWeek;
@property (nonatomic) int localHour;
@property (nonatomic) bool lockedMode;
@property (nonatomic, retain) GEOMapsDestinationsWidget *mapsDestinationsWidget;
@property (nonatomic, retain) GEOMapsNearbyWidget *mapsNearbyWidget;
@property (nonatomic, retain) GEOMapsTransitWidget *mapsTransitWidget;
@property (nonatomic) int mapsWidgetType;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsEndState:(id)arg1;
- (int)StringAsMapsWidgetType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)duration;
- (int)endState;
- (id)endStateAsString:(int)arg1;
- (bool)hasDuration;
- (bool)hasEndState;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocalDayOfWeek;
- (bool)hasLocalHour;
- (bool)hasLockedMode;
- (bool)hasMapsDestinationsWidget;
- (bool)hasMapsNearbyWidget;
- (bool)hasMapsTransitWidget;
- (bool)hasMapsWidgetType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)localDayOfWeek;
- (int)localHour;
- (bool)lockedMode;
- (id)mapsDestinationsWidget;
- (id)mapsNearbyWidget;
- (id)mapsTransitWidget;
- (int)mapsWidgetType;
- (id)mapsWidgetTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(int)arg1;
- (void)setEndState:(int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEndState:(bool)arg1;
- (void)setHasLocalDayOfWeek:(bool)arg1;
- (void)setHasLocalHour:(bool)arg1;
- (void)setHasLockedMode:(bool)arg1;
- (void)setHasMapsWidgetType:(bool)arg1;
- (void)setLocalDayOfWeek:(int)arg1;
- (void)setLocalHour:(int)arg1;
- (void)setLockedMode:(bool)arg1;
- (void)setMapsDestinationsWidget:(id)arg1;
- (void)setMapsNearbyWidget:(id)arg1;
- (void)setMapsTransitWidget:(id)arg1;
- (void)setMapsWidgetType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
