
@interface SearchUIHeroButtonView : UIButton {
    SFButtonItem * _buttonItem;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
    SearchUICardSectionRowModel * _rowModel;
}

@property (nonatomic, retain) SFButtonItem *buttonItem;
@property (nonatomic) <SearchUIFeedbackDelegate> *feedbackDelegate;
@property (nonatomic) SearchUICardSectionRowModel *rowModel;

- (void).cxx_destruct;
- (id)buttonItem;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)didMoveToWindow;
- (id)feedbackDelegate;
- (id)init;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (id)rowModel;
- (void)setButtonItem:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setRowModel:(id)arg1;
- (void)setSFImage:(id)arg1;
- (void)setText:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
