
@interface GEORPDirectionsCorrections : PBCodable <NSCopying> {
    GEORPCorrectedCoordinate * _arrivalCoordinate;
    NSData * _directionsResponseId;
    struct { 
        unsigned int has_noGoodRoutesShown : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_arrivalCoordinate : 1; 
        unsigned int read_directionsResponseId : 1; 
        unsigned int read_instructionCorrections : 1; 
        unsigned int read_overviewScreenshotImageId : 1; 
        unsigned int read_problematicRouteIndexs : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _instructionCorrections;
    bool  _noGoodRoutesShown;
    NSString * _overviewScreenshotImageId;
    NSMutableArray * _problematicRouteIndexs;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEORPCorrectedCoordinate *arrivalCoordinate;
@property (nonatomic, retain) NSData *directionsResponseId;
@property (nonatomic, readonly) bool hasArrivalCoordinate;
@property (nonatomic, readonly) bool hasDirectionsResponseId;
@property (nonatomic) bool hasNoGoodRoutesShown;
@property (nonatomic, readonly) bool hasOverviewScreenshotImageId;
@property (nonatomic, retain) NSMutableArray *instructionCorrections;
@property (nonatomic) bool noGoodRoutesShown;
@property (nonatomic, retain) NSString *overviewScreenshotImageId;
@property (nonatomic, retain) NSMutableArray *problematicRouteIndexs;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)instructionCorrectionType;
+ (bool)isValid:(id)arg1;
+ (Class)problematicRouteIndexType;

- (void).cxx_destruct;
- (void)addInstructionCorrection:(id)arg1;
- (void)addProblematicRouteIndex:(id)arg1;
- (id)arrivalCoordinate;
- (void)clearInstructionCorrections;
- (void)clearProblematicRouteIndexs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponseId;
- (bool)hasArrivalCoordinate;
- (bool)hasDirectionsResponseId;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasNoGoodRoutesShown;
- (bool)hasOverviewScreenshotImageId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)instructionCorrectionAtIndex:(unsigned long long)arg1;
- (id)instructionCorrections;
- (unsigned long long)instructionCorrectionsCount;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)noGoodRoutesShown;
- (id)overviewScreenshotImageId;
- (id)problematicRouteIndexAtIndex:(unsigned long long)arg1;
- (id)problematicRouteIndexs;
- (unsigned long long)problematicRouteIndexsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArrivalCoordinate:(id)arg1;
- (void)setDirectionsResponseId:(id)arg1;
- (void)setHasNoGoodRoutesShown:(bool)arg1;
- (void)setInstructionCorrections:(id)arg1;
- (void)setNoGoodRoutesShown:(bool)arg1;
- (void)setOverviewScreenshotImageId:(id)arg1;
- (void)setProblematicRouteIndexs:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
