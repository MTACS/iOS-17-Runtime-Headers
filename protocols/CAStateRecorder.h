
@protocol CAStateRecorder <NSObject>

@required

- (void)addElement:(CAStateElement *)arg1;

@optional

- (void)willAddLayer:(CALayer *)arg1;

@end
