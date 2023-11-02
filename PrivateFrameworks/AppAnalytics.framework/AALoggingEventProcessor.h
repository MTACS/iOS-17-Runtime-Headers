
@interface AALoggingEventProcessor : NSObject <AAEventProcessorType> {
    void proxyEventProcessor;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithFormat:(long long)arg1;
- (id)initWithFormat:(long long)arg1 subsystem:(id)arg2;
- (void)processEvent:(id)arg1;

@end
