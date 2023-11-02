
@interface TSTableView : UITableView {
    long long  _touchDeferCounter;
    NSObject<OS_dispatch_group> * _touchDeferGroup;
    bool  _tsaxPrefersCustomReorderMessage;
}

@property (nonatomic) long long touchDeferCounter;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *touchDeferGroup;
@property (nonatomic) bool tsaxPrefersCustomReorderMessage;

+ (long long)ts_preferredStyleForStyle:(long long)arg1;

- (void).cxx_destruct;
- (id)_accessibilityReorderMessageForNewIndexPath:(id)arg1 swappedWithRow:(long long)arg2 movingDown:(bool)arg3;
- (void)_deferWhenTouchingWithBlock:(id /* block */)arg1;
- (id)contextualActionForDeletingRowAtIndexPath:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(long long)arg2;
- (void)setTouchDeferCounter:(long long)arg1;
- (void)setTsaxPrefersCustomReorderMessage:(bool)arg1;
- (long long)touchDeferCounter;
- (id)touchDeferGroup;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)tsaxPrefersCustomReorderMessage;

@end
