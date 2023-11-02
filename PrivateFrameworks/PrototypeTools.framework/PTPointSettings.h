
@interface PTPointSettings : PTSettings {
    double  _x;
    double  _y;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } pointValue;
@property (nonatomic) double x;
@property (nonatomic) double y;

+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;

- (id)drillDownSummary;
- (struct CGPoint { double x1; double x2; })pointValue;
- (void)setPointValue:(struct CGPoint { double x1; double x2; })arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (double)x;
- (double)y;

@end
