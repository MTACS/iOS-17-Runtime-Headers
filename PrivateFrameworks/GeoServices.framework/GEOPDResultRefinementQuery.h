
@interface GEOPDResultRefinementQuery : PBCodable <NSCopying> {
    struct { 
        unsigned int has_resultRefinementOriginType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_refinementSections : 1; 
        unsigned int read_refinementSessionState : 1; 
        unsigned int read_refinements : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _refinementSections;
    GEOPDRefinementSessionState * _refinementSessionState;
    NSMutableArray * _refinements;
    int  _resultRefinementOriginType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasRefinementSessionState;
@property (nonatomic) bool hasResultRefinementOriginType;
@property (nonatomic, retain) NSMutableArray *refinementSections;
@property (nonatomic, retain) GEOPDRefinementSessionState *refinementSessionState;
@property (nonatomic, retain) NSMutableArray *refinements;
@property (nonatomic) int resultRefinementOriginType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)refinementSectionType;
+ (Class)refinementType;

- (void).cxx_destruct;
- (int)StringAsResultRefinementOriginType:(id)arg1;
- (void)addRefinement:(id)arg1;
- (void)addRefinementSection:(id)arg1;
- (void)clearRefinementSections;
- (void)clearRefinements;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasRefinementSessionState;
- (bool)hasResultRefinementOriginType;
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
- (id)refinementAtIndex:(unsigned long long)arg1;
- (id)refinementSectionAtIndex:(unsigned long long)arg1;
- (id)refinementSections;
- (unsigned long long)refinementSectionsCount;
- (id)refinementSessionState;
- (id)refinements;
- (unsigned long long)refinementsCount;
- (int)resultRefinementOriginType;
- (id)resultRefinementOriginTypeAsString:(int)arg1;
- (void)setHasResultRefinementOriginType:(bool)arg1;
- (void)setRefinementSections:(id)arg1;
- (void)setRefinementSessionState:(id)arg1;
- (void)setRefinements:(id)arg1;
- (void)setResultRefinementOriginType:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
