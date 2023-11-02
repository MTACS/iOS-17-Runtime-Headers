
@interface GEOTransitRouteDisplayStrings : PBCodable <GEOComposedRouteTransitDisplayStrings, NSCopying> {
    NSMutableArray * _advisorys;
    GEOFormattedString * _badge;
    GEOFormattedString * _duration;
    GEOFormattedString * _durationList;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_advisorys : 1; 
        unsigned int read_badge : 1; 
        unsigned int read_durationList : 1; 
        unsigned int read_duration : 1; 
        unsigned int read_planningDescription : 1; 
        unsigned int read_travelDescription : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOFormattedString * _planningDescription;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _travelDescription;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *advisorys;
@property (nonatomic, retain) GEOFormattedString *badge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEOFormattedString *duration;
@property (nonatomic, retain) GEOFormattedString *durationList;
@property (nonatomic, readonly) bool hasBadge;
@property (nonatomic, readonly) bool hasDuration;
@property (nonatomic, readonly) bool hasDurationList;
@property (nonatomic, readonly) bool hasPlanningDescription;
@property (nonatomic, readonly) bool hasTravelDescription;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <GEOServerFormattedString> *pickingDurationFormatString;
@property (nonatomic, retain) GEOFormattedString *planningDescription;
@property (nonatomic, readonly) <GEOServerFormattedString> *planningDescriptionFormatString;
@property (nonatomic, readonly) <GEOServerFormattedString> *previewDurationFormatString;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOServerFormattedString> *transitDescriptionFormatString;
@property (nonatomic, readonly) <GEOServerFormattedString> *transitRouteBadge;
@property (nonatomic, retain) GEOFormattedString *travelDescription;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)advisoryType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAdvisory:(id)arg1;
- (id)advisoryAtIndex:(unsigned long long)arg1;
- (id)advisorys;
- (unsigned long long)advisorysCount;
- (id)badge;
- (void)clearAdvisorys;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)duration;
- (id)durationList;
- (bool)hasBadge;
- (bool)hasDuration;
- (bool)hasDurationList;
- (bool)hasPlanningDescription;
- (bool)hasTravelDescription;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)pickingDurationFormatString;
- (id)planningDescription;
- (id)planningDescriptionFormatString;
- (id)previewDurationFormatString;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdvisorys:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setDurationList:(id)arg1;
- (void)setPlanningDescription:(id)arg1;
- (void)setTravelDescription:(id)arg1;
- (id)transitDescriptionFormatString;
- (id)transitRouteBadge;
- (id)travelDescription;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
