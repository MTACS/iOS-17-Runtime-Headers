
@interface GEOTraitsTransitScheduleFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_highFrequencyFilter : 1; 
        unsigned int read_lowFrequencyFilter : 1; 
        unsigned int read_operatingHoursRange : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOTraitsTransitScheduleModeFilter * _highFrequencyFilter;
    GEOTraitsTransitScheduleModeFilter * _lowFrequencyFilter;
    GEOTraitsTransitScheduleTimeRange * _operatingHoursRange;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasHighFrequencyFilter;
@property (nonatomic, readonly) bool hasLowFrequencyFilter;
@property (nonatomic, readonly) bool hasOperatingHoursRange;
@property (nonatomic, retain) GEOTraitsTransitScheduleModeFilter *highFrequencyFilter;
@property (nonatomic, retain) GEOTraitsTransitScheduleModeFilter *lowFrequencyFilter;
@property (nonatomic, retain) GEOTraitsTransitScheduleTimeRange *operatingHoursRange;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHighFrequencyFilter;
- (bool)hasLowFrequencyFilter;
- (bool)hasOperatingHoursRange;
- (unsigned long long)hash;
- (id)highFrequencyFilter;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)lowFrequencyFilter;
- (void)mergeFrom:(id)arg1;
- (id)operatingHoursRange;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHighFrequencyFilter:(id)arg1;
- (void)setLowFrequencyFilter:(id)arg1;
- (void)setOperatingHoursRange:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
