
@interface CRKIDSSendMessageOperation : CATOperation {
    <CRKIDSLocalPrimitives> * _IDSLocalPrimitives;
    NSString * _destinationAddress;
    NSDate * _initialSendDate;
    NSDictionary * _message;
    NSString * _messageSendIdentifier;
    <CRKCancelable><CRKResumable> * _messageSendSubscription;
    CRKIDSMessageOptions * _options;
    NSString * _sourceAppleID;
}

@property (nonatomic, readonly) <CRKIDSLocalPrimitives> *IDSLocalPrimitives;
@property (nonatomic, readonly, copy) NSString *destinationAddress;
@property (nonatomic, retain) NSDate *initialSendDate;
@property (nonatomic, readonly, copy) NSDictionary *message;
@property (nonatomic, copy) NSString *messageSendIdentifier;
@property (nonatomic, retain) <CRKCancelable><CRKResumable> *messageSendSubscription;
@property (nonatomic, readonly) CRKIDSMessageOptions *options;
@property (nonatomic, readonly, copy) NSString *sourceAppleID;

- (void).cxx_destruct;
- (id)IDSLocalPrimitives;
- (void)cancel;
- (id)destinationAddress;
- (void)didSendMessageWithIdentifier:(id)arg1 sendSuccess:(bool)arg2 error:(id)arg3;
- (id)initWithIDSLocalPrimitives:(id)arg1 message:(id)arg2 destinationAddress:(id)arg3 sourceAppleID:(id)arg4 options:(id)arg5;
- (id)initialSendDate;
- (bool)isAsynchronous;
- (void)main;
- (id)message;
- (id)messageSendIdentifier;
- (id)messageSendSubscription;
- (id)options;
- (void)setInitialSendDate:(id)arg1;
- (void)setMessageSendIdentifier:(id)arg1;
- (void)setMessageSendSubscription:(id)arg1;
- (id)sourceAppleID;

@end
