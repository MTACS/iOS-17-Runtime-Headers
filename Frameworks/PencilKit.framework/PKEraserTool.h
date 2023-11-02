
@interface PKEraserTool : PKTool

@property (nonatomic, readonly) double _weight;
@property (nonatomic, readonly) long long eraserType;
@property (nonatomic, readonly) double width;

+ (double)defaultWidthForEraserType:(long long)arg1;
+ (double)maximumWidthForEraserType:(long long)arg1;
+ (double)minimumWidthForEraserType:(long long)arg1;

- (bool)_isFixedWidthBitmap;
- (double)_weight;
- (long long)eraserType;
- (id)initWithEraserType:(long long)arg1;
- (id)initWithEraserType:(long long)arg1 weight:(double)arg2;
- (id)initWithEraserType:(long long)arg1 width:(double)arg2;
- (void)setWidth:(double)arg1;
- (double)width;

@end
