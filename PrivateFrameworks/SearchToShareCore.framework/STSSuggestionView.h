
@interface STSSuggestionView : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    <STSSuggestionViewDelegate> * _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _footerOffset;
    STSSuggestionFooter * _footerView;
    UIView * _overlayView;
    UITableView * _tableView;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic) <STSSuggestionViewDelegate> *delegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } footerOffset;
@property (nonatomic, retain) UIView *overlayView;
@property (getter=isShowingFooter, nonatomic) bool showingFooter;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (void)_handleLogoTap:(id)arg1;
- (void)_updateContentInsets;
- (void)_updateFooterOrigin;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)delegate;
- (struct CGPoint { double x1; double x2; })footerOffset;
- (struct CGSize { double x1; double x2; })footerSize;
- (id)init;
- (bool)isShowingFooter;
- (void)layoutSubviews;
- (id)overlayView;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFooterOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOverlayView:(id)arg1;
- (void)setOverlayView:(id)arg1 animated:(bool)arg2;
- (void)setShowingFooter:(bool)arg1;
- (id)tableView;
- (void)updateFooterImage:(id)arg1;

@end
