
@interface GEOVLFLocalizationResults : PBCodable <NSCopying> {
    struct { 
        unsigned int has_positionContextClassification : 1; 
        unsigned int has_vlfFinalState : 1; 
        unsigned int read_localizationDetails : 1; 
        unsigned int read_vlfCorrection : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _localizationDetails;
    struct GEOVLFPositionContextClassification { 
        double _indoorProbability; 
        double _outdoorProbability; 
        int _type; 
        struct { 
            unsigned int indoorProbability : 1; 
            unsigned int outdoorProbability : 1; 
            unsigned int type : 1; 
        } _has; 
    }  _positionContextClassification;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOVLFCorrection * _vlfCorrection;
    int  _vlfFinalState;
}

@property (nonatomic) bool hasPositionContextClassification;
@property (nonatomic, readonly) bool hasVlfCorrection;
@property (nonatomic) bool hasVlfFinalState;
@property (nonatomic, retain) NSMutableArray *localizationDetails;
@property (nonatomic) struct GEOVLFPositionContextClassification { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } positionContextClassification;
@property (nonatomic, retain) GEOVLFCorrection *vlfCorrection;
@property (nonatomic) int vlfFinalState;

+ (bool)isValid:(id)arg1;
+ (Class)localizationDetailsType;

- (void).cxx_destruct;
- (int)StringAsVlfFinalState:(id)arg1;
- (void)addLocalizationDetails:(id)arg1;
- (void)clearLocalizationDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasPositionContextClassification;
- (bool)hasVlfCorrection;
- (bool)hasVlfFinalState;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)localizationDetails;
- (id)localizationDetailsAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizationDetailsCount;
- (void)mergeFrom:(id)arg1;
- (struct GEOVLFPositionContextClassification { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })positionContextClassification;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPositionContextClassification:(bool)arg1;
- (void)setHasVlfFinalState:(bool)arg1;
- (void)setLocalizationDetails:(id)arg1;
- (void)setPositionContextClassification:(struct GEOVLFPositionContextClassification { double x1; double x2; int x3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)setVlfCorrection:(id)arg1;
- (void)setVlfFinalState:(int)arg1;
- (id)vlfCorrection;
- (int)vlfFinalState;
- (id)vlfFinalStateAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
