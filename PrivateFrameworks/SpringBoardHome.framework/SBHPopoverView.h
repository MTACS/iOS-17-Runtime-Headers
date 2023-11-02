
@interface SBHPopoverView : UIView {
    UIView * _backgroundView;
}

@property (nonatomic, retain) UIView *backgroundView;

- (void).cxx_destruct;
- (id)_arrowViewForArrowLocation:(long long)arg1 arrowSize:(double)arg2;
- (id)_createBackgroundView;
- (id)backgroundView;
- (id)initWithArrowLocation:(long long)arg1;
- (void)setBackgroundView:(id)arg1;

@end
