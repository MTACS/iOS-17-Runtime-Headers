
@protocol _UIScreenBasedObject <NSObject>

@required

- (id)_initWithScreen:(UIScreen *)arg1 options:(NSDictionary *)arg2;
- (UIScreen *)_intendedScreen;
- (bool)_matchingOptions:(NSDictionary *)arg1;
- (NSDictionary *)_options;

@end
