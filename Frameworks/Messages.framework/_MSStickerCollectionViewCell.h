
@interface _MSStickerCollectionViewCell : UICollectionViewCell {
    CALayer * _borderLayer;
    MSStickerView * _stickerView;
}

@property (nonatomic, retain) CALayer *borderLayer;
@property (nonatomic, retain) <MSStickerPrivate> *sticker;
@property (nonatomic, readonly) MSStickerView *stickerView;

- (void).cxx_destruct;
- (id)borderLayer;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAnimating:(bool)arg1;
- (void)setBorderLayer:(id)arg1;
- (void)setSticker:(id)arg1;
- (void)showCellBorder:(bool)arg1;
- (id)sticker;
- (id)stickerView;

@end
