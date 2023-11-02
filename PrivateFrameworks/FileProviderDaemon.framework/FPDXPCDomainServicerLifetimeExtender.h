
@interface FPDXPCDomainServicerLifetimeExtender : NSObject <FPDLifetimeExtender, FPDLifetimeServicing> {
    NSString * _prettyDescription;
    int  _requestEffectivePID;
    id /* block */  _stopBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSString *prettyDescription;
@property int requestEffectivePID;
@property (nonatomic, copy) id /* block */ stopBlock;
@property (readonly) Class superclass;
@property (readonly) double timeout;
@property unsigned long long timeoutState;

- (void).cxx_destruct;
- (id)prettyDescription;
- (int)requestEffectivePID;
- (void)setPrettyDescription:(id)arg1;
- (void)setRequestEffectivePID:(int)arg1;
- (void)setStopBlock:(id /* block */)arg1;
- (id /* block */)stopBlock;
- (void)stopExtendingLifetime;

@end
