
@interface GEORPCorrectedLabel : PBCodable <NSCopying> {
    GEOLatLng * _coordinate;
    NSString * _correctedValue;
    NSMutableArray * _featureHandles;
    GEOMapRegion * _featureRegion;
    struct { 
        unsigned int has_uid : 1; 
        unsigned int has_localizedLabels : 1; 
        unsigned int read_coordinate : 1; 
        unsigned int read_correctedValue : 1; 
        unsigned int read_featureHandles : 1; 
        unsigned int read_featureRegion : 1; 
        unsigned int read_originalValue : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _localizedLabels;
    NSString * _originalValue;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _uid;
}

@property (nonatomic, retain) GEOLatLng *coordinate;
@property (nonatomic, retain) NSString *correctedValue;
@property (nonatomic, retain) NSMutableArray *featureHandles;
@property (nonatomic, retain) GEOMapRegion *featureRegion;
@property (nonatomic, readonly) bool hasCoordinate;
@property (nonatomic, readonly) bool hasCorrectedValue;
@property (nonatomic, readonly) bool hasFeatureRegion;
@property (nonatomic) bool hasLocalizedLabels;
@property (nonatomic, readonly) bool hasOriginalValue;
@property (nonatomic) bool hasUid;
@property (nonatomic) bool localizedLabels;
@property (nonatomic, retain) NSString *originalValue;
@property (nonatomic) unsigned long long uid;

+ (Class)featureHandleType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addFeatureHandle:(id)arg1;
- (void)clearFeatureHandles;
- (id)coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedValue;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureHandleAtIndex:(unsigned long long)arg1;
- (id)featureHandles;
- (unsigned long long)featureHandlesCount;
- (id)featureRegion;
- (bool)hasCoordinate;
- (bool)hasCorrectedValue;
- (bool)hasFeatureRegion;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLocalizedLabels;
- (bool)hasOriginalValue;
- (bool)hasUid;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)localizedLabels;
- (void)mergeFrom:(id)arg1;
- (id)originalValue;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoordinate:(id)arg1;
- (void)setCorrectedValue:(id)arg1;
- (void)setFeatureHandles:(id)arg1;
- (void)setFeatureRegion:(id)arg1;
- (void)setHasLocalizedLabels:(bool)arg1;
- (void)setHasUid:(bool)arg1;
- (void)setLocalizedLabels:(bool)arg1;
- (void)setOriginalValue:(id)arg1;
- (void)setUid:(unsigned long long)arg1;
- (unsigned long long)uid;
- (void)writeTo:(id)arg1;

@end
