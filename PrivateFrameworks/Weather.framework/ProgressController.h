
@interface ProgressController : NSObject {
    NSTimer * _hideSpinnerTimer;
    int  _loadingCount;
    bool  _progressShowing;
}

+ (id)sharedProgressController;

- (void).cxx_destruct;
- (void)_hideSpinner;
- (void)_setHideSpinnerTimer:(id)arg1;
- (void)_showSpinner;
- (void)setLoadingData:(bool)arg1;
- (void)suspend;
- (void)userScrolled;

@end
