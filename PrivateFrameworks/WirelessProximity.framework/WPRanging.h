
@interface WPRanging : WPClient {
    <WPRangingDelegate> * _delegate;
}

@property (nonatomic) <WPRangingDelegate> *delegate;

- (void).cxx_destruct;
- (id)clientAsString;
- (id)delegate;
- (void)enableRanging:(bool)arg1;
- (void)enableRanging:(bool)arg1 reply:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (void)invalidate;
- (void)isRangingEnabledReply:(id /* block */)arg1;
- (void)rangingEnabled:(bool)arg1 withError:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)stateDidChange:(long long)arg1;

@end
