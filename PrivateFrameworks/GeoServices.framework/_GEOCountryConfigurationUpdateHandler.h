
@interface _GEOCountryConfigurationUpdateHandler : NSObject {
    id /* block */  _callback;
    NSObject<OS_dispatch_queue> * _callbackQueue;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)callbackQueue;
- (void)setCallback:(id /* block */)arg1;
- (void)setCallbackQueue:(id)arg1;

@end
