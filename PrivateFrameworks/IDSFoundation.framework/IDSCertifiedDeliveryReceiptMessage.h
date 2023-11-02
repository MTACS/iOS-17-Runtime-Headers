
@interface IDSCertifiedDeliveryReceiptMessage : IDSMessage {
    NSData * _certifiedDeliveryRTS;
    long long  _certifiedDeliveryVersion;
    NSData * _encryptedData;
    NSNumber * _failureReason;
    NSString * _failureReasonMessage;
    bool  _generateDeliveryReceipt;
    NSDictionary * _generatedDeliveryStatusContext;
    NSString * _localURI;
    NSString * _originalGUID;
    NSData * _queryHash;
    NSString * _remoteURI;
    NSData * _senderToken;
}

@property (nonatomic, retain) NSData *certifiedDeliveryRTS;
@property (nonatomic) long long certifiedDeliveryVersion;
@property (nonatomic, retain) NSData *encryptedData;
@property (nonatomic, retain) NSNumber *failureReason;
@property (nonatomic, retain) NSString *failureReasonMessage;
@property (nonatomic) bool generateDeliveryReceipt;
@property (nonatomic, retain) NSDictionary *generatedDeliveryStatusContext;
@property (nonatomic, retain) NSString *localURI;
@property (nonatomic, retain) NSString *originalGUID;
@property (nonatomic, retain) NSData *queryHash;
@property (nonatomic, retain) NSString *remoteURI;
@property (nonatomic, retain) NSData *senderToken;

- (void).cxx_destruct;
- (id)certifiedDeliveryRTS;
- (long long)certifiedDeliveryVersion;
- (long long)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encryptedData;
- (id)failureReason;
- (id)failureReasonMessage;
- (bool)generateDeliveryReceipt;
- (id)generatedDeliveryStatusContext;
- (id)initWithCertifiedDeliveryContext:(id)arg1;
- (id)localURI;
- (id)messageBody;
- (id)originalGUID;
- (id)queryHash;
- (id)remoteURI;
- (id)requiredKeys;
- (long long)responseCommand;
- (id)senderToken;
- (void)setCertifiedDeliveryRTS:(id)arg1;
- (void)setCertifiedDeliveryVersion:(long long)arg1;
- (void)setEncryptedData:(id)arg1;
- (void)setFailureReason:(id)arg1;
- (void)setFailureReasonMessage:(id)arg1;
- (void)setGenerateDeliveryReceipt:(bool)arg1;
- (void)setGeneratedDeliveryStatusContext:(id)arg1;
- (void)setLocalURI:(id)arg1;
- (void)setOriginalGUID:(id)arg1;
- (void)setQueryHash:(id)arg1;
- (void)setRemoteURI:(id)arg1;
- (void)setSenderToken:(id)arg1;
- (bool)wantsResponse;

@end
