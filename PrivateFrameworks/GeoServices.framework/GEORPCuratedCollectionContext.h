
@interface GEORPCuratedCollectionContext : PBCodable <NSCopying> {
    unsigned long long  _curatedCollectionMuid;
    struct { 
        unsigned int has_curatedCollectionMuid : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_placeEntityMuids : 1; 
        unsigned int read_imageInfos : 1; 
        unsigned int read_originalDescription : 1; 
        unsigned int read_originalName : 1; 
        unsigned int read_originalUrl : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _imageInfos;
    NSString * _originalDescription;
    NSString * _originalName;
    NSString * _originalUrl;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _placeEntityMuids;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned long long curatedCollectionMuid;
@property (nonatomic) bool hasCuratedCollectionMuid;
@property (nonatomic, readonly) bool hasOriginalDescription;
@property (nonatomic, readonly) bool hasOriginalName;
@property (nonatomic, readonly) bool hasOriginalUrl;
@property (nonatomic, retain) NSMutableArray *imageInfos;
@property (nonatomic, retain) NSString *originalDescription;
@property (nonatomic, retain) NSString *originalName;
@property (nonatomic, retain) NSString *originalUrl;
@property (nonatomic, readonly) unsigned long long*placeEntityMuids;
@property (nonatomic, readonly) unsigned long long placeEntityMuidsCount;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)imageInfoType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addImageInfo:(id)arg1;
- (void)addPlaceEntityMuid:(unsigned long long)arg1;
- (void)clearImageInfos;
- (void)clearPlaceEntityMuids;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)curatedCollectionMuid;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCuratedCollectionMuid;
- (bool)hasOriginalDescription;
- (bool)hasOriginalName;
- (bool)hasOriginalUrl;
- (unsigned long long)hash;
- (id)imageInfoAtIndex:(unsigned long long)arg1;
- (id)imageInfos;
- (unsigned long long)imageInfosCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)originalDescription;
- (id)originalName;
- (id)originalUrl;
- (unsigned long long)placeEntityMuidAtIndex:(unsigned long long)arg1;
- (unsigned long long*)placeEntityMuids;
- (unsigned long long)placeEntityMuidsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCuratedCollectionMuid:(unsigned long long)arg1;
- (void)setHasCuratedCollectionMuid:(bool)arg1;
- (void)setImageInfos:(id)arg1;
- (void)setOriginalDescription:(id)arg1;
- (void)setOriginalName:(id)arg1;
- (void)setOriginalUrl:(id)arg1;
- (void)setPlaceEntityMuids:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
