
@interface StickersUI.StickerCollectionStickerCell : UICollectionViewCell <STKMSStickerViewDelegate> {
    void $__lazy_storage_$_deleteButton;
    void $__lazy_storage_$_rearrangingView;
    void delegate;
    void isArranging;
    void isStickerEffectPaused;
    void isStickerHidden;
    void msSticker;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  stickerIdentifier;
    void stickerScoreDefaultAnimatedThreshold;
    void stickerView;
}

@property (nonatomic, readonly) bool canHandleTap;

- (void).cxx_destruct;
- (void)_bridgedUpdateConfigurationUsingState:(id)arg1;
- (bool)canHandleTap;
- (void)handleDelete:(id)arg1;
- (void)handleLongPress:(id)arg1 recognizer:(id)arg2;
- (void)handleTap:(id)arg1 recognizer:(id)arg2;
- (void)handleWillDrag:(id)arg1;
- (void)handleWillTap:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end
