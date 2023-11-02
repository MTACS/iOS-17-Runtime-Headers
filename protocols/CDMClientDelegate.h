
@protocol CDMClientDelegate <NSObject>

@optional

- (void)processCDMNluRequestCallback:(CDMNluResponse *)arg1;
- (void)processCDMNluRequestErrorCallback:(CDMNluRequestID *)arg1 error:(NSError *)arg2;

@end
