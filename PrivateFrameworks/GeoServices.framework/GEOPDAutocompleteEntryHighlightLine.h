
@interface GEOPDAutocompleteEntryHighlightLine : PBCodable <NSCopying> {
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_line : 1; 
        unsigned int read_spans : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _line;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _spans;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasLine;
@property (nonatomic, retain) NSString *line;
@property (nonatomic, retain) NSMutableArray *spans;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)spanType;

- (void).cxx_destruct;
- (void)addSpan:(id)arg1;
- (void)clearSpans;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLine;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)line;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLine:(id)arg1;
- (void)setSpans:(id)arg1;
- (id)spanAtIndex:(unsigned long long)arg1;
- (id)spans;
- (unsigned long long)spansCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
