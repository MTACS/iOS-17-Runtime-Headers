
@interface DBLayoutHelperView : UIView {
    <DBLayoutHelperViewDelegate> * _layoutDelegate;
}

@property (nonatomic) <DBLayoutHelperViewDelegate> *layoutDelegate;

- (void).cxx_destruct;
- (id)init;
- (id)layoutDelegate;
- (void)layoutSubviews;
- (void)setLayoutDelegate:(id)arg1;

@end
