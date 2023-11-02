
@interface GEOPDStorefrontFace : PBCodable <NSCopying> {
    NSMutableArray * _features;
    struct { 
        unsigned int has_groupId : 1; 
        unsigned int read_features : 1; 
        unsigned int read_geometry : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDOrientedBoundingBox * _geometry;
    unsigned long long  _groupId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSMutableArray *features;
@property (nonatomic, retain) GEOPDOrientedBoundingBox *geometry;
@property (nonatomic) unsigned long long groupId;
@property (nonatomic, readonly) bool hasGeometry;
@property (nonatomic) bool hasGroupId;

+ (Class)featureType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addFeature:(id)arg1;
- (void)clearFeatures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)featureAtIndex:(unsigned long long)arg1;
- (id)features;
- (unsigned long long)featuresCount;
- (id)geometry;
- (unsigned long long)groupId;
- (bool)hasGeometry;
- (bool)hasGroupId;
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
- (void)setFeatures:(id)arg1;
- (void)setGeometry:(id)arg1;
- (void)setGroupId:(unsigned long long)arg1;
- (void)setHasGroupId:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
