
@interface INAppIntentDispatcher : NSObject <INIntentDeliveringDelegate> {
    <INIntentDeliveringDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <INIntentDeliveringDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)dispatchIntentForwardingAction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
