
@interface _UIKeyShortcutHUDShortcutCellMetrics : NSObject {
    double  _cellWidth;
    double  _inputWidth;
    double  _modifiersWidth;
}

@property (nonatomic, readonly) double cellWidth;
@property (nonatomic, readonly) double inputWidth;
@property (nonatomic, readonly) double modifiersWidth;

+ (id)metricsWithCellWidth:(double)arg1 modifiersWidth:(double)arg2 inputWidth:(double)arg3;

- (double)cellWidth;
- (double)inputWidth;
- (double)modifiersWidth;

@end
