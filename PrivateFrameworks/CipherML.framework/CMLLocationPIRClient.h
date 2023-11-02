
@interface CMLLocationPIRClient : CMLPIRClient

+ (id)new;

- (id)constructPIRRequestWithLatitude:(double)arg1 longitude:(double)arg2 error:(id*)arg3;
- (id)dataByLatitude:(double)arg1 longitude:(double)arg2 error:(id*)arg3;
- (id)decryptPIRResponse:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 error:(id*)arg4;
- (id)init;
- (void)requestDataByLatitude:(double)arg1 longitude:(double)arg2 completionHandler:(id /* block */)arg3;

@end
