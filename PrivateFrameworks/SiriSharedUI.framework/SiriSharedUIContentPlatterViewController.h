
@interface SiriSharedUIContentPlatterViewController : UIViewController {
    NSArray * _contentViewControllers;
}

@property (nonatomic, readonly) SiriSharedUIContentPlatterView *contentPlatterView;
@property (nonatomic, retain) NSArray *contentViewControllers;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)appendSeparatorToViewControllers:(id)arg1 forNextViewController:(id)arg2;
- (id)contentPlatterView;
- (id)contentViewControllers;
- (void)loadView;
- (void)setContentViewControllers:(id)arg1;

@end
