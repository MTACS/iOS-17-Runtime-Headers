
@protocol _INPBWorkoutCustomization <NSObject>

@required

- (NSString *)environment;
- (NSString *)focus;
- (bool)hasEnvironment;
- (bool)hasFocus;
- (void)setEnvironment:(NSString *)arg1;
- (void)setFocus:(NSString *)arg1;

@end
