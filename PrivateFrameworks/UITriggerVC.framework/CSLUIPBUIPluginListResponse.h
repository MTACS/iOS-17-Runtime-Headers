
@interface CSLUIPBUIPluginListResponse : PBCodable <NSCopying> {
    NSMutableArray * _names;
    NSMutableArray * _usages;
}

@property (nonatomic, retain) NSMutableArray *names;
@property (nonatomic, retain) NSMutableArray *usages;

- (void).cxx_destruct;
- (void)addName:(id)arg1;
- (void)addUsage:(id)arg1;
- (void)clearNames;
- (void)clearUsages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nameAtIndex:(unsigned long long)arg1;
- (id)names;
- (unsigned long long)namesCount;
- (bool)readFrom:(id)arg1;
- (void)setNames:(id)arg1;
- (void)setUsages:(id)arg1;
- (id)usageAtIndex:(unsigned long long)arg1;
- (id)usages;
- (unsigned long long)usagesCount;
- (void)writeTo:(id)arg1;

@end
