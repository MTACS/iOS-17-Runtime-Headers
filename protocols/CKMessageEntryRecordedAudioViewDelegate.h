
@protocol CKMessageEntryRecordedAudioViewDelegate <NSObject>

@required

- (void)messageEntryRecordedAudioView:(CKMessageEntryRecordedAudioView *)arg1 mediaObjectDidFinishPlaying:(CKMediaObject *)arg2;
- (void)messageEntryRecordedAudioViewPlaybackDidStop;
- (void)messageEntryRecordedAudioViewPlaybackProgressDidChange:(double)arg1;
- (void)messageEntryRecordedAudioViewPressedDelete:(CKMessageEntryRecordedAudioView *)arg1;
- (void)messageEntryRecordedAudioViewPressedPause:(CKMessageEntryRecordedAudioView *)arg1;
- (void)messageEntryRecordedAudioViewPressedPlay:(CKMessageEntryRecordedAudioView *)arg1;

@end
