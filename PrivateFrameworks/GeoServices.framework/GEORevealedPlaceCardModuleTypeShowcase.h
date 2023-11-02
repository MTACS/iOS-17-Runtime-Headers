
@interface GEORevealedPlaceCardModuleTypeShowcase : PBCodable <NSCopying> {
    NSMutableArray * _buttons;
    struct { 
        unsigned int read_buttons : 1; 
        unsigned int read_showcaseId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSString * _showcaseId;
}

@property (nonatomic, retain) NSMutableArray *buttons;
@property (nonatomic, readonly) bool hasShowcaseId;
@property (nonatomic, retain) NSString *showcaseId;

+ (Class)buttonsType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addButtons:(id)arg1;
- (id)buttons;
- (id)buttonsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buttonsCount;
- (void)clearButtons;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShowcaseId;
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
- (void)setButtons:(id)arg1;
- (void)setShowcaseId:(id)arg1;
- (id)showcaseId;
- (void)writeTo:(id)arg1;

@end
