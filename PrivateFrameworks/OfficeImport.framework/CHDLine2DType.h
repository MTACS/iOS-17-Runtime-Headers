
@interface CHDLine2DType : CHDLineType {
    bool  mShowMarker;
    bool  mStockType;
}

- (id)initWithChart:(id)arg1;
- (bool)isStockType;
- (void)setShowMarker:(bool)arg1;
- (void)setStockType:(bool)arg1;
- (bool)showMarker;

@end
