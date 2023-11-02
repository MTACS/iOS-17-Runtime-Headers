
@interface GEONonTiledAssets : PBCodable <NSCopying> {
    struct { 
        unsigned int read_materialMaps : 1; 
        unsigned int read_materials : 1; 
        unsigned int read_models : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _materialMaps;
    NSMutableArray * _materials;
    NSMutableArray * _models;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSMutableArray *materialMaps;
@property (nonatomic, retain) NSMutableArray *materials;
@property (nonatomic, retain) NSMutableArray *models;

+ (bool)isValid:(id)arg1;
+ (Class)materialMapType;
+ (Class)materialType;
+ (Class)modelType;

- (void).cxx_destruct;
- (void)addMaterial:(id)arg1;
- (void)addMaterialMap:(id)arg1;
- (void)addModel:(id)arg1;
- (void)clearMaterialMaps;
- (void)clearMaterials;
- (void)clearModels;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)materialAtIndex:(unsigned long long)arg1;
- (id)materialMapAtIndex:(unsigned long long)arg1;
- (id)materialMaps;
- (unsigned long long)materialMapsCount;
- (id)materials;
- (unsigned long long)materialsCount;
- (void)mergeFrom:(id)arg1;
- (id)modelAtIndex:(unsigned long long)arg1;
- (id)models;
- (unsigned long long)modelsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMaterialMaps:(id)arg1;
- (void)setMaterials:(id)arg1;
- (void)setModels:(id)arg1;
- (void)writeTo:(id)arg1;

@end
