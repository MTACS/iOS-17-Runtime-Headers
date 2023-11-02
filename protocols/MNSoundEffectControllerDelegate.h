
@protocol MNSoundEffectControllerDelegate <NSObject>

@optional

- (void)soundEffectResourceController:(MNSoundEffectResourceController *)arg1 didFailWhilePlayingIndicator:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)soundEffectResourceController:(MNSoundEffectResourceController *)arg1 didFinishPlayingIndicator:(unsigned long long)arg2;
- (void)soundEffectResourceController:(MNSoundEffectResourceController *)arg1 wasInterruptedWhilePlayingIndicator:(unsigned long long)arg2 withError:(NSError *)arg3;
- (void)soundEffectResourceController:(MNSoundEffectResourceController *)arg1 willStartPlayingIndicator:(unsigned long long)arg2;

@end
