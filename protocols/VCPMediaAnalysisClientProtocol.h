
@protocol VCPMediaAnalysisClientProtocol

@required

- (void)handleResult:(MADVideoResultsPayload *)arg1 atRequestIdx:(unsigned long long)arg2 forRequestID:(int)arg3;
- (void)reportProgress:(double)arg1 forRequest:(int)arg2;

@end
