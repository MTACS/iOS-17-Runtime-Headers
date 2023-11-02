
@interface GEOLogMsgEventTableBookedSession : PBCodable <NSCopying> {
    NSString * _bookedTableSessionId;
    NSMutableArray * _bookedTables;
    struct { 
        unsigned int read_bookedTableSessionId : 1; 
        unsigned int read_bookedTables : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic, retain) NSString *bookedTableSessionId;
@property (nonatomic, retain) NSMutableArray *bookedTables;
@property (nonatomic, readonly) bool hasBookedTableSessionId;

+ (Class)bookedTableType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addBookedTable:(id)arg1;
- (id)bookedTableAtIndex:(unsigned long long)arg1;
- (id)bookedTableSessionId;
- (id)bookedTables;
- (unsigned long long)bookedTablesCount;
- (void)clearBookedTables;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBookedTableSessionId;
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
- (void)setBookedTableSessionId:(id)arg1;
- (void)setBookedTables:(id)arg1;
- (void)writeTo:(id)arg1;

@end
