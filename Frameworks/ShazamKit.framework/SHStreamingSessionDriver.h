
@interface SHStreamingSessionDriver : NSObject <SHSessionDriver> {
    double  _currentRequiredDuration;
    NSDate * _intermissionDeadline;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _matchingSignatureID;
    SHSignatureMetrics * _metrics;
    <SHSessionDriverDelegate> * _sessionDriverDelegate;
    SHSignatureBuffer * _signatureBuffer;
}

@property (nonatomic) double currentRequiredDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDate *intermissionDeadline;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NSUUID *matchingSignatureID;
@property (nonatomic, readonly) SHSignatureMetrics *metrics;
@property (nonatomic) <SHSessionDriverDelegate> *sessionDriverDelegate;
@property (nonatomic, retain) SHSignatureBuffer *signatureBuffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canPerformMatch;
- (double)currentRequiredDuration;
- (void)flow:(id)arg1 time:(id)arg2;
- (id)initWithMinimumSignatureDuration:(double)arg1 maximumSignatureDuration:(double)arg2 bufferDuration:(double)arg3;
- (id)initWithSignatureBuffer:(id)arg1;
- (id)intermissionDeadline;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;
- (id)matchingSignatureID;
- (id)metrics;
- (void)receivedSignature:(id)arg1 retry:(double)arg2 intermission:(double)arg3 dropCurrentSignature:(bool)arg4;
- (id)sessionDriverDelegate;
- (void)setCurrentRequiredDuration:(double)arg1;
- (void)setIntermissionDeadline:(id)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setMatchingSignatureID:(id)arg1;
- (void)setSessionDriverDelegate:(id)arg1;
- (void)setSignatureBuffer:(id)arg1;
- (id)signatureBuffer;
- (id)signatureForMatching;

@end
