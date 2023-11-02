
@interface UIDictationTipPresentationHandler : NSObject {
    long long  _dictationTipSignaled;
    bool  _isShowingTip;
    bool  _tipPresentedInCurrentDictationSession;
}

@property (nonatomic) long long dictationTipSignaled;
@property (nonatomic) bool isShowingTip;
@property (nonatomic) bool tipPresentedInCurrentDictationSession;

- (bool)dictationCommandTipsEnabled;
- (long long)dictationTipDisplayCount:(long long)arg1;
- (bool)dictationTipShownOverLimit:(long long)arg1;
- (long long)dictationTipSignaled;
- (long long)getDictationTipSignaled;
- (id)init;
- (bool)isShowingTip;
- (void)resetDictationTipSignal;
- (void)resetHandler;
- (void)setDictationTipSignaled:(long long)arg1;
- (void)setIsShowingTip:(bool)arg1;
- (void)setTipPresentedInCurrentDictationSession:(bool)arg1;
- (bool)shouldSignalDictationTip:(long long)arg1;
- (void)signalTipPresentedInCurrentDictationSession;
- (bool)tipPresentedInCurrentDictationSession;
- (bool)tipShownLastWeek;

@end
