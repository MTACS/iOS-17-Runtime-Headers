
@interface STKSIMToolkitAlertSession : STKAlertSession {
    STKSessionBehavior * _behavior;
    long long  _event;
}

@property (nonatomic, readonly) STKSessionBehavior *behavior;
@property (nonatomic, readonly) long long event;

- (void).cxx_destruct;
- (id)behavior;
- (long long)event;
- (id)initWithLogger:(id)arg1 responseProvider:(id)arg2 event:(long long)arg3 options:(id)arg4 behavior:(id)arg5 sound:(id)arg6;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)sendResponse:(long long)arg1 withBOOLResult:(bool)arg2;
- (void)sendSuccessWithSelectedIndex:(unsigned long long)arg1;

@end
