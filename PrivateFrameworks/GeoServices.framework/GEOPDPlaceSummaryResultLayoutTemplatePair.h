
@interface GEOPDPlaceSummaryResultLayoutTemplatePair : PBCodable <NSCopying> {
    struct { 
        unsigned int read_placeTypes : 1; 
        unsigned int read_layoutTemplate : 1; 
        unsigned int read_mapsIds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEOPDPlaceSummaryLayoutTemplate * _layoutTemplate;
    NSMutableArray * _mapsIds;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _placeTypes;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, readonly) NSArray *geoMapItemPlaceTypes;
@property (nonatomic, readonly) bool hasLayoutTemplate;
@property (nonatomic, retain) GEOPDPlaceSummaryLayoutTemplate *layoutTemplate;
@property (nonatomic, readonly) NSArray *mapItemIdentifiers;
@property (nonatomic, retain) NSMutableArray *mapsIds;
@property (nonatomic, readonly) int*placeTypes;
@property (nonatomic, readonly) unsigned long long placeTypesCount;

+ (bool)isValid:(id)arg1;
+ (Class)mapsIdType;

- (void).cxx_destruct;
- (int)StringAsPlaceTypes:(id)arg1;
- (void)addMapsId:(id)arg1;
- (void)addPlaceType:(int)arg1;
- (void)clearMapsIds;
- (void)clearPlaceTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geoMapItemPlaceTypes;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasLayoutTemplate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)layoutTemplate;
- (id)mapItemIdentifiers;
- (id)mapsIdAtIndex:(unsigned long long)arg1;
- (id)mapsIds;
- (unsigned long long)mapsIdsCount;
- (void)mergeFrom:(id)arg1;
- (int)placeTypeAtIndex:(unsigned long long)arg1;
- (int*)placeTypes;
- (id)placeTypesAsString:(int)arg1;
- (unsigned long long)placeTypesCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLayoutTemplate:(id)arg1;
- (void)setMapsIds:(id)arg1;
- (void)setPlaceTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
