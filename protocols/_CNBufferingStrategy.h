
@protocol _CNBufferingStrategy <NSObject>

@required

- (void)buffer:(_CNBufferingObservable *)arg1 didReceiveResults:(NSArray *)arg2 forObserver:(id <CNObserver>)arg3;
- (void)bufferDidSendResults:(_CNBufferingObservable *)arg1;

@end
