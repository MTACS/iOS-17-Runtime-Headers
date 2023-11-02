
@interface TRITrialOnDemandFactorFields : PBCodable <NSCopying> {
    NSString * _factorName;
    NSString * _namespaceName;
}

@property (nonatomic, retain) NSString *factorName;
@property (nonatomic, readonly) bool hasFactorName;
@property (nonatomic, readonly) bool hasNamespaceName;
@property (nonatomic, retain) NSString *namespaceName;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)factorName;
- (bool)hasFactorName;
- (bool)hasNamespaceName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namespaceName;
- (bool)readFrom:(id)arg1;
- (void)setFactorName:(id)arg1;
- (void)setNamespaceName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
