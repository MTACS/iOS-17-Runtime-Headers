
@interface PKInkingTool : PKTool

@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) PKInk *ink;
@property (nonatomic, readonly) NSString *inkType;
@property (nonatomic, readonly) long long requiredContentVersion;
@property (nonatomic, readonly) double width;

+ (double)_calculateEdgeWidthForWeight:(double)arg1 type:(id)arg2;
+ (double)_calculateWidthForWeight:(double)arg1 type:(id)arg2;
+ (void)_computeWeightInfoMapFor:(id)arg1 in:(void*)arg2;
+ (struct { struct _PKStrokePoint { double x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; double x_1_1_3; double x_1_1_4; double x_1_1_5; double x_1_1_6; double x_1_1_7; double x_1_1_8; double x_1_1_9; double x_1_1_10; } x1; bool x2; long long x3; double x4; double x5; double x6; double x7; id x8; unsigned long long x9; })_contextForStroke:(id)arg1 weight:(double)arg2 type:(id)arg3;
+ (bool)_isUsingSystemColorPicker;
+ (double)_weightForWidth:(double)arg1 type:(id)arg2;
+ (void*)_weightInfoMap;
+ (double)_widthForWeight:(double)arg1 type:(id)arg2;
+ (id)behaviorForInkType:(id)arg1;
+ (id)convertColor:(id)arg1 fromUserInterfaceStyle:(long long)arg2 to:(long long)arg3;
+ (double)defaultWidthForInkType:(id)arg1;
+ (double)maximumWidthForInkType:(id)arg1;
+ (double)minimumWidthForInkType:(id)arg1;

- (id)color;
- (id)description;
- (id)initWithInk:(id)arg1 width:(double)arg2;
- (id)initWithInkType:(id)arg1 color:(id)arg2;
- (id)initWithInkType:(id)arg1 color:(id)arg2 width:(double)arg3;
- (id)inkType;
- (long long)requiredContentVersion;
- (double)width;

@end
