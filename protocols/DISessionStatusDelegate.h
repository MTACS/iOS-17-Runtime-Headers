
@protocol DISessionStatusDelegate

@required

- (void)didAddSession:(DIDropInSession *)arg1;
- (void)didRemoveSession:(DIDropInSession *)arg1;
- (void)didUpdateSession:(DIDropInSession *)arg1;
- (void)session:(DIDropInSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)session:(DIDropInSession *)arg1 didUpdateUplinkMuteStatus:(bool)arg2;

@end
