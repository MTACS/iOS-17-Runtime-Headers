
@interface ICSidecarInsertMenuController : NSObject {
    void didReceiveItems;
    void menuDidChange;
    void presentingSourceRect;
    void presentingSourceView;
    void presentingViewController;
    void serviceProvider;
    void services;
}

@property (nonatomic, copy) id /* block */ didReceiveItems;
@property (nonatomic, copy) id /* block */ menuDidChange;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentingSourceRect;
@property (nonatomic) UIView *presentingSourceView;
@property (nonatomic) UIViewController *presentingViewController;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id /* block */)didReceiveItems;
- (id)init;
- (id)menu;
- (id /* block */)menuDidChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentingSourceRect;
- (id)presentingSourceView;
- (id)presentingViewController;
- (void)setDidReceiveItems:(id /* block */)arg1;
- (void)setMenuDidChange:(id /* block */)arg1;
- (void)setPresentingSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPresentingSourceView:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)sidecarDevicesDidChange:(id)arg1;

@end
