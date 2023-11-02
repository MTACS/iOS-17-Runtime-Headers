
@interface PPPBContactNameRecordCache : PBCodable <NSCopying> {
    long long  _createdAt;
    struct { 
        unsigned int createdAt : 1; 
    }  _has;
    NSMutableArray * _records;
}

@property (nonatomic) long long createdAt;
@property (nonatomic) bool hasCreatedAt;
@property (nonatomic, retain) NSMutableArray *records;

+ (Class)recordsType;

- (void).cxx_destruct;
- (void)addRecords:(id)arg1;
- (void)clearRecords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)createdAt;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCreatedAt;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)records;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)setCreatedAt:(long long)arg1;
- (void)setHasCreatedAt:(bool)arg1;
- (void)setRecords:(id)arg1;
- (void)writeTo:(id)arg1;

@end
