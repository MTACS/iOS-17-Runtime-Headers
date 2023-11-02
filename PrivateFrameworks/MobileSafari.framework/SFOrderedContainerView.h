
@interface SFOrderedContainerView : UIView {
    <SFOrderedContainerViewDelegate> * _delegate;
    bool  _settingOrderedSubviews;
}

@property (nonatomic) <SFOrderedContainerViewDelegate> *delegate;

- (void).cxx_destruct;
- (void)_sf_setOrderedSubviews:(id*)arg1 count:(unsigned long long)arg2;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateOrderedSubviews:(id*)arg1 count:(unsigned long long)arg2;
- (void)willMoveToWindow:(id)arg1;

@end
