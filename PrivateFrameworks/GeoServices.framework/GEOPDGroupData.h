
@interface GEOPDGroupData : PBCodable <NSCopying> {
    NSMutableArray * _buttonItems;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_buttonItems : 1; 
        unsigned int read_symbolImageName : 1; 
        unsigned int read_titles : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _symbolImageName;
    NSMutableArray * _titles;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *buttonItems;
@property (nonatomic, readonly) bool hasSymbolImageName;
@property (nonatomic, retain) NSString *symbolImageName;
@property (nonatomic, retain) NSMutableArray *titles;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)buttonItemType;
+ (bool)isValid:(id)arg1;
+ (Class)titleType;

- (void).cxx_destruct;
- (void)addButtonItem:(id)arg1;
- (void)addTitle:(id)arg1;
- (id)buttonItemAtIndex:(unsigned long long)arg1;
- (id)buttonItems;
- (unsigned long long)buttonItemsCount;
- (void)clearButtonItems;
- (void)clearTitles;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSymbolImageName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setButtonItems:(id)arg1;
- (void)setSymbolImageName:(id)arg1;
- (void)setTitles:(id)arg1;
- (id)symbolImageName;
- (id)titleAtIndex:(unsigned long long)arg1;
- (id)titles;
- (unsigned long long)titlesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
