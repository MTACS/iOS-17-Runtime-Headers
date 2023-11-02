
@interface GEOLPRVehicleType : PBCodable <NSCopying> {
    struct { 
        unsigned int read_key : 1; 
        unsigned int read_subtitles : 1; 
        unsigned int read_titles : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _key;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _subtitles;
    NSMutableArray * _titles;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSMutableArray *subtitles;
@property (nonatomic, retain) NSMutableArray *titles;

+ (bool)isValid:(id)arg1;
+ (Class)subtitleType;
+ (Class)titleType;

- (void).cxx_destruct;
- (void)addSubtitle:(id)arg1;
- (void)addTitle:(id)arg1;
- (void)clearSubtitles;
- (void)clearTitles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
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
- (void)setSubtitles:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)subtitleAtIndex:(unsigned long long)arg1;
- (id)subtitles;
- (unsigned long long)subtitlesCount;
- (id)titleAtIndex:(unsigned long long)arg1;
- (id)titles;
- (unsigned long long)titlesCount;
- (void)writeTo:(id)arg1;

@end
