
@interface STHeroWelcomeController : OBWelcomeController {
    double  _topInset;
}

@property double topInset;

- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4 topInset:(double)arg5;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 topInset:(double)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 topInset:(double)arg3;
- (void)loadView;
- (void)setTopInset:(double)arg1;
- (void)setView:(id)arg1;
- (double)topInset;

@end
