
@interface SBHScrollableIconViewInteraction : NSObject {
    SBIconView * _cachedInteractingIconView;
    <SBHScrollableIconViewContaining> * _container;
}

@property (nonatomic, readonly) <SBHScrollableIconViewContaining> *container;

- (void).cxx_destruct;
- (double)_clippingFudgeInset;
- (id)_findInteractingIconView;
- (void)clippingScrollViewDidScroll:(id)arg1;
- (id)container;
- (void)handleTargetIconViewClipped:(id)arg1;
- (id)initWithContainer:(id)arg1;
- (bool)isIconViewTheInteractingTargetIconView:(id)arg1;
- (void)updateScrolling:(bool)arg1;

@end
