
@interface GEORPCategoryRating : PBCodable <NSCopying> {
    struct { 
        unsigned int read_key : 1; 
        unsigned int read_value : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _key;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPRatingValue * _value;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) GEORPRatingValue *value;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
