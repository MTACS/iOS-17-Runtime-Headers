
@protocol BKSHIDEventBaseAttributeSubsetProviding <NSObject>

@required

- (BKSHIDEventDisplay *)display;
- (BKSHIDEventDeferringEnvironment *)environment;
- (BKSHIDEventDeferringToken *)token;

@end
