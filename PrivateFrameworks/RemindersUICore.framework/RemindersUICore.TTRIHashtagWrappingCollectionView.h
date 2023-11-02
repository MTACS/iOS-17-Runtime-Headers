
@interface RemindersUICore.TTRIHashtagWrappingCollectionView : UIView <NUIContainerViewDelegate, UIContextMenuInteractionDelegate, UIDropInteractionDelegate> {
    void addTagButtonState;
    void allTagsButtonState;
    void allowsEmptySelection;
    void allowsExcludedSelection;
    void delegate;
    void dropState;
    void focusGuide;
    void focusStyle;
    void hashtagLabels;
    void internalSelection;
    void isEnabled;
    void lastLayoutResult;
    void populator;
    void targetHashtagLabelForPerformingDrop;
    void updateFlags;
    void wrappingContainer;
}

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutSizeThatFits:(struct CGSize { double x1; double x2; })arg1 fixedAxes:(unsigned long long)arg2;
- (void)addTagButtonAction:(id)arg1;
- (void)containerViewDidLayoutArrangedSubviews:(id)arg1;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)hashtagButtonAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLayoutSizeDependentOnPerpendicularAxis;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
