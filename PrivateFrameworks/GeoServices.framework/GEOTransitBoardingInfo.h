
@interface GEOTransitBoardingInfo : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {
    GEOTransitListTimeInstruction * _endTimeInstruction;
    NSMutableArray * _entrys;
    GEOTransitExitPlanInfo * _exitPlanInfo;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_endTimeInstruction : 1; 
        unsigned int read_entrys : 1; 
        unsigned int read_exitPlanInfo : 1; 
        unsigned int read_preBoardingTimeInstruction : 1; 
        unsigned int read_summaryTimeInstruction : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOTransitListTimeInstruction * _preBoardingTimeInstruction;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOTransitListTimeInstruction * _summaryTimeInstruction;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEOTransitListTimeInstruction *endTimeInstruction;
@property (nonatomic, retain) NSMutableArray *entrys;
@property (nonatomic, retain) GEOTransitExitPlanInfo *exitPlanInfo;
@property (nonatomic, readonly) bool hasEndTimeInstruction;
@property (nonatomic, readonly) bool hasExitPlanInfo;
@property (nonatomic, readonly) bool hasPreBoardingTimeInstruction;
@property (nonatomic, readonly) bool hasSummaryTimeInstruction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOTransitListTimeInstruction *preBoardingTimeInstruction;
@property (nonatomic, retain) GEOTransitListTimeInstruction *summaryTimeInstruction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)entryType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (bool)_transit_hasAnyFieldSet;
- (void)_transit_mergeFrom:(id)arg1;
- (void)addEntry:(id)arg1;
- (void)clearEntrys;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)endTimeInstruction;
- (id)entryAtIndex:(unsigned long long)arg1;
- (id)entrys;
- (unsigned long long)entrysCount;
- (id)exitPlanInfo;
- (bool)hasEndTimeInstruction;
- (bool)hasExitPlanInfo;
- (bool)hasPreBoardingTimeInstruction;
- (bool)hasSummaryTimeInstruction;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)preBoardingTimeInstruction;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEndTimeInstruction:(id)arg1;
- (void)setEntrys:(id)arg1;
- (void)setExitPlanInfo:(id)arg1;
- (void)setPreBoardingTimeInstruction:(id)arg1;
- (void)setSummaryTimeInstruction:(id)arg1;
- (id)summaryTimeInstruction;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
