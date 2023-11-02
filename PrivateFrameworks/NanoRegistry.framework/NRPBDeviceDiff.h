
@interface NRPBDeviceDiff : PBCodable <NSCopying> {
    NSMutableArray * _diffs;
    NSMutableArray * _names;
}

@property (nonatomic, retain) NSMutableArray *diffs;
@property (nonatomic, retain) NSMutableArray *names;

+ (Class)diffsType;
+ (Class)namesType;

- (void).cxx_destruct;
- (void)addDiffs:(id)arg1;
- (void)addNames:(id)arg1;
- (void)clearDiffs;
- (void)clearNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)diffs;
- (id)diffsAtIndex:(unsigned long long)arg1;
- (unsigned long long)diffsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)names;
- (id)namesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namesCount;
- (bool)readFrom:(id)arg1;
- (void)setDiffs:(id)arg1;
- (void)setNames:(id)arg1;
- (void)writeTo:(id)arg1;

@end
