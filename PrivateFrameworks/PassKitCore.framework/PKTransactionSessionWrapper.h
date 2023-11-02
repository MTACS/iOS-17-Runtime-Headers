
@interface PKTransactionSessionWrapper : NSObject {
    unsigned long long  _firstInQueue;
    <NFSession> * _nfSession;
    STSSession * _stsSession;
}

@property (getter=isFirstInQueue, nonatomic) bool firstInQueue;
@property (nonatomic, readonly) <NFSession> *nfSession;
@property (nonatomic, readonly) STSSession *stsSession;

- (void).cxx_destruct;
- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (id)initWithNFSession:(id)arg1;
- (id)initWithSTSSession:(id)arg1;
- (bool)isFirstInQueue;
- (id)nfSession;
- (void)setFirstInQueue:(bool)arg1;
- (id)stsSession;

@end
