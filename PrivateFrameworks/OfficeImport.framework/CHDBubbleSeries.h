
@interface CHDBubbleSeries : CHDSeries {
    bool  mBubble3D;
    bool  mInvertIfNegative;
    bool  mShowBubbleSize;
    CHDData * mSizeData;
}

- (void).cxx_destruct;
- (bool)isBubble3D;
- (bool)isInvertIfNegative;
- (bool)isShowBubbleSize;
- (void)setBubble3D:(bool)arg1;
- (void)setCategoryData:(id)arg1;
- (void)setInvertIfNegative:(bool)arg1;
- (void)setShowBubbleSize:(bool)arg1;
- (void)setSizeData:(id)arg1;
- (id)sizeData;

@end
