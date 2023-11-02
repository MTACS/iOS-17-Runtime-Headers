
@interface GEORPFeedbackMultiSelectField : PBCodable <NSCopying> {
    struct { 
        unsigned int read_options : 1; 
        unsigned int read_selecteds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _options;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _selecteds;
}

@property (nonatomic, retain) NSMutableArray *options;
@property (nonatomic, retain) NSMutableArray *selecteds;

+ (bool)isValid:(id)arg1;
+ (Class)optionsType;
+ (Class)selectedType;

- (void).cxx_destruct;
- (void)addOptions:(id)arg1;
- (void)addSelected:(id)arg1;
- (void)clearOptions;
- (void)clearSelecteds;
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
- (void)mergeFrom:(id)arg1;
- (id)options;
- (id)optionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)optionsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)selectedAtIndex:(unsigned long long)arg1;
- (id)selecteds;
- (unsigned long long)selectedsCount;
- (void)setOptions:(id)arg1;
- (void)setSelecteds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
