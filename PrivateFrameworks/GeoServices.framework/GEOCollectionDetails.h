
@interface GEOCollectionDetails : PBCodable <NSCopying> {
    NSString * _collectionCategory;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _collectionIds;
    bool  _currentlySaved;
    struct { 
        unsigned int has_targetId : 1; 
        unsigned int has_currentlySaved : 1; 
        unsigned int read_collectionIds : 1; 
        unsigned int read_collectionCategory : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    unsigned long long  _targetId;
}

@property (nonatomic, retain) NSString *collectionCategory;
@property (nonatomic, readonly) unsigned long long*collectionIds;
@property (nonatomic, readonly) unsigned long long collectionIdsCount;
@property (nonatomic) bool currentlySaved;
@property (nonatomic, readonly) bool hasCollectionCategory;
@property (nonatomic) bool hasCurrentlySaved;
@property (nonatomic) bool hasTargetId;
@property (nonatomic) unsigned long long targetId;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addCollectionId:(unsigned long long)arg1;
- (void)clearCollectionIds;
- (id)collectionCategory;
- (unsigned long long)collectionIdAtIndex:(unsigned long long)arg1;
- (unsigned long long*)collectionIds;
- (unsigned long long)collectionIdsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)currentlySaved;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCollectionCategory;
- (bool)hasCurrentlySaved;
- (bool)hasTargetId;
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
- (void)setCollectionCategory:(id)arg1;
- (void)setCollectionIds:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setCurrentlySaved:(bool)arg1;
- (void)setHasCurrentlySaved:(bool)arg1;
- (void)setHasTargetId:(bool)arg1;
- (void)setTargetId:(unsigned long long)arg1;
- (unsigned long long)targetId;
- (void)writeTo:(id)arg1;

@end
