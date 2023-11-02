
@interface DTTapLocal : DTTap {
    <DTTapLocalDelegate> * _delegate;
    NSObject<OS_dispatch_source> * _pollTimer;
    bool  _validConfig;
}

@property (readonly, retain) <DTTapLocalDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_canFetchWhileArchiving;
- (id)_fetchDataForReason:(unsigned long long)arg1;
- (void)_handleStatusMemo:(id)arg1;
- (void)_pause;
- (void)_start;
- (void)_stop;
- (void)_unpause;
- (id)delegate;
- (id)initWithConfig:(id)arg1 memoHandler:(id)arg2 delegate:(id)arg3;

@end
