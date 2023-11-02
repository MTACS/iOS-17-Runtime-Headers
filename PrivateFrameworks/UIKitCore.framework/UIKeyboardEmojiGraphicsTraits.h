
@interface UIKeyboardEmojiGraphicsTraits : NSObject {
    double  _alertTextWidth;
    double  _bottomPadding;
    double  _categoryHeaderBottomInset;
    double  _categoryHeaderFontSize;
    double  _categoryHeaderHeight;
    double  _categoryHeaderLeftPadding;
    double  _categorySelectedCirWidth;
    double  _columnOffset;
    double  _emojiKeyWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _fakeEmojiKeySize;
    double  _inputViewLeftMostPadding;
    double  _inputViewRightMostPadding;
    bool  _isFirstPartyStickers;
    double  _minimumInteritemSpacing;
    double  _minimumLineSpacing;
    long long  _prepolulatedRecentCount;
    double  _rightBiasPercentage;
    double  _scrollSnapOffset;
    double  _sectionOffset;
    double  _topPadding;
}

@property (nonatomic, readonly) double alertTextWidth;
@property (nonatomic, readonly) double bottomPadding;
@property (nonatomic, readonly) double categoryHeaderBottomInset;
@property (nonatomic, readonly) double categoryHeaderFontSize;
@property (nonatomic, readonly) double categoryHeaderHeight;
@property (nonatomic, readonly) double categoryHeaderLeftPadding;
@property (nonatomic, readonly) double categorySelectedCirWidth;
@property (nonatomic, readonly) double columnOffset;
@property (nonatomic, readonly) double emojiKeyWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fakeEmojiKeySize;
@property (nonatomic, readonly) double inputViewLeftMostPadding;
@property (nonatomic, readonly) double inputViewRightMostPadding;
@property (nonatomic, readonly) double minimumInteritemSpacing;
@property (nonatomic, readonly) double minimumLineSpacing;
@property (nonatomic, readonly) long long prepolulatedRecentCount;
@property (nonatomic, readonly) double rightBiasPercentage;
@property (nonatomic, readonly) double scrollSnapOffset;
@property (nonatomic, readonly) double sectionOffset;
@property (nonatomic, readonly) double topPadding;

+ (id)emojiGraphicsTraitsForCurrentScreenTraits;
+ (id)emojiGraphicsTraitsWithScreenTraits:(id)arg1;

- (double)alertTextWidth;
- (double)bottomPadding;
- (double)categoryHeaderBottomInset;
- (double)categoryHeaderFontSize;
- (double)categoryHeaderHeight;
- (double)categoryHeaderLeftPadding;
- (double)categorySelectedCirWidth;
- (double)columnOffset;
- (double)emojiKeyWidth;
- (struct CGSize { double x1; double x2; })fakeEmojiKeySize;
- (id)initWithScreenTrait:(id)arg1;
- (double)inputViewLeftMostPadding;
- (double)inputViewRightMostPadding;
- (double)minimumInteritemSpacing;
- (double)minimumLineSpacing;
- (long long)prepolulatedRecentCount;
- (double)rightBiasPercentage;
- (double)scrollSnapOffset;
- (double)sectionOffset;
- (double)topPadding;

@end
