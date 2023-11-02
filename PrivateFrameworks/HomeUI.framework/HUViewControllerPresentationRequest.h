
@interface HUViewControllerPresentationRequest : NSObject {
    bool  _animated;
    unsigned long long  _preferredPresentationType;
    UIViewController * _viewController;
}

@property (nonatomic) bool animated;
@property (nonatomic) unsigned long long preferredPresentationType;
@property (nonatomic, readonly) UIViewController *viewController;

+ (id)requestWithViewController:(id)arg1;

- (void).cxx_destruct;
- (bool)animated;
- (id)asGeneric;
- (id)initWithViewController:(id)arg1;
- (unsigned long long)preferredPresentationType;
- (void)setAnimated:(bool)arg1;
- (void)setPreferredPresentationType:(unsigned long long)arg1;
- (id)viewController;

@end
