
@interface ADKeyedParameterList : PBCodable <NSCopying> {
    NSString * _key;
    NSMutableArray * _parameterLists;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSMutableArray *parameterLists;

+ (id)options;
+ (Class)parameterListType;

- (void).cxx_destruct;
- (void)addParameterList:(id)arg1;
- (void)clearParameterLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (id)parameterListAtIndex:(unsigned long long)arg1;
- (id)parameterLists;
- (unsigned long long)parameterListsCount;
- (bool)readFrom:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setParameterLists:(id)arg1;
- (void)writeTo:(id)arg1;

@end
