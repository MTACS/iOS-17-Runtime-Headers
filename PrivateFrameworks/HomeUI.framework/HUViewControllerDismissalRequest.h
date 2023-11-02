
@interface HUViewControllerDismissalRequest : NSObject {
    bool  _animated;
    UIViewController * _viewController;
}

@property (nonatomic) bool animated;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)requestWithViewController:(id)arg1;

- (void).cxx_destruct;
- (bool)animated;
- (id)initWithViewController:(id)arg1;
- (void)setAnimated:(bool)arg1;
- (id)viewController;

@end
