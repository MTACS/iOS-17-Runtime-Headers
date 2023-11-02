
@protocol MUInfoCardContentProtocol <NSObject>

@required

+ (double)headerHeightInMinimalMode;

- (GEOAutomobileOptions *)automobileOptions;
- (void)contentAboveTitleScrollPositionChanged:(double)arg1;
- (double)contentAlpha;
- (double)currentHeight;
- (GEOCyclingOptions *)cyclingOptions;
- (NSArray *)draggableContent;
- (UIView *)draggableHeaderView;
- (double)heightForContentAboveTitle;
- (void)hideTitle:(bool)arg1;
- (void)scrollToTopAnimated:(bool)arg1;
- (UIScrollView *)scrollView;
- (<UIScrollViewDelegate> *)scrollViewDelegate;
- (void)setAutomobileOptions:(GEOAutomobileOptions *)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setCyclingOptions:(GEOCyclingOptions *)arg1;
- (void)setScrollViewDelegate:(id <UIScrollViewDelegate>)arg1;
- (void)setTransitOptions:(GEOTransitOptions *)arg1;
- (void)setWalkingOptions:(GEOWalkingOptions *)arg1;
- (GEOTransitOptions *)transitOptions;
- (void)updateHeaderTrailingConstant;
- (UIView *)viewForHeaderContainmentString;
- (GEOWalkingOptions *)walkingOptions;

@end
