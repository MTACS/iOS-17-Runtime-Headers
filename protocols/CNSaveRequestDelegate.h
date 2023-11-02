
@protocol CNSaveRequestDelegate <NSObject>

@required

- (bool)saveRequest:(CNSaveRequest *)arg1 shouldProceedAfterError:(NSError *)arg2;

@end
