
@interface _UIKeyShortcutHUDShortcutColumnMetrics : NSObject {
    double  _columnWidth;
    double  _inputWidth;
    double  _modifiersWidth;
}

@property (nonatomic, readonly) double columnWidth;
@property (nonatomic, readonly) double inputWidth;
@property (nonatomic, readonly) double modifiersWidth;

+ (id)metricsWithColumnWidth:(double)arg1 modifiersWidth:(double)arg2 inputWidth:(double)arg3;

- (double)columnWidth;
- (double)inputWidth;
- (double)modifiersWidth;

@end
