
@protocol BRCancellable <NSObject>

@required

- (oneway void)invalidate;

@end
