
@interface PUViewControllerSpecChange : NSObject {
    bool  _layoutReferenceSizeChanged;
    bool  _layoutStyleChanged;
    bool  _prefersCompactLayoutForSplitScreenChanged;
    bool  _presentedForSecondScreenChanged;
    bool  _secondScreenSizeChanged;
    bool  _traitCollectionChanged;
}

@property (nonatomic, readonly) bool changed;
@property (nonatomic) bool layoutReferenceSizeChanged;
@property (nonatomic) bool layoutStyleChanged;
@property (nonatomic) bool prefersCompactLayoutForSplitScreenChanged;
@property (nonatomic) bool presentedForSecondScreenChanged;
@property (nonatomic) bool secondScreenSizeChanged;
@property (nonatomic) bool traitCollectionChanged;

- (bool)changed;
- (bool)layoutReferenceSizeChanged;
- (bool)layoutStyleChanged;
- (bool)prefersCompactLayoutForSplitScreenChanged;
- (bool)presentedForSecondScreenChanged;
- (bool)secondScreenSizeChanged;
- (void)setLayoutReferenceSizeChanged:(bool)arg1;
- (void)setLayoutStyleChanged:(bool)arg1;
- (void)setPrefersCompactLayoutForSplitScreenChanged:(bool)arg1;
- (void)setPresentedForSecondScreenChanged:(bool)arg1;
- (void)setSecondScreenSizeChanged:(bool)arg1;
- (void)setTraitCollectionChanged:(bool)arg1;
- (bool)traitCollectionChanged;

@end
