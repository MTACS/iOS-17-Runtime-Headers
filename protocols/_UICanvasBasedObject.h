
@protocol _UICanvasBasedObject <NSObject>

@required

- (id)_initWithCanvas:(UIWindowScene *)arg1 options:(NSDictionary *)arg2;
- (UIWindowScene *)_intendedCanvas;
- (bool)_matchingOptions:(NSDictionary *)arg1;
- (NSDictionary *)_options;

@end
