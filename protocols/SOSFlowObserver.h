
@protocol SOSFlowObserver <NSObject>

@required

- (void)sosFlow:(SOSFlow *)arg1 didChangeToState:(long long)arg2;
- (void)sosFlow:(SOSFlow *)arg1 willHandleEvent:(unsigned long long)arg2 withMetaData:(NSDictionary *)arg3;

@end
