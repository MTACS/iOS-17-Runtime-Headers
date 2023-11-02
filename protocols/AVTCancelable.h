
@protocol AVTCancelable <NSObject>

@required

- (void)cancel;
- (bool)isCanceled;

@end
