
@interface GEOPDPlaceSummaryLayoutMetadata : PBCodable <NSCopying> {
    NSMutableArray * _dyanmicContextServerOverrides;
    struct { 
        unsigned int has_useCaseType : 1; 
        unsigned int read_dyanmicContextServerOverrides : 1; 
        unsigned int read_layoutTemplatePairs : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _layoutTemplatePairs;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _useCaseType;
}

@property (nonatomic, retain) NSMutableArray *dyanmicContextServerOverrides;
@property (nonatomic) bool hasUseCaseType;
@property (nonatomic, retain) NSMutableArray *layoutTemplatePairs;
@property (nonatomic) int useCaseType;

+ (Class)dyanmicContextServerOverrideType;
+ (bool)isValid:(id)arg1;
+ (Class)layoutTemplatePairType;

- (void).cxx_destruct;
- (int)StringAsUseCaseType:(id)arg1;
- (void)addDyanmicContextServerOverride:(id)arg1;
- (void)addLayoutTemplatePair:(id)arg1;
- (void)clearDyanmicContextServerOverrides;
- (void)clearLayoutTemplatePairs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dyanmicContextServerOverrideAtIndex:(unsigned long long)arg1;
- (id)dyanmicContextServerOverrides;
- (unsigned long long)dyanmicContextServerOverridesCount;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasUseCaseType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)layoutTemplatePairAtIndex:(unsigned long long)arg1;
- (id)layoutTemplatePairs;
- (unsigned long long)layoutTemplatePairsCount;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDyanmicContextServerOverrides:(id)arg1;
- (void)setHasUseCaseType:(bool)arg1;
- (void)setLayoutTemplatePairs:(id)arg1;
- (void)setUseCaseType:(int)arg1;
- (int)useCaseType;
- (id)useCaseTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
