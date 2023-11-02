
@protocol HFShowInHomeDashboard <NSObject>

@required

- (bool)hf_effectiveShowInHomeDashboard;
- (bool)hf_hasSetShowInHomeDashboard;
- (bool)hf_showInHomeDashboard;
- (NAFuture *)hf_updateShowInHomeDashboard:(bool)arg1;

@end
