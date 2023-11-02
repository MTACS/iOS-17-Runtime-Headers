
@interface HMDModernTransportMessageContextManager : HMFObject <HMDModernTransportMessageContextFactory, HMFLogging> {
    NSMutableDictionary * _contexts;
    <HMDModernTransportMessageContextFactory> * _factory;
}

@property (nonatomic, readonly) NSMutableDictionary *contexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <HMDModernTransportMessageContextFactory> *factory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)completeContext:(id)arg1 withPayload:(id)arg2 error:(id)arg3 isFinal:(bool)arg4;
- (id)contextForIdentifier:(id)arg1;
- (id)contextWithMessage:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3 dateProvider:(id)arg4 timerProvider:(id)arg5;
- (id)contexts;
- (id)createContextWithMessage:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3 dateProvider:(id)arg4 timerProvider:(id)arg5;
- (id)factory;
- (id)init;
- (id)initWithFactory:(id)arg1;

@end
