
@interface SBModalWidgetIntroductionHomeScreenPreview : NSObject {
    UIView * _liveView;
    UIImage * _snapshot;
}

@property (nonatomic, retain) UIView *liveView;
@property (nonatomic, retain) UIImage *snapshot;

- (void).cxx_destruct;
- (id)initWithPreview:(id)arg1 withSnapshot:(id)arg2;
- (id)liveView;
- (void)setLiveView:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;

@end
