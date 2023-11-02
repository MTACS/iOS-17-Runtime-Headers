
@interface MUPlacePhotoSectionControllerConfiguration : NSObject {
    UIViewController * _presentingViewController;
    bool  _showLookAround;
    bool  _supportsARPCallToAction;
}

@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) bool showLookAround;
@property (nonatomic) bool supportsARPCallToAction;

- (void).cxx_destruct;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (void)setShowLookAround:(bool)arg1;
- (void)setSupportsARPCallToAction:(bool)arg1;
- (bool)showLookAround;
- (bool)supportsARPCallToAction;

@end
