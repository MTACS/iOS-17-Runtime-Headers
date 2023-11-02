
@interface CKProgressView : UIProgressView {
    UIView * ___ck_progressView;
    UIView * ___ck_trackView;
}

@property (nonatomic, retain) UIView *__ck_progressView;
@property (nonatomic, retain) UIView *__ck_trackView;

- (void).cxx_destruct;
- (id)__ck_progressView;
- (id)__ck_trackView;
- (id)initWithProgressViewStyle:(long long)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(bool)arg2;
- (void)setTintColor:(id)arg1;
- (void)setTrackTintColor:(id)arg1;
- (void)setUpCKProgressView;
- (void)setUpTrackView;
- (void)set__ck_progressView:(id)arg1;
- (void)set__ck_trackView:(id)arg1;

@end
