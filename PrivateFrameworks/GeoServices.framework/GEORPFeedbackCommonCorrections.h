
@interface GEORPFeedbackCommonCorrections : PBCodable <NSCopying> {
    NSString * _comments;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_comments : 1; 
        unsigned int read_imageIds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _imageIds;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *comments;
@property (nonatomic, readonly) bool hasComments;
@property (nonatomic, retain) NSMutableArray *imageIds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)imageIdType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addImageId:(id)arg1;
- (void)clearImageIds;
- (void)clearUnknownFields:(bool)arg1;
- (id)comments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasComments;
- (unsigned long long)hash;
- (id)imageIdAtIndex:(unsigned long long)arg1;
- (id)imageIds;
- (unsigned long long)imageIdsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setComments:(id)arg1;
- (void)setImageIds:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
