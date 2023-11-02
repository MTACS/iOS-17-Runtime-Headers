
@interface GTTelemetryRequestToken : NSObject {
    bool  _completed;
    NSObject<OS_dispatch_semaphore> * _finished;
    <GTMTLTelemetryService> * _service;
    unsigned long long  _tokenId;
}

@property (nonatomic, readonly) unsigned long long tokenId;

- (void).cxx_destruct;
- (void)completed;
- (id)initWithService:(id)arg1 andTokenId:(unsigned long long)arg2;
- (unsigned long long)tokenId;
- (void)waitUntilCompleted;

@end
