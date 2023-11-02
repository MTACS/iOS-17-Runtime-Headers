
@interface TRITrialFactorFields : PBCodable <NSCopying> {
    NSString * _clientFactorPackId;
    NSString * _namespaceName;
}

@property (nonatomic, retain) NSString *clientFactorPackId;
@property (nonatomic, readonly) bool hasClientFactorPackId;
@property (nonatomic, readonly) bool hasNamespaceName;
@property (nonatomic, retain) NSString *namespaceName;

- (void).cxx_destruct;
- (id)clientFactorPackId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientFactorPackId;
- (bool)hasNamespaceName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namespaceName;
- (bool)readFrom:(id)arg1;
- (void)setClientFactorPackId:(id)arg1;
- (void)setNamespaceName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
