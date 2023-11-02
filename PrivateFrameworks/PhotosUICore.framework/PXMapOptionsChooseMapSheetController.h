
@interface PXMapOptionsChooseMapSheetController : UIViewController <UIAdaptivePresentationControllerDelegate> {
    void blurredBackgroundView;
    void closeButton;
    void contentViewController;
    void controllerDelegate;
}

@property (nonatomic) <PXMapOptionsChooseMapViewDelegate> *delegate;
@property (nonatomic) unsigned long long mapStyle;

- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)delegate;
- (void)handleCloseAction;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)mapStyle;
- (void)setDelegate:(id)arg1;
- (void)setMapStyle:(unsigned long long)arg1;
- (void)viewDidLoad;

@end
