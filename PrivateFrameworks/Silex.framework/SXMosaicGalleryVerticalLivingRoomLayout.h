
@interface SXMosaicGalleryVerticalLivingRoomLayout : SXMosaicGalleryGroupLayout {
    double  _largeItemHeight;
    double  _smallItemHeight;
}

@property (nonatomic, readonly) double largeItemHeight;
@property (nonatomic, readonly) double smallItemHeight;

- (id)calculateFrames;
- (double)calculateHeight;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })columnRangeForItem:(id)arg1;
- (id)initWithCluster:(id)arg1 numberOfColumns:(unsigned long long)arg2 columnLayout:(id)arg3;
- (double)largeItemHeight;
- (double)smallItemHeight;

@end
