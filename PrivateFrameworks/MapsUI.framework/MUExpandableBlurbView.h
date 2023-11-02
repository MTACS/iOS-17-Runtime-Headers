
@interface MUExpandableBlurbView : UIView {
    MUExpandingLabel * _expandingLabel;
    id /* block */  _moreAction;
    id /* block */  _resizeBlock;
}

@property (nonatomic, copy) id /* block */ moreAction;
@property (nonatomic) unsigned long long numberOfLinesWhenCollapsed;
@property (nonatomic, copy) id /* block */ resizeBlock;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_expand;
- (void)_setupLabel;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)moreAction;
- (unsigned long long)numberOfLinesWhenCollapsed;
- (id /* block */)resizeBlock;
- (void)setMoreAction:(id /* block */)arg1;
- (void)setNumberOfLinesWhenCollapsed:(unsigned long long)arg1;
- (void)setResizeBlock:(id /* block */)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
