
@interface AKSignaturesPresentationContext : NSObject {
    UIViewController * _presentingViewController;
    UIView * _sourceView;
}

@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) UIView *sourceView;

- (void).cxx_destruct;
- (id)presentingViewController;
- (void)setPresentingViewController:(id)arg1;
- (void)setSourceView:(id)arg1;
- (id)sourceView;

@end
