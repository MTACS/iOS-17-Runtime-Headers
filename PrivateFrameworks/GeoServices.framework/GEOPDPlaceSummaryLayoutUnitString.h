
@interface GEOPDPlaceSummaryLayoutUnitString : PBCodable <NSCopying> {
    struct { 
        unsigned int has_serverOverrideIdentifier : 1; 
        unsigned int has_supportMultiLineWrapping : 1; 
        unsigned int read_formats : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int read_symbolColor : 1; 
        unsigned int read_symbolName : 1; 
        unsigned int read_textColor : 1; 
        unsigned int read_value : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _formats;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned int  _serverOverrideIdentifier;
    NSMutableArray * _styleAttributes;
    bool  _supportMultiLineWrapping;
    NSString * _symbolColor;
    NSString * _symbolName;
    NSString * _textColor;
    NSString * _value;
}

@property (nonatomic, retain) NSMutableArray *formats;
@property (nonatomic) bool hasServerOverrideIdentifier;
@property (nonatomic) bool hasSupportMultiLineWrapping;
@property (nonatomic, readonly) bool hasSymbolColor;
@property (nonatomic, readonly) bool hasSymbolName;
@property (nonatomic, readonly) bool hasTextColor;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic) unsigned int serverOverrideIdentifier;
@property (nonatomic, retain) NSMutableArray *styleAttributes;
@property (nonatomic) bool supportMultiLineWrapping;
@property (nonatomic, retain) NSString *symbolColor;
@property (nonatomic, retain) NSString *symbolName;
@property (nonatomic, retain) NSString *textColor;
@property (nonatomic, retain) NSString *value;

+ (Class)formatType;
+ (bool)isValid:(id)arg1;
+ (Class)styleAttributesType;

- (void).cxx_destruct;
- (void)addFormat:(id)arg1;
- (void)addStyleAttributes:(id)arg1;
- (void)clearFormats;
- (void)clearStyleAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formatAtIndex:(unsigned long long)arg1;
- (id)formats;
- (unsigned long long)formatsCount;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasServerOverrideIdentifier;
- (bool)hasSupportMultiLineWrapping;
- (bool)hasSymbolColor;
- (bool)hasSymbolName;
- (bool)hasTextColor;
- (bool)hasValue;
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
- (unsigned int)serverOverrideIdentifier;
- (void)setFormats:(id)arg1;
- (void)setHasServerOverrideIdentifier:(bool)arg1;
- (void)setHasSupportMultiLineWrapping:(bool)arg1;
- (void)setServerOverrideIdentifier:(unsigned int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setSupportMultiLineWrapping:(bool)arg1;
- (void)setSymbolColor:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setValue:(id)arg1;
- (id)styleAttributes;
- (id)styleAttributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleAttributesCount;
- (bool)supportMultiLineWrapping;
- (id)symbolColor;
- (id)symbolName;
- (id)textColor;
- (id)value;
- (void)writeTo:(id)arg1;

@end
