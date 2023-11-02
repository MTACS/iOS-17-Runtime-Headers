
@interface GEORPAccessPointCorrections : PBCodable <NSCopying> {
    NSMutableArray * _addeds;
    NSMutableArray * _editeds;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_addeds : 1; 
        unsigned int read_editeds : 1; 
        unsigned int read_removeds : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _removeds;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *addeds;
@property (nonatomic, retain) NSMutableArray *editeds;
@property (nonatomic, retain) NSMutableArray *removeds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)addedType;
+ (Class)editedType;
+ (bool)isValid:(id)arg1;
+ (Class)removedType;

- (void).cxx_destruct;
- (void)addAdded:(id)arg1;
- (void)addEdited:(id)arg1;
- (void)addRemoved:(id)arg1;
- (id)addedAtIndex:(unsigned long long)arg1;
- (id)addeds;
- (unsigned long long)addedsCount;
- (void)clearAddeds;
- (void)clearEditeds;
- (void)clearRemoveds;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)editedAtIndex:(unsigned long long)arg1;
- (id)editeds;
- (unsigned long long)editedsCount;
- (bool)hasGreenTeaWithValue:(bool)arg1;
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
- (id)removedAtIndex:(unsigned long long)arg1;
- (id)removeds;
- (unsigned long long)removedsCount;
- (void)setAddeds:(id)arg1;
- (void)setEditeds:(id)arg1;
- (void)setRemoveds:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
