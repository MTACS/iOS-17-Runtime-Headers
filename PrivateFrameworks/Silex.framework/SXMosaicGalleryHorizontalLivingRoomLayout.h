
@interface SXMosaicGalleryHorizontalLivingRoomLayout : SXMosaicGalleryGroupLayout {
    bool  _reverseLayout;
}

@property (nonatomic) bool reverseLayout;

- (id)calculateFrames;
- (double)calculateHeight;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRangeForItem:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRangeForLargeItem;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRangeForSmallerItems;
- (double)desiredHeightForLargeItem;
- (double)desiredHeightForSmallerItems;
- (unsigned long long)indexOfLargeItem;
- (bool)reverseLayout;
- (void)setReverseLayout:(bool)arg1;

@end
