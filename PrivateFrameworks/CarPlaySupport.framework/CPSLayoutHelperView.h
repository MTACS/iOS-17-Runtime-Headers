
@interface CPSLayoutHelperView : UIView {
    <CPSLayoutHelperViewDelegate> * _layoutDelegate;
}

@property (nonatomic) <CPSLayoutHelperViewDelegate> *layoutDelegate;

- (void).cxx_destruct;
- (id)init;
- (id)layoutDelegate;
- (void)layoutSubviews;
- (void)setLayoutDelegate:(id)arg1;

@end
