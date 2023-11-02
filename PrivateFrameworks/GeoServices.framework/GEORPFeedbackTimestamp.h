
@interface GEORPFeedbackTimestamp : PBCodable <NSCopying> {
    GEORPTimestamp * _edited;
    struct { 
        unsigned int read_edited : 1; 
        unsigned int read_original : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPTimestamp * _original;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEORPTimestamp *edited;
@property (nonatomic, readonly) bool hasEdited;
@property (nonatomic, readonly) bool hasOriginal;
@property (nonatomic, retain) GEORPTimestamp *original;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)edited;
- (bool)hasEdited;
- (bool)hasOriginal;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)original;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEdited:(id)arg1;
- (void)setOriginal:(id)arg1;
- (void)writeTo:(id)arg1;

@end
