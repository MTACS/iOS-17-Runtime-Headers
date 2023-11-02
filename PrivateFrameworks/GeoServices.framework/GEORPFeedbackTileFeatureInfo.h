
@interface GEORPFeedbackTileFeatureInfo : PBCodable <NSCopying> {
    NSMutableArray * _featureHandles;
    NSString * _featureName;
    struct { 
        unsigned int read_featureHandles : 1; 
        unsigned int read_featureName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSMutableArray *featureHandles;
@property (nonatomic, retain) NSString *featureName;
@property (nonatomic, readonly) bool hasFeatureName;

+ (Class)featureHandleType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addFeatureHandle:(id)arg1;
- (void)clearFeatureHandles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureHandleAtIndex:(unsigned long long)arg1;
- (id)featureHandles;
- (unsigned long long)featureHandlesCount;
- (id)featureName;
- (bool)hasFeatureName;
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
- (void)setFeatureHandles:(id)arg1;
- (void)setFeatureName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
