
@interface _MPCSuzeLeaseSessionInfo : NSObject {
    long long  _clientCount;
    ICSuzeLeaseSession * _icLeaseSession;
    MPCSuzeLeaseSession * _mpcLeaseSession;
    bool  _shouldStopWhenFinished;
}

@property (nonatomic) long long clientCount;
@property (nonatomic, readonly) ICSuzeLeaseSession *icLeaseSession;
@property (nonatomic, readonly) MPCSuzeLeaseSession *mpcLeaseSession;
@property (nonatomic) bool shouldStopWhenFinished;

- (void).cxx_destruct;
- (long long)clientCount;
- (id)icLeaseSession;
- (id)initWithICLeaseSession:(id)arg1;
- (id)mpcLeaseSession;
- (void)setClientCount:(long long)arg1;
- (void)setShouldStopWhenFinished:(bool)arg1;
- (bool)shouldStopWhenFinished;

@end
