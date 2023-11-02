
@interface OADTableCellBorderStyle : NSObject {
    OADStroke * mBottomLeftToTopRightStroke;
    OADStroke * mBottomStroke;
    OADStroke * mHorzInsideStroke;
    OADStroke * mLeftStroke;
    OADStroke * mRightStroke;
    OADStroke * mTopLeftToBottomRightStroke;
    OADStroke * mTopStroke;
    OADStroke * mVertInsideStroke;
}

+ (id)defaultAxisParallelStroke;
+ (id)defaultObliqueStroke;
+ (id)defaultStyle;

- (void).cxx_destruct;
- (void)applyOverridesFrom:(id)arg1;
- (id)bottomLeftToTopRightStroke;
- (id)bottomStroke;
- (id)description;
- (id)horzInsideStroke;
- (id)leftStroke;
- (id)rightStroke;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (void)setBottomStroke:(id)arg1;
- (void)setHorzInsideStroke:(id)arg1;
- (void)setLeftStroke:(id)arg1;
- (void)setRightStroke:(id)arg1;
- (void)setStrokeOfType:(int)arg1 toValue:(id)arg2;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (void)setTopStroke:(id)arg1;
- (void)setVertInsideStroke:(id)arg1;
- (id)shallowCopy;
- (id)stroke:(int)arg1;
- (id)topLeftToBottomRightStroke;
- (id)topStroke;
- (id)vertInsideStroke;

@end
