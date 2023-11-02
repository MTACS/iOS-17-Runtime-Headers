
@interface GEOLogMsgStateElementImpression : PBCodable <NSCopying> {
    GEOElementDetails * _element;
    int  _elementSource;
    struct { 
        unsigned int has_impressNonvisibleTsInMs : 1; 
        unsigned int has_impressVisibleTsInMs : 1; 
        unsigned int has_elementSource : 1; 
        unsigned int has_impressEvent : 1; 
        unsigned int read_element : 1; 
        unsigned int read_impressionObjectId : 1; 
        unsigned int read_query : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _impressEvent;
    unsigned long long  _impressNonvisibleTsInMs;
    unsigned long long  _impressVisibleTsInMs;
    GEOImpressionObjectId * _impressionObjectId;
    NSString * _query;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) GEOElementDetails *element;
@property (nonatomic) int elementSource;
@property (nonatomic, readonly) bool hasElement;
@property (nonatomic) bool hasElementSource;
@property (nonatomic) bool hasImpressEvent;
@property (nonatomic) bool hasImpressNonvisibleTsInMs;
@property (nonatomic) bool hasImpressVisibleTsInMs;
@property (nonatomic, readonly) bool hasImpressionObjectId;
@property (nonatomic, readonly) bool hasQuery;
@property (nonatomic) int impressEvent;
@property (nonatomic) unsigned long long impressNonvisibleTsInMs;
@property (nonatomic) unsigned long long impressVisibleTsInMs;
@property (nonatomic, retain) GEOImpressionObjectId *impressionObjectId;
@property (nonatomic, retain) NSString *query;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsElementSource:(id)arg1;
- (int)StringAsImpressEvent:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)element;
- (int)elementSource;
- (id)elementSourceAsString:(int)arg1;
- (bool)hasElement;
- (bool)hasElementSource;
- (bool)hasImpressEvent;
- (bool)hasImpressNonvisibleTsInMs;
- (bool)hasImpressVisibleTsInMs;
- (bool)hasImpressionObjectId;
- (bool)hasQuery;
- (unsigned long long)hash;
- (int)impressEvent;
- (id)impressEventAsString:(int)arg1;
- (unsigned long long)impressNonvisibleTsInMs;
- (unsigned long long)impressVisibleTsInMs;
- (id)impressionObjectId;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)query;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setElement:(id)arg1;
- (void)setElementSource:(int)arg1;
- (void)setHasElementSource:(bool)arg1;
- (void)setHasImpressEvent:(bool)arg1;
- (void)setHasImpressNonvisibleTsInMs:(bool)arg1;
- (void)setHasImpressVisibleTsInMs:(bool)arg1;
- (void)setImpressEvent:(int)arg1;
- (void)setImpressNonvisibleTsInMs:(unsigned long long)arg1;
- (void)setImpressVisibleTsInMs:(unsigned long long)arg1;
- (void)setImpressionObjectId:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)writeTo:(id)arg1;

@end
