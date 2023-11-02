
@interface MADServiceProxy : NSObject <VCPMediaAnalysisClientProtocol> {
    MADService * _service;
}

- (void).cxx_destruct;
- (void)handleResult:(id)arg1 atRequestIdx:(unsigned long long)arg2 forRequestID:(int)arg3;
- (id)initWithService:(id)arg1;
- (void)reportProgress:(double)arg1 forRequest:(int)arg2;

@end
