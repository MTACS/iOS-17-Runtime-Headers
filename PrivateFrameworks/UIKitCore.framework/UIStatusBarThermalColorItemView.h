
@interface UIStatusBarThermalColorItemView : UIStatusBarItemView {
    bool  _sunlightMode;
    int  _thermalColor;
}

- (id)_color;
- (id)contentsImage;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end
