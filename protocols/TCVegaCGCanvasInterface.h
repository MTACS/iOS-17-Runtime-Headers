
@protocol TCVegaCGCanvasInterface <JSExport>

@required

- (TCVegaCGContext *)getContext:(NSString *)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
