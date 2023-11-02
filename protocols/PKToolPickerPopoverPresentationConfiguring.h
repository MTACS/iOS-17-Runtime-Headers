
@protocol PKToolPickerPopoverPresentationConfiguring <NSObject>

@required

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })layoutSceneMargins;
- (NSArray *)passthroughViews;
- (unsigned long long)permittedArrowDirections;

@end
