
@interface IDSCertifiedDeliveryContext : NSObject <NSSecureCoding> {
    NSData * _certifiedDeliveryRTS;
    long long  _certifiedDeliveryVersion;
    NSDictionary * _deliveryStatusContext;
    NSNumber * _failureReason;
    NSString * _failureReasonMessage;
    bool  _generateDeliveryReceipt;
    NSString * _localURI;
    NSString * _originalGUID;
    NSData * _queryHash;
    NSString * _remoteURI;
    IDSCertifiedDeliveryReplayKey * _replayKey;
    NSData * _senderToken;
    NSString * _service;
}

@property (nonatomic, readonly) NSData *certifiedDeliveryRTS;
@property (nonatomic, readonly) long long certifiedDeliveryVersion;
@property (nonatomic, retain) NSDictionary *deliveryStatusContext;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) NSNumber *failureReason;
@property (nonatomic, retain) NSString *failureReasonMessage;
@property (nonatomic) bool generateDeliveryReceipt;
@property (nonatomic, readonly) NSString *localURI;
@property (nonatomic, readonly) NSString *originalGUID;
@property (nonatomic, readonly) NSData *queryHash;
@property (nonatomic, readonly) NSString *remoteURI;
@property (nonatomic, readonly) IDSCertifiedDeliveryReplayKey *replayKey;
@property (nonatomic, readonly) NSData *senderToken;
@property (nonatomic, readonly) NSString *service;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certifiedDeliveryRTS;
- (long long)certifiedDeliveryVersion;
- (id)dataRepresentation;
- (id)deliveryStatusContext;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)failureReason;
- (id)failureReasonMessage;
- (bool)generateDeliveryReceipt;
- (id)initWithCertifiedDeliveryContext:(id)arg1 queryHash:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5;
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 failureReason:(id)arg6 failureReasonMessage:(id)arg7;
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 failureReason:(id)arg6 failureReasonMessage:(id)arg7 replayKey:(id)arg8 generateDeliveryReceipt:(bool)arg9 deliveryStatusContext:(id)arg10 localURI:(id)arg11 remoteURI:(id)arg12 queryHash:(id)arg13;
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 localURI:(id)arg6 remoteURI:(id)arg7;
- (id)initWithGUID:(id)arg1 service:(id)arg2 certifiedDeliveryVersion:(long long)arg3 certifiedDeliveryRTS:(id)arg4 senderToken:(id)arg5 localURI:(id)arg6 remoteURI:(id)arg7 replayKey:(id)arg8;
- (id)localURI;
- (id)originalGUID;
- (id)queryHash;
- (id)remoteURI;
- (id)replayKey;
- (id)senderToken;
- (id)service;
- (void)setDeliveryStatusContext:(id)arg1;
- (void)setFailureReason:(id)arg1;
- (void)setFailureReasonMessage:(id)arg1;
- (void)setGenerateDeliveryReceipt:(bool)arg1;

@end
