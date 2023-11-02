
@interface LAPSPasscodeOptionsPresentationRequest : NSObject {
    bool  _animated;
    LAPSPasscodeOptionsViewControllerConfiguration * _config;
    <LAPSPasscodeOptionsViewControllerDelegate> * _delegate;
    UIView * _sourceView;
    UIViewController * _sourceViewController;
}

@property (nonatomic) bool animated;
@property (nonatomic, retain) LAPSPasscodeOptionsViewControllerConfiguration *config;
@property (nonatomic) <LAPSPasscodeOptionsViewControllerDelegate> *delegate;
@property (nonatomic, retain) UIView *sourceView;
@property (nonatomic, readonly) UIViewController *sourceViewController;

- (void).cxx_destruct;
- (bool)animated;
- (id)config;
- (id)delegate;
- (id)initWithSourceViewController:(id)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setConfig:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSourceView:(id)arg1;
- (id)sourceView;
- (id)sourceViewController;

@end
