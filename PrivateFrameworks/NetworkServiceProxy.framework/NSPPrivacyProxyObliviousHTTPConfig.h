
@interface NSPPrivacyProxyObliviousHTTPConfig : PBCodable <NSCopying> {
    NSData * _obliviousHTTPConfig;
    NSMutableArray * _obliviousTargets;
}

@property (nonatomic, retain) NSData *obliviousHTTPConfig;
@property (nonatomic, retain) NSMutableArray *obliviousTargets;

+ (Class)obliviousTargetsType;

- (void).cxx_destruct;
- (void)addObliviousTargets:(id)arg1;
- (void)clearObliviousTargets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)obliviousHTTPConfig;
- (id)obliviousTargets;
- (id)obliviousTargetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)obliviousTargetsCount;
- (bool)readFrom:(id)arg1;
- (void)setObliviousHTTPConfig:(id)arg1;
- (void)setObliviousTargets:(id)arg1;
- (void)writeTo:(id)arg1;

@end
