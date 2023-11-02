
@interface GEOTransitBoardingInfoEntry : PBCodable <NSCopying> {
    GEOFormattedString * _alternativeText;
    GEOTransitListTimeInstruction * _alternativeTimeInstruction;
    bool  _clearExitPlanInfo;
    GEOTransitExitPlanInfo * _exitPlanInfoOverride;
    unsigned int  _expectedDepartureTime;
    struct { 
        unsigned int has_expectedDepartureTime : 1; 
        unsigned int has_clearExitPlanInfo : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_alternativeText : 1; 
        unsigned int read_alternativeTimeInstruction : 1; 
        unsigned int read_exitPlanInfoOverride : 1; 
        unsigned int read_mainText : 1; 
        unsigned int read_mainTimeInstruction : 1; 
        unsigned int read_occupancyInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOFormattedString * _mainText;
    GEOTransitListTimeInstruction * _mainTimeInstruction;
    GEOTransitOccupancyInfo * _occupancyInfo;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOFormattedString *alternativeText;
@property (nonatomic, retain) GEOTransitListTimeInstruction *alternativeTimeInstruction;
@property (nonatomic) bool clearExitPlanInfo;
@property (nonatomic, retain) GEOTransitExitPlanInfo *exitPlanInfoOverride;
@property (nonatomic) unsigned int expectedDepartureTime;
@property (nonatomic, readonly) bool hasAlternativeText;
@property (nonatomic, readonly) bool hasAlternativeTimeInstruction;
@property (nonatomic) bool hasClearExitPlanInfo;
@property (nonatomic, readonly) bool hasExitPlanInfoOverride;
@property (nonatomic) bool hasExpectedDepartureTime;
@property (nonatomic, readonly) bool hasMainText;
@property (nonatomic, readonly) bool hasMainTimeInstruction;
@property (nonatomic, readonly) bool hasOccupancyInfo;
@property (nonatomic, retain) GEOFormattedString *mainText;
@property (nonatomic, retain) GEOTransitListTimeInstruction *mainTimeInstruction;
@property (nonatomic, retain) GEOTransitOccupancyInfo *occupancyInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)alternativeText;
- (id)alternativeTimeInstruction;
- (bool)clearExitPlanInfo;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exitPlanInfoOverride;
- (unsigned int)expectedDepartureTime;
- (bool)hasAlternativeText;
- (bool)hasAlternativeTimeInstruction;
- (bool)hasClearExitPlanInfo;
- (bool)hasExitPlanInfoOverride;
- (bool)hasExpectedDepartureTime;
- (bool)hasMainText;
- (bool)hasMainTimeInstruction;
- (bool)hasOccupancyInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mainText;
- (id)mainTimeInstruction;
- (void)mergeFrom:(id)arg1;
- (id)occupancyInfo;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlternativeText:(id)arg1;
- (void)setAlternativeTimeInstruction:(id)arg1;
- (void)setClearExitPlanInfo:(bool)arg1;
- (void)setExitPlanInfoOverride:(id)arg1;
- (void)setExpectedDepartureTime:(unsigned int)arg1;
- (void)setHasClearExitPlanInfo:(bool)arg1;
- (void)setHasExpectedDepartureTime:(bool)arg1;
- (void)setMainText:(id)arg1;
- (void)setMainTimeInstruction:(id)arg1;
- (void)setOccupancyInfo:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
