
@interface GTReplayRequestToken : NSObject {
    NSObject<OS_dispatch_semaphore> * _finished;
    <GTMTLReplayService> * _replayer;
    unsigned long long  _tokenId;
}

@property (nonatomic, readonly) unsigned long long tokenId;

- (void).cxx_destruct;
- (bool)cancel;
- (void)completed;
- (id)initWithService:(id)arg1 andTokenId:(unsigned long long)arg2;
- (bool)pause;
- (bool)resume;
- (unsigned long long)tokenId;
- (void)waitUntilCompleted;

@end
