
@interface GEOTransitStepUpdate : PBCodable <NSCopying> {
    GEOTransitBoardingInfo * _boardingInfo;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_boardingInfo : 1; 
        unsigned int read_instructions : 1; 
        unsigned int read_scheduleInfo : 1; 
        unsigned int read_updateIdentifier : 1; 
        unsigned int read_vehiclePositionInfo : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOInstructionSet * _instructions;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOTransitScheduleInfo * _scheduleInfo;
    PBUnknownFields * _unknownFields;
    NSData * _updateIdentifier;
    GEOTransitVehiclePositionInfo * _vehiclePositionInfo;
}

@property (nonatomic, retain) GEOTransitBoardingInfo *boardingInfo;
@property (nonatomic, readonly) bool hasBoardingInfo;
@property (nonatomic, readonly) bool hasInstructions;
@property (nonatomic, readonly) bool hasScheduleInfo;
@property (nonatomic, readonly) bool hasUpdateIdentifier;
@property (nonatomic, readonly) bool hasVehiclePositionInfo;
@property (nonatomic, retain) GEOInstructionSet *instructions;
@property (nonatomic, retain) GEOTransitScheduleInfo *scheduleInfo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSData *updateIdentifier;
@property (nonatomic, retain) GEOTransitVehiclePositionInfo *vehiclePositionInfo;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)boardingInfo;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBoardingInfo;
- (bool)hasInstructions;
- (bool)hasScheduleInfo;
- (bool)hasUpdateIdentifier;
- (bool)hasVehiclePositionInfo;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)instructions;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)scheduleInfo;
- (void)setBoardingInfo:(id)arg1;
- (void)setInstructions:(id)arg1;
- (void)setScheduleInfo:(id)arg1;
- (void)setUpdateIdentifier:(id)arg1;
- (void)setVehiclePositionInfo:(id)arg1;
- (id)unknownFields;
- (id)updateIdentifier;
- (id)vehiclePositionInfo;
- (void)writeTo:(id)arg1;

@end
