
@interface MFPopupButton : UIControl <UIContextMenuInteractionDelegate> {
    NSArray * _deferredItems;
    <MFPopupButtonDelegate> * _delegate;
    NSArray * _items;
    MFActivityIndicatorLabel * _label;
    MFPopupButtonItem * _selectedItem;
}

@property (nonatomic, readonly) bool canPresentMenu;
@property (nonatomic, readonly) NSArray *combinedItems;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *deferredItems;
@property (nonatomic) <MFPopupButtonDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, readonly) MFActivityIndicatorLabel *label;
@property (nonatomic, copy) MFPopupButtonItem *selectedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didSelectItem:(id)arg1;
- (void)_updateUI;
- (id)actionForItem:(id)arg1;
- (bool)canPresentMenu;
- (id)combinedItems;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)deferredItems;
- (id)delegate;
- (void)disableMenu;
- (void)dismissMenu;
- (void)enableMenu;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)items;
- (id)label;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (id)selectedItem;
- (void)setDeferredItems:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSelectedItem:(id)arg1;
- (void)sizeToFit;
- (void)updateItem:(id)arg1;

@end
