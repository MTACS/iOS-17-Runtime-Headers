
@interface CHDBubbleType : CHDChartType {
    int  mBubbleScale;
    bool  mShowNegativeBubbles;
    bool  mSizeRepresentsRadius;
}

- (int)bubbleScale;
- (int)defaultLabelPosition;
- (id)initWithChart:(id)arg1;
- (bool)is3DType;
- (bool)isShowNegBubbles;
- (bool)isSizeRepresentingRadius;
- (void)setBubbleScale:(int)arg1;
- (void)setShowNegBubbles:(bool)arg1;
- (void)setSizeRepresentsRadius:(bool)arg1;

@end
