
@interface NPKProtoBarcodeApplicationRedirectRequest : PBRequest <NSCopying> {
    NSString * _appLaunchToken;
    NSData * _passData;
    NSData * _transactionData;
}

@property (nonatomic, retain) NSString *appLaunchToken;
@property (nonatomic, readonly) bool hasAppLaunchToken;
@property (nonatomic, readonly) bool hasPassData;
@property (nonatomic, readonly) bool hasTransactionData;
@property (nonatomic, retain) NSData *passData;
@property (nonatomic, retain) NSData *transactionData;

- (void).cxx_destruct;
- (id)appLaunchToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppLaunchToken;
- (bool)hasPassData;
- (bool)hasTransactionData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passData;
- (bool)readFrom:(id)arg1;
- (void)setAppLaunchToken:(id)arg1;
- (void)setPassData:(id)arg1;
- (void)setTransactionData:(id)arg1;
- (id)transactionData;
- (void)writeTo:(id)arg1;

@end
