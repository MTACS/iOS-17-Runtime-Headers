
@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell {
    SKUIGift * _gift;
    SKUIGiftConfiguration * _giftConfiguration;
    UIImageView * _headerImageView;
    SKUIGiftItemView * _itemView;
    UILabel * _messageLabel;
    UILabel * _priceLabel;
    UILabel * _senderNameLabel;
    UILabel * _senderNameLabelLabel;
    SKUIGiftTheme * _theme;
}

@property (nonatomic, retain) SKUIGift *gift;
@property (nonatomic, retain) SKUIGiftConfiguration *giftConfiguration;
@property (nonatomic, retain) UIImage *itemImage;
@property (nonatomic, retain) SKUIGiftTheme *theme;

- (void).cxx_destruct;
- (id)_itemView;
- (void)_reloadItemView;
- (void)_setHeaderImage:(id)arg1;
- (void)_setMessage:(id)arg1;
- (void)_setPrice:(id)arg1;
- (void)_setSenderName:(id)arg1;
- (id)gift;
- (id)giftConfiguration;
- (id)itemImage;
- (void)layoutSubviews;
- (void)reloadThemeHeaderImage;
- (void)setBackgroundColor:(id)arg1;
- (void)setGift:(id)arg1;
- (void)setGiftConfiguration:(id)arg1;
- (void)setItemImage:(id)arg1;
- (void)setTheme:(id)arg1;
- (id)theme;

@end
