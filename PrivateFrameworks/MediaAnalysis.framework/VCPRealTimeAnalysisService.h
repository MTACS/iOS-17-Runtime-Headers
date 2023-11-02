
@interface VCPRealTimeAnalysisService : NSObject <VCPRealTimeAnalysisClientProtocol> {
    NSXPCConnection * _connection;
    NSLock * _connectionLock;
}

+ (id)analysisService;
+ (id)errorWithStatus:(int)arg1 andDescription:(id)arg2;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)requestAnalysis:(unsigned long long)arg1 ofPixelBuffer:(struct __CVBuffer { }*)arg2 withProperties:(id)arg3 withCompletionHandler:(id /* block */)arg4;

@end
