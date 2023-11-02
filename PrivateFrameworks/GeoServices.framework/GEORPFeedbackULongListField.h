
@interface GEORPFeedbackULongListField : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _addeds;
    struct { 
        unsigned int read_addeds : 1; 
        unsigned int read_originals : 1; 
        unsigned int read_removeds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _originals;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _removeds;
}

@property (nonatomic, readonly) unsigned long long*addeds;
@property (nonatomic, readonly) unsigned long long addedsCount;
@property (nonatomic, readonly) unsigned long long*originals;
@property (nonatomic, readonly) unsigned long long originalsCount;
@property (nonatomic, readonly) unsigned long long*removeds;
@property (nonatomic, readonly) unsigned long long removedsCount;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAdded:(unsigned long long)arg1;
- (void)addOriginal:(unsigned long long)arg1;
- (void)addRemoved:(unsigned long long)arg1;
- (unsigned long long)addedAtIndex:(unsigned long long)arg1;
- (unsigned long long*)addeds;
- (unsigned long long)addedsCount;
- (void)clearAddeds;
- (void)clearOriginals;
- (void)clearRemoveds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
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
- (unsigned long long)originalAtIndex:(unsigned long long)arg1;
- (unsigned long long*)originals;
- (unsigned long long)originalsCount;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)removedAtIndex:(unsigned long long)arg1;
- (unsigned long long*)removeds;
- (unsigned long long)removedsCount;
- (void)setAddeds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setOriginals:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setRemoveds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
