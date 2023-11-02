
@interface PKProgressContentViewController : UIViewController {
    double  _progress;
}

@property (nonatomic) double progress;

- (bool)_canShowWhileLocked;
- (id)_contentView;
- (void)loadView;
- (double)progress;
- (void)setProgress:(double)arg1;
- (void)viewDidLayoutSubviews;

@end
