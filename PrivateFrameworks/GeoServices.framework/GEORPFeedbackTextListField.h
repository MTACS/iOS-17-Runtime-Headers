
@interface GEORPFeedbackTextListField : PBCodable <NSCopying> {
    NSMutableArray * _addeds;
    struct { 
        unsigned int read_addeds : 1; 
        unsigned int read_originals : 1; 
        unsigned int read_removeds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _originals;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _removeds;
}

@property (nonatomic, retain) NSMutableArray *addeds;
@property (nonatomic, retain) NSMutableArray *originals;
@property (nonatomic, retain) NSMutableArray *removeds;

+ (Class)addedType;
+ (bool)isValid:(id)arg1;
+ (Class)originalType;
+ (Class)removedType;

- (void).cxx_destruct;
- (void)addAdded:(id)arg1;
- (void)addOriginal:(id)arg1;
- (void)addRemoved:(id)arg1;
- (id)addedAtIndex:(unsigned long long)arg1;
- (id)addeds;
- (unsigned long long)addedsCount;
- (void)clearAddeds;
- (void)clearOriginals;
- (void)clearRemoveds;
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
- (id)originalAtIndex:(unsigned long long)arg1;
- (id)originals;
- (unsigned long long)originalsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)removedAtIndex:(unsigned long long)arg1;
- (id)removeds;
- (unsigned long long)removedsCount;
- (void)setAddeds:(id)arg1;
- (void)setOriginals:(id)arg1;
- (void)setRemoveds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
