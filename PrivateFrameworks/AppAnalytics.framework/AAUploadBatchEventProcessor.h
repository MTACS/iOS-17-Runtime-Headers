
@interface AAUploadBatchEventProcessor : NSObject <AAEventProcessorType> {
    void proxyEventProcessor;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithClient:(id)arg1 endpoint:(id)arg2;
- (id)initWithClient:(id)arg1 endpoint:(id)arg2 config:(id)arg3;
- (id)initWithClient:(id)arg1 endpoint:(id)arg2 contentType:(long long)arg3 config:(id)arg4;
- (void)processEvent:(id)arg1;

@end
