
@protocol STSSessionDelegate <STSSessionBaseDelegate>

@optional

- (void)stsSession:(STSSession *)arg1 didChangeExpressModeState:(unsigned int)arg2 withObject:(NSString *)arg3;
- (void)stsSession:(STSSession *)arg1 didChangeExpressModeWithInfo:(STSExpressEventInfo *)arg2;
- (void)stsSession:(STSSession *)arg1 didDetectField:(bool)arg2;
- (void)stsSession:(STSSession *)arg1 didEndTransaction:(STSTransactionEndEvent *)arg2;
- (void)stsSession:(STSSession *)arg1 didExpireTransaction:(bool)arg2;
- (void)stsSession:(STSSession *)arg1 didFailDeferredAuth:(bool)arg2;
- (void)stsSession:(STSSession *)arg1 didPerformAuxiliaryTransactions:(NSArray *)arg2;
- (void)stsSession:(STSSession *)arg1 didReceive18013Requests:(NSArray *)arg2;
- (void)stsSession:(STSSession *)arg1 didReceive18013Requests:(NSArray *)arg2 readerAuthInfo:(STS18013ReaderAuthInfo *)arg3;
- (void)stsSession:(STSSession *)arg1 didReceiveActivityTimeout:(NSString *)arg2;
- (void)stsSession:(STSSession *)arg1 didReceiveFieldNotification:(STSField *)arg2;
- (void)stsSession:(STSSession *)arg1 didReceivePassthroughMessage:(NSData *)arg2;
- (void)stsSession:(STSSession *)arg1 didStartTransaction:(STSTransactionStartEvent *)arg2;
- (void)stsSession:(STSSession *)arg1 digitalCarKeyEventPayload:(NSDictionary *)arg2;
- (void)stsSession:(STSSession *)arg1 hasPendingServerRequest:(bool)arg2;
- (void)stsSessionDidConsumeAuthorization:(STSSession *)arg1;
- (void)stsSessionRequestHandoffConfirmation:(STSSession *)arg1;

@end
