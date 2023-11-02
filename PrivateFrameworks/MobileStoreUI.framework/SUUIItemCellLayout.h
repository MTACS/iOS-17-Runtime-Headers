
@interface SUUIItemCellLayout : SUUICellLayout <SUUIItemOfferButtonDelegate> {
    bool  _hidesItemOfferButton;
    bool  _highlighted;
    bool  _iconImageHidden;
    SUUICellImageView * _iconImageView;
    SUUIItemOffer * _itemOffer;
    SUUIItemOfferButton * _itemOfferButton;
    SUUIItemOfferButtonAppearance * _itemOfferButtonAppearance;
    UILabel * _itemOfferNoticeLabel;
    SUUIItemState * _itemState;
    UIView * _removeControlView;
    bool  _restricted;
    bool  _selected;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displaysItemOfferButton;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) UIImage *iconImage;
@property (getter=isIconImageHidden, nonatomic) bool iconImageHidden;
@property (nonatomic, readonly) UIView *iconImageView;
@property (nonatomic, retain) SUUIItemOffer *itemOffer;
@property (nonatomic, readonly) SUUIItemOfferButton *itemOfferButton;
@property (nonatomic, retain) SUUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property (nonatomic, readonly) UILabel *itemOfferNoticeLabel;
@property (nonatomic, copy) NSString *itemOfferNoticeString;
@property (nonatomic, copy) SUUIItemState *itemState;
@property (nonatomic, readonly) UIView *removeControlView;
@property (getter=isRestricted, nonatomic) bool restricted;
@property (getter=isSelected, nonatomic) bool selected;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowItemOfferNotice;
- (void)_cancelItemOfferConfirmationAction:(id)arg1;
- (void)_getParentTableView:(id*)arg1 collectionView:(id*)arg2;
- (void)_itemOfferConfirmAction:(id)arg1;
- (id)_parentCollectionViewCell;
- (void)_reloadItemOfferButton:(bool)arg1;
- (void)_reloadItemOfferVisibility;
- (void)_showItemOfferConfirmationAction:(id)arg1;
- (bool)_useCloudButtonForItemState:(id)arg1;
- (void)dealloc;
- (bool)displaysItemOfferButton;
- (id)iconImage;
- (id)iconImageView;
- (bool)isHighlighted;
- (bool)isIconImageHidden;
- (bool)isRestricted;
- (bool)isSelected;
- (id)itemOffer;
- (id)itemOfferButton;
- (id)itemOfferButtonAppearance;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (id)itemOfferNoticeLabel;
- (id)itemOfferNoticeString;
- (id)itemState;
- (void)layoutForItemOfferChange;
- (void)prepareForReuse;
- (id)removeControlView;
- (void)resetLayout;
- (void)setBackgroundColor:(id)arg1;
- (void)setDisplaysItemOfferButton:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIconImageHidden:(bool)arg1;
- (void)setItemOffer:(id)arg1;
- (void)setItemOfferButtonAppearance:(id)arg1;
- (void)setItemOfferNoticeString:(id)arg1;
- (void)setItemState:(id)arg1;
- (void)setItemState:(id)arg1 animated:(bool)arg2;
- (void)setRestricted:(bool)arg1;
- (void)setSelected:(bool)arg1;

@end
