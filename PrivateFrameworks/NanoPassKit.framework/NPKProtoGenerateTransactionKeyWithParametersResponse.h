
@interface NPKProtoGenerateTransactionKeyWithParametersResponse : PBCodable <NSCopying> {
    NSData * _appletIdentifier;
    NSData * _errorData;
    NSMutableArray * _transactionKeyCertChains;
    NSString * _transactionKeyIdentifier;
}

@property (nonatomic, retain) NSData *appletIdentifier;
@property (nonatomic, retain) NSData *errorData;
@property (nonatomic, readonly) bool hasAppletIdentifier;
@property (nonatomic, readonly) bool hasErrorData;
@property (nonatomic, readonly) bool hasTransactionKeyIdentifier;
@property (nonatomic, retain) NSMutableArray *transactionKeyCertChains;
@property (nonatomic, retain) NSString *transactionKeyIdentifier;

+ (Class)transactionKeyCertChainType;

- (void).cxx_destruct;
- (void)addTransactionKeyCertChain:(id)arg1;
- (id)appletIdentifier;
- (void)clearTransactionKeyCertChains;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)errorData;
- (bool)hasAppletIdentifier;
- (bool)hasErrorData;
- (bool)hasTransactionKeyIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppletIdentifier:(id)arg1;
- (void)setErrorData:(id)arg1;
- (void)setTransactionKeyCertChains:(id)arg1;
- (void)setTransactionKeyIdentifier:(id)arg1;
- (id)transactionKeyCertChainAtIndex:(unsigned long long)arg1;
- (id)transactionKeyCertChains;
- (unsigned long long)transactionKeyCertChainsCount;
- (id)transactionKeyIdentifier;
- (void)writeTo:(id)arg1;

@end
