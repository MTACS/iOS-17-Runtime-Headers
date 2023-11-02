
@interface SBCornerPencilPanGestureSettings : PTSettings {
    double  _cornerHorizontalEdgeLength;
    double  _cornerVerticalEdgeLength;
}

@property (nonatomic) double cornerHorizontalEdgeLength;
@property (nonatomic) double cornerVerticalEdgeLength;

+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;

- (double)cornerHorizontalEdgeLength;
- (double)cornerVerticalEdgeLength;
- (void)setCornerHorizontalEdgeLength:(double)arg1;
- (void)setCornerVerticalEdgeLength:(double)arg1;
- (void)setDefaultValues;

@end
