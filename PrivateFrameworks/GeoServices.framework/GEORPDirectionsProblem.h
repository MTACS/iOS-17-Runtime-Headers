
@interface GEORPDirectionsProblem : PBCodable <NSCopying> {
    NSMutableArray * _clientSuggestedRoutes;
    NSData * _directionsResponseId;
    GEORPUserSearchInput * _endWaypoint;
    struct { 
        unsigned int has_problematicLineIndex : 1; 
        unsigned int has_problematicStepIndex : 1; 
        unsigned int read_clientSuggestedRoutes : 1; 
        unsigned int read_directionsResponseId : 1; 
        unsigned int read_endWaypoint : 1; 
        unsigned int read_instructionCorrections : 1; 
        unsigned int read_overviewScreenshotImageData : 1; 
        unsigned int read_problematicRouteIndexs : 1; 
        unsigned int read_startWaypoint : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _instructionCorrections;
    NSData * _overviewScreenshotImageData;
    unsigned int  _problematicLineIndex;
    NSMutableArray * _problematicRouteIndexs;
    unsigned int  _problematicStepIndex;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPUserSearchInput * _startWaypoint;
}

@property (nonatomic, retain) NSMutableArray *clientSuggestedRoutes;
@property (nonatomic, retain) NSData *directionsResponseId;
@property (nonatomic, retain) GEORPUserSearchInput *endWaypoint;
@property (nonatomic, readonly) bool hasDirectionsResponseId;
@property (nonatomic, readonly) bool hasEndWaypoint;
@property (nonatomic, readonly) bool hasOverviewScreenshotImageData;
@property (nonatomic) bool hasProblematicLineIndex;
@property (nonatomic) bool hasProblematicStepIndex;
@property (nonatomic, readonly) bool hasStartWaypoint;
@property (nonatomic, retain) NSMutableArray *instructionCorrections;
@property (nonatomic, retain) NSData *overviewScreenshotImageData;
@property (nonatomic) unsigned int problematicLineIndex;
@property (nonatomic, retain) NSMutableArray *problematicRouteIndexs;
@property (nonatomic) unsigned int problematicStepIndex;
@property (nonatomic, retain) GEORPUserSearchInput *startWaypoint;

+ (Class)clientSuggestedRouteType;
+ (Class)instructionCorrectionType;
+ (bool)isValid:(id)arg1;
+ (Class)problematicRouteIndexType;

- (void).cxx_destruct;
- (void)addClientSuggestedRoute:(id)arg1;
- (void)addInstructionCorrection:(id)arg1;
- (void)addProblematicRouteIndex:(id)arg1;
- (void)clearClientSuggestedRoutes;
- (void)clearInstructionCorrections;
- (void)clearProblematicRouteIndexs;
- (id)clientSuggestedRouteAtIndex:(unsigned long long)arg1;
- (id)clientSuggestedRoutes;
- (unsigned long long)clientSuggestedRoutesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionsResponseId;
- (id)endWaypoint;
- (bool)hasDirectionsResponseId;
- (bool)hasEndWaypoint;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasOverviewScreenshotImageData;
- (bool)hasProblematicLineIndex;
- (bool)hasProblematicStepIndex;
- (bool)hasStartWaypoint;
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
- (id)overviewScreenshotImageData;
- (unsigned int)problematicLineIndex;
- (id)problematicRouteIndexAtIndex:(unsigned long long)arg1;
- (id)problematicRouteIndexs;
- (unsigned long long)problematicRouteIndexsCount;
- (unsigned int)problematicStepIndex;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientSuggestedRoutes:(id)arg1;
- (void)setDirectionsResponseId:(id)arg1;
- (void)setEndWaypoint:(id)arg1;
- (void)setHasProblematicLineIndex:(bool)arg1;
- (void)setHasProblematicStepIndex:(bool)arg1;
- (void)setInstructionCorrections:(id)arg1;
- (void)setOverviewScreenshotImageData:(id)arg1;
- (void)setProblematicLineIndex:(unsigned int)arg1;
- (void)setProblematicRouteIndexs:(id)arg1;
- (void)setProblematicStepIndex:(unsigned int)arg1;
- (void)setStartWaypoint:(id)arg1;
- (id)startWaypoint;
- (void)writeTo:(id)arg1;

@end
