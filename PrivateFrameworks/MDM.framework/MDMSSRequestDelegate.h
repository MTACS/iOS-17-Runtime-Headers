
@interface MDMSSRequestDelegate : NSObject <SSRequestDelegate> {
    id /* block */  _completionBlock;
    SSRequest * _request;
    NSTimer * _timeoutTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) SSRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_startTimeout:(double)arg1 completionBlock:(id /* block */)arg2;
- (void)_timerDidFire:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;

@end
