
@interface NPKProtoHandleRemoveTransactionsRequest : PBRequest <NSCopying> {
    NSMutableArray * _identifiers;
    NSMutableArray * _passIDs;
}

@property (nonatomic, retain) NSMutableArray *identifiers;
@property (nonatomic, retain) NSMutableArray *passIDs;

+ (Class)identifiersType;
+ (Class)passIDsType;

- (void).cxx_destruct;
- (void)addIdentifiers:(id)arg1;
- (void)addPassIDs:(id)arg1;
- (void)clearIdentifiers;
- (void)clearPassIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifiers;
- (id)identifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)identifiersCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passIDs;
- (id)passIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)passIDsCount;
- (bool)readFrom:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setPassIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
