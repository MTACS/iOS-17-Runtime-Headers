
@interface GEOLogMsgEventARSessionUsage : PBCodable <NSCopying> {
    NSMutableArray * _arElementDetails;
    bool  _didLocalize;
    struct { 
        unsigned int has_sessionTimeMs : 1; 
        unsigned int has_timeRoundedToHour : 1; 
        unsigned int has_didLocalize : 1; 
        unsigned int read_arElementDetails : 1; 
        unsigned int read_thermalPressures : 1; 
        unsigned int read_vlfLocalizationResults : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _sessionTimeMs;
    NSMutableArray * _thermalPressures;
    unsigned int  _timeRoundedToHour;
    NSMutableArray * _vlfLocalizationResults;
}

@property (nonatomic, retain) NSMutableArray *arElementDetails;
@property (nonatomic) bool didLocalize;
@property (nonatomic) bool hasDidLocalize;
@property (nonatomic) bool hasSessionTimeMs;
@property (nonatomic) bool hasTimeRoundedToHour;
@property (nonatomic) unsigned int sessionTimeMs;
@property (nonatomic, retain) NSMutableArray *thermalPressures;
@property (nonatomic) unsigned int timeRoundedToHour;
@property (nonatomic, retain) NSMutableArray *vlfLocalizationResults;

+ (Class)arElementDetailsType;
+ (bool)isValid:(id)arg1;
+ (Class)thermalPressureType;
+ (Class)vlfLocalizationResultsType;

- (void).cxx_destruct;
- (void)addArElementDetails:(id)arg1;
- (void)addThermalPressure:(id)arg1;
- (void)addVlfLocalizationResults:(id)arg1;
- (id)arElementDetails;
- (id)arElementDetailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)arElementDetailsCount;
- (void)clearArElementDetails;
- (void)clearThermalPressures;
- (void)clearVlfLocalizationResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didLocalize;
- (bool)hasDidLocalize;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasSessionTimeMs;
- (bool)hasTimeRoundedToHour;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)sessionTimeMs;
- (void)setArElementDetails:(id)arg1;
- (void)setDidLocalize:(bool)arg1;
- (void)setHasDidLocalize:(bool)arg1;
- (void)setHasSessionTimeMs:(bool)arg1;
- (void)setHasTimeRoundedToHour:(bool)arg1;
- (void)setSessionTimeMs:(unsigned int)arg1;
- (void)setThermalPressures:(id)arg1;
- (void)setTimeRoundedToHour:(unsigned int)arg1;
- (void)setVlfLocalizationResults:(id)arg1;
- (id)thermalPressureAtIndex:(unsigned long long)arg1;
- (id)thermalPressures;
- (unsigned long long)thermalPressuresCount;
- (unsigned int)timeRoundedToHour;
- (id)vlfLocalizationResults;
- (id)vlfLocalizationResultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)vlfLocalizationResultsCount;
- (void)writeTo:(id)arg1;

@end
