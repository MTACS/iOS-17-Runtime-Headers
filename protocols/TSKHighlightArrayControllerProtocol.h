
@protocol TSKHighlightArrayControllerProtocol <NSObject>

@required

- (TSUImage *)imageForSearchReference:(id <TSKSearchReference>)arg1 forPath:(struct CGPath { }*)arg2 shouldPulsate:(bool)arg3;
- (struct CGPath { }*)newPathForSearchReference:(id <TSKSearchReference>)arg1;
- (void)pulseAnimationDidStop:(TSKHighlightArrayController *)arg1;

@optional

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectForSearchReference:(id <TSKSearchReference>)arg1;

@end
