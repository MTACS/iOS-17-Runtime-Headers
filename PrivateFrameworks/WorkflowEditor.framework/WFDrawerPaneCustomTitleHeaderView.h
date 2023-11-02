
@interface WFDrawerPaneCustomTitleHeaderView : UIView <WFDrawerPaneHeaderView> {
    WFDrawerPaneCloseButton * _closeButton;
    <WFDrawerPaneHeaderViewDelegate> * _delegate;
    UIView * _titleView;
}

@property (nonatomic, readonly) WFDrawerPaneCloseButton *closeButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFDrawerPaneHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *titleView;

- (void).cxx_destruct;
- (id)closeButton;
- (void)closeButtonTouchedUp:(id)arg1;
- (id)delegate;
- (id)initWithTitleView:(id)arg1;
- (id)layoutConstraints;
- (void)setDelegate:(id)arg1;
- (id)titleView;

@end
