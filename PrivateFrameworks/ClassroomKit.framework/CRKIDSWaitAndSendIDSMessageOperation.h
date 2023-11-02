
@interface CRKIDSWaitAndSendIDSMessageOperation : CATOperation {
    <CRKIDSLocalPrimitives> * _IDSLocalPrimitives;
    NSString * _destinationAddress;
    CATOperation * _evaluateReadinessOperation;
    NSDictionary * _message;
    CRKIDSMessageOptions * _options;
    <CRKIDSReadinessEvaluating> * _readinessEvaluator;
    CATOperation * _sendMessageOperation;
    NSString * _sourceAppleID;
}

@property (nonatomic, readonly) <CRKIDSLocalPrimitives> *IDSLocalPrimitives;
@property (nonatomic, readonly, copy) NSString *destinationAddress;
@property (nonatomic, retain) CATOperation *evaluateReadinessOperation;
@property (nonatomic, readonly, copy) NSDictionary *message;
@property (nonatomic, readonly) CRKIDSMessageOptions *options;
@property (nonatomic, readonly) <CRKIDSReadinessEvaluating> *readinessEvaluator;
@property (nonatomic, retain) CATOperation *sendMessageOperation;
@property (nonatomic, readonly, copy) NSString *sourceAppleID;

- (void).cxx_destruct;
- (id)IDSLocalPrimitives;
- (void)cancel;
- (id)destinationAddress;
- (id)evaluateReadinessOperation;
- (void)evaluateReadinessOperationDidFinish:(id)arg1;
- (id)initWithIDSLocalPrimitives:(id)arg1 IDSReadinessEvaluator:(id)arg2 message:(id)arg3 destinationAddress:(id)arg4 sourceAppleID:(id)arg5 options:(id)arg6;
- (bool)isAsynchronous;
- (void)main;
- (id)message;
- (id)options;
- (id)readinessEvaluator;
- (void)run;
- (void)sendMessage;
- (id)sendMessageOperation;
- (void)sendMessageOperationDidFinish:(id)arg1;
- (void)setEvaluateReadinessOperation:(id)arg1;
- (void)setSendMessageOperation:(id)arg1;
- (id)sourceAppleID;

@end
