
@interface GEORPGroundViewFeedbackContext : PBCodable <NSCopying> {
    struct { 
        unsigned int has_imdataId : 1; 
        unsigned int has_metadataTileBuildId : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_visiblePlaceMuids : 1; 
        unsigned int read_imageId : 1; 
        unsigned int read_onscreenImageResources : 1; 
        unsigned int read_viewState : 1; 
        unsigned int read_visibleFeatureHandles : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _imageId;
    unsigned long long  _imdataId;
    unsigned int  _metadataTileBuildId;
    NSMutableArray * _onscreenImageResources;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
    GEOPDMuninViewState * _viewState;
    NSMutableArray * _visibleFeatureHandles;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _visiblePlaceMuids;
}

@property (nonatomic, readonly) bool hasImageId;
@property (nonatomic) bool hasImdataId;
@property (nonatomic) bool hasMetadataTileBuildId;
@property (nonatomic, readonly) bool hasViewState;
@property (nonatomic, retain) NSString *imageId;
@property (nonatomic) unsigned long long imdataId;
@property (nonatomic) unsigned int metadataTileBuildId;
@property (nonatomic, retain) NSMutableArray *onscreenImageResources;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) GEOPDMuninViewState *viewState;
@property (nonatomic, retain) NSMutableArray *visibleFeatureHandles;
@property (nonatomic, readonly) unsigned long long*visiblePlaceMuids;
@property (nonatomic, readonly) unsigned long long visiblePlaceMuidsCount;

+ (bool)isValid:(id)arg1;
+ (Class)onscreenImageResourceType;
+ (Class)visibleFeatureHandleType;

- (void).cxx_destruct;
- (void)addOnscreenImageResource:(id)arg1;
- (void)addVisibleFeatureHandle:(id)arg1;
- (void)addVisiblePlaceMuid:(unsigned long long)arg1;
- (void)clearOnscreenImageResources;
- (void)clearUnknownFields:(bool)arg1;
- (void)clearVisibleFeatureHandles;
- (void)clearVisiblePlaceMuids;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasImageId;
- (bool)hasImdataId;
- (bool)hasMetadataTileBuildId;
- (bool)hasViewState;
- (unsigned long long)hash;
- (id)imageId;
- (unsigned long long)imdataId;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)metadataTileBuildId;
- (id)onscreenImageResourceAtIndex:(unsigned long long)arg1;
- (id)onscreenImageResources;
- (unsigned long long)onscreenImageResourcesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasImdataId:(bool)arg1;
- (void)setHasMetadataTileBuildId:(bool)arg1;
- (void)setImageId:(id)arg1;
- (void)setImdataId:(unsigned long long)arg1;
- (void)setMetadataTileBuildId:(unsigned int)arg1;
- (void)setOnscreenImageResources:(id)arg1;
- (void)setViewState:(id)arg1;
- (void)setVisibleFeatureHandles:(id)arg1;
- (void)setVisiblePlaceMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (id)viewState;
- (id)visibleFeatureHandleAtIndex:(unsigned long long)arg1;
- (id)visibleFeatureHandles;
- (unsigned long long)visibleFeatureHandlesCount;
- (unsigned long long)visiblePlaceMuidAtIndex:(unsigned long long)arg1;
- (unsigned long long*)visiblePlaceMuids;
- (unsigned long long)visiblePlaceMuidsCount;
- (void)writeTo:(id)arg1;

@end
