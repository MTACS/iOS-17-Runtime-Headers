
@interface TUIAssistantButtonSizeProvider : NSObject {
    double  _barButtonWidth;
}

@property (nonatomic) double barButtonWidth;

- (struct CGSize { double x1; double x2; })_preferredTitleSizeForBarButtonItem:(id)arg1;
- (double)barButtonWidth;
- (struct CGSize { double x1; double x2; })preferredSizeForButtonBarItem:(id)arg1;
- (void)setBarButtonWidth:(double)arg1;

@end
