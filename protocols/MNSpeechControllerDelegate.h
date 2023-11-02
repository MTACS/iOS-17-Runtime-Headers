
@protocol MNSpeechControllerDelegate <NSObject>

@optional

- (void)speechResourceController:(MNSpeechResourceController *)arg1 didCacheUtterance:(NSString *)arg2 withDuration:(double)arg3;
- (void)speechResourceController:(MNSpeechResourceController *)arg1 didFailWhileCachingUtterance:(NSString *)arg2 withError:(NSError *)arg3;
- (void)speechResourceController:(MNSpeechResourceController *)arg1 didFailWhileSpeakingUtterance:(NSString *)arg2 withError:(NSError *)arg3;
- (void)speechResourceController:(MNSpeechResourceController *)arg1 didFinishSpeakingUtterance:(NSString *)arg2 withDuration:(double)arg3;
- (void)speechResourceController:(MNSpeechResourceController *)arg1 didTimeoutWhileCachingUtterance:(NSString *)arg2 withError:(NSError *)arg3;
- (void)speechResourceController:(MNSpeechResourceController *)arg1 didTimeoutWhileSpeakingUtterance:(NSString *)arg2 withError:(NSError *)arg3;
- (void)speechResourceController:(MNSpeechResourceController *)arg1 wasInterruptedWhileSpeakingUtterance:(NSString *)arg2 withError:(NSError *)arg3;
- (void)speechResourceController:(MNSpeechResourceController *)arg1 willStartSpeakingUtterance:(NSString *)arg2;

@end
