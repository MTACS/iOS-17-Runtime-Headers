
@interface GEOElevationProfile : PBCodable <NSCopying> {
    struct { 
        unsigned int has_sumElevationGainCm : 1; 
        unsigned int has_sumElevationLossCm : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_minimumVisibleElevationRange : 1; 
        unsigned int read_points : 1; 
        unsigned int read_segmentDescriptions : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOMinimumVisibleElevationRange * _minimumVisibleElevationRange;
    NSMutableArray * _points;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _segmentDescriptions;
    unsigned int  _sumElevationGainCm;
    unsigned int  _sumElevationLossCm;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasMinimumVisibleElevationRange;
@property (nonatomic) bool hasSumElevationGainCm;
@property (nonatomic) bool hasSumElevationLossCm;
@property (nonatomic, retain) GEOMinimumVisibleElevationRange *minimumVisibleElevationRange;
@property (nonatomic, retain) NSMutableArray *points;
@property (nonatomic, retain) NSMutableArray *segmentDescriptions;
@property (nonatomic) unsigned int sumElevationGainCm;
@property (nonatomic) unsigned int sumElevationLossCm;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)pointType;
+ (Class)segmentDescriptionType;

- (void).cxx_destruct;
- (void)addPoint:(id)arg1;
- (void)addSegmentDescription:(id)arg1;
- (void)clearPoints;
- (void)clearSegmentDescriptions;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinimumVisibleElevationRange;
- (bool)hasSumElevationGainCm;
- (bool)hasSumElevationLossCm;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)minimumVisibleElevationRange;
- (id)pointAtIndex:(unsigned long long)arg1;
- (id)points;
- (unsigned long long)pointsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)segmentDescriptionAtIndex:(unsigned long long)arg1;
- (id)segmentDescriptions;
- (unsigned long long)segmentDescriptionsCount;
- (void)setHasSumElevationGainCm:(bool)arg1;
- (void)setHasSumElevationLossCm:(bool)arg1;
- (void)setMinimumVisibleElevationRange:(id)arg1;
- (void)setPoints:(id)arg1;
- (void)setSegmentDescriptions:(id)arg1;
- (void)setSumElevationGainCm:(unsigned int)arg1;
- (void)setSumElevationLossCm:(unsigned int)arg1;
- (unsigned int)sumElevationGainCm;
- (unsigned int)sumElevationLossCm;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
