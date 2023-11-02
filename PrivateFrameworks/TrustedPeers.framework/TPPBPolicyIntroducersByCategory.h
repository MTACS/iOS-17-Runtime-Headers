
@interface TPPBPolicyIntroducersByCategory : PBCodable <NSCopying> {
    NSString * _category;
    NSMutableArray * _introducers;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, retain) NSMutableArray *introducers;

+ (id)TPPBPolicyIntroducersByCategoryWithCategory:(id)arg1 introducers:(id)arg2;
+ (Class)introducersType;

- (void).cxx_destruct;
- (void)addIntroducers:(id)arg1;
- (id)category;
- (void)clearIntroducers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (unsigned long long)hash;
- (id)introducers;
- (id)introducersAtIndex:(unsigned long long)arg1;
- (unsigned long long)introducersCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setIntroducers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
