
@interface PRXButton : UIButton {
    bool  _active;
    long long  _proximityButtonType;
}

@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, readonly) long long proximityButtonType;

+ (id)buttonWithProximityType:(long long)arg1;
+ (id)buttonWithProximityType:(long long)arg1 usesLegacyStyling:(bool)arg2;

- (double)_minimumIntrinsicHeight;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isActive;
- (long long)proximityButtonType;
- (void)setActive:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)toggleActive;

@end
