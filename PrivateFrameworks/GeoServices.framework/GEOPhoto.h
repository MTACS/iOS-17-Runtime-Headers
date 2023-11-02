
@interface GEOPhoto : PBCodable <NSCopying> {
    struct { 
        unsigned int has_photoType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_photoInfos : 1; 
        unsigned int read_uid : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _photoInfos;
    int  _photoType;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _uid;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasPhotoType;
@property (nonatomic, readonly) bool hasUid;
@property (nonatomic, retain) NSMutableArray *photoInfos;
@property (nonatomic) int photoType;
@property (nonatomic, retain) NSString *uid;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)photoInfoType;

- (void).cxx_destruct;
- (int)StringAsPhotoType:(id)arg1;
- (void)addPhotoInfo:(id)arg1;
- (void)clearPhotoInfos;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPhotoType;
- (bool)hasUid;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (id)initWithPlaceDataPhoto:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)photoInfoAtIndex:(unsigned long long)arg1;
- (id)photoInfos;
- (unsigned long long)photoInfosCount;
- (int)photoType;
- (id)photoTypeAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPhotoType:(bool)arg1;
- (void)setPhotoInfos:(id)arg1;
- (void)setPhotoType:(int)arg1;
- (void)setUid:(id)arg1;
- (id)uid;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
