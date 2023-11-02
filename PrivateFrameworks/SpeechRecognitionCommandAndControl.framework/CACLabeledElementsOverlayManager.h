
@interface CACLabeledElementsOverlayManager : CACSimpleContentViewManager {
    <CACLabeledElementsOverlayManagerDelegate> * _delegate;
    NSMutableArray * _labeledElements;
}

@property (nonatomic) <CACLabeledElementsOverlayManagerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *labeledElementsCopy;

+ (void)assignNumbersToLabeledElements:(id)arg1 numberingStrategy:(int)arg2 startingNumber:(long long)arg3;

- (void).cxx_destruct;
- (id)_findLabeledElementsThatIntersectsLabelRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromLabeledElement:(id)arg2 justLabelRect:(bool)arg3 additionalElements:(id)arg4;
- (id)_optimizeLabeledElements:(id)arg1 startingNumberedLabelsAtIndex:(unsigned long long)arg2 forceNoArrow:(bool)arg3;
- (void)addLabeledElements:(id)arg1 forceNoArrow:(bool)arg2 startingNumberedLabelsAtIndex:(unsigned long long)arg3;
- (void)clearLabeledElements;
- (id)delegate;
- (void)hideAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)isOverlay;
- (id)labeledElementsCopy;
- (void)setDelegate:(id)arg1;
- (void)showLabeledElementsOverlayWithLabeledElements:(id)arg1;
- (void)showLabeledElementsOverlayWithLabeledElements:(id)arg1 forceNoArrow:(bool)arg2;
- (void)showLabeledElementsOverlayWithLabeledElements:(id)arg1 forceNoArrow:(bool)arg2 startingNumberedLabelsAtIndex:(unsigned long long)arg3;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;

@end
