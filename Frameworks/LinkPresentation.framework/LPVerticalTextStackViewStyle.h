
@interface LPVerticalTextStackViewStyle : NSObject <LPEmailCompatibleCaptionBarItemChild> {
    LPTextRowStyle * _aboveTopCaption;
    LPTextRowStyle * _belowBottomCaption;
    LPTextRowStyle * _bottomCaption;
    LPPadding * _captionTextPadding;
    LPPadding * _emailCompatibleMargin;
    LPPointUnit * _firstLineLeading;
    LPPointUnit * _lastLineDescent;
    unsigned int  _maximumNumberOfLines;
    bool  _shouldAlignToBaselines;
    LPTextRowStyle * _topCaption;
}

@property (nonatomic, readonly) LPTextRowStyle *aboveTopCaption;
@property (nonatomic, readonly) LPTextRowStyle *belowBottomCaption;
@property (nonatomic, readonly) LPTextRowStyle *bottomCaption;
@property (nonatomic, readonly, retain) LPPadding *captionTextPadding;
@property (nonatomic, readonly, retain) LPPadding *emailCompatibleMargin;
@property (nonatomic, retain) LPPointUnit *firstLineLeading;
@property (nonatomic, retain) LPPointUnit *lastLineDescent;
@property (nonatomic) unsigned int maximumNumberOfLines;
@property (nonatomic) bool shouldAlignToBaselines;
@property (nonatomic, readonly) LPTextRowStyle *topCaption;

- (void).cxx_destruct;
- (id)aboveTopCaption;
- (void)applyToAllTextViewStyles:(id /* block */)arg1;
- (id)belowBottomCaption;
- (id)bottomCaption;
- (id)captionTextPadding;
- (id)emailCompatibleMargin;
- (id)firstLineLeading;
- (id)initWithPlatform:(long long)arg1 sizeClass:(unsigned long long)arg2 fontScalingFactor:(double)arg3;
- (id)lastLineDescent;
- (unsigned int)maximumNumberOfLines;
- (void)setFirstLineLeading:(id)arg1;
- (void)setLastLineDescent:(id)arg1;
- (void)setMaximumNumberOfLines:(unsigned int)arg1;
- (void)setShouldAlignToBaselines:(bool)arg1;
- (bool)shouldAlignToBaselines;
- (id)topCaption;

@end
