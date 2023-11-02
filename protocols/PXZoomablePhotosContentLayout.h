
@protocol PXZoomablePhotosContentLayout <NSObject>

@required

- (double)accessoryAlpha;
- (id)anchorObjectReference;
- (struct CGPoint { double x1; double x2; })anchorViewportCenter;
- (long long)columnForItem:(long long)arg1;
- (bool)enableBestCropRect;
- (bool)enableEffects;
- (bool)enablePerItemCornerRadius;
- (bool)enablePerItemInsets;
- (bool)fillSafeAreaTopInset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItem:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItem:(long long)arg1 usingInterItemSpacing:(struct CGSize { double x1; double x2; })arg2;
- (bool)hideIncompleteLastRowOrColumn;
- (struct CGSize { double x1; double x2; })interItemSpacing;
- (double)itemAspectRatio;
- (double)itemCaptionSpacing;
- (bool)itemCaptionsVisible;
- (long long)itemClosestTo:(struct CGPoint { double x1; double x2; })arg1;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })itemCornerRadius;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })itemRangeInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)loadItemsOutsideAnchorViewport;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })loadedItems;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })loadedItemsRect;
- (long long)numberOfColumns;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (double)rowHeight;
- (void)setAccessoryAlpha:(double)arg1;
- (void)setAnchorObjectReference:(id)arg1;
- (void)setAnchorViewportCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEnableBestCropRect:(bool)arg1;
- (void)setEnableEffects:(bool)arg1;
- (void)setEnablePerItemCornerRadius:(bool)arg1;
- (void)setEnablePerItemInsets:(bool)arg1;
- (void)setFillSafeAreaTopInset:(bool)arg1;
- (void)setHideIncompleteLastRowOrColumn:(bool)arg1;
- (void)setInterItemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemAspectRatio:(double)arg1;
- (void)setItemCaptionSpacing:(double)arg1;
- (void)setItemCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (void)setLoadItemsOutsideAnchorViewport:(bool)arg1;
- (void)setNumberOfColumns:(long long)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSpriteInfoFlags:(unsigned char)arg1;
- (bool)shiftItem:(long long)arg1 toColumn:(long long)arg2 hideIncompleteRows:(bool)arg3;
- (unsigned char)spriteInfoFlags;
- (bool)supportsContentMode;
- (long long)visualItemShift;

@optional

- (long long)contentMode;
- (void)setContentMode:(long long)arg1;

@end
