
@interface GEORPFeedbackSingleSelectField : PBCodable <NSCopying> {
    struct { 
        unsigned int read_options : 1; 
        unsigned int read_selected : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _options;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEORPFeedbackFieldOption * _selected;
}

@property (nonatomic, readonly) bool hasSelected;
@property (nonatomic, retain) NSMutableArray *options;
@property (nonatomic, retain) GEORPFeedbackFieldOption *selected;

+ (bool)isValid:(id)arg1;
+ (Class)optionsType;

- (void).cxx_destruct;
- (void)addOptions:(id)arg1;
- (void)clearOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSelected;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)options;
- (id)optionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)optionsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)selected;
- (void)setOptions:(id)arg1;
- (void)setSelected:(id)arg1;
- (void)writeTo:(id)arg1;

@end
