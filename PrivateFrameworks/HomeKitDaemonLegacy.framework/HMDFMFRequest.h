
@interface HMDFMFRequest : HMFObject {
    FMFSession * _fmfSession;
    HMFTimer * _fmfSessionResponseTimer;
    NSString * _requestID;
}

@property (nonatomic, readonly) FMFSession *fmfSession;
@property (nonatomic, readonly) HMFTimer *fmfSessionResponseTimer;
@property (nonatomic, readonly, copy) NSString *requestID;

- (void).cxx_destruct;
- (id)description;
- (id)fmfSession;
- (id)fmfSessionResponseTimer;
- (id)initWithResponseTimerDelegate:(id)arg1;
- (id)requestID;

@end
