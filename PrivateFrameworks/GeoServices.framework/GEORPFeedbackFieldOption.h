
@interface GEORPFeedbackFieldOption : PBCodable <NSCopying> {
    GEORPFeedbackFieldOptionAnnotations * _annotations;
    NSString * _defaultText;
    struct { 
        unsigned int has_key : 1; 
        unsigned int read_annotations : 1; 
        unsigned int read_defaultText : 1; 
        unsigned int read_localizedText : 1; 
        unsigned int read_tags : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _key;
    NSString * _localizedText;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _tags;
}

@property (nonatomic, retain) GEORPFeedbackFieldOptionAnnotations *annotations;
@property (nonatomic, retain) NSString *defaultText;
@property (nonatomic, readonly) bool hasAnnotations;
@property (nonatomic, readonly) bool hasDefaultText;
@property (nonatomic) bool hasKey;
@property (nonatomic, readonly) bool hasLocalizedText;
@property (nonatomic) int key;
@property (nonatomic, retain) NSString *localizedText;
@property (nonatomic, retain) NSMutableArray *tags;

+ (bool)isValid:(id)arg1;
+ (Class)tagType;

- (void).cxx_destruct;
- (int)StringAsKey:(id)arg1;
- (void)addTag:(id)arg1;
- (id)annotations;
- (void)clearTags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultText;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnnotations;
- (bool)hasDefaultText;
- (bool)hasKey;
- (bool)hasLocalizedText;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)key;
- (id)keyAsString:(int)arg1;
- (id)localizedText;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setDefaultText:(id)arg1;
- (void)setHasKey:(bool)arg1;
- (void)setKey:(int)arg1;
- (void)setLocalizedText:(id)arg1;
- (void)setTags:(id)arg1;
- (id)tagAtIndex:(unsigned long long)arg1;
- (id)tags;
- (unsigned long long)tagsCount;
- (void)writeTo:(id)arg1;

@end
