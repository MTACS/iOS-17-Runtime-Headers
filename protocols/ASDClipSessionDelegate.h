
@protocol ASDClipSessionDelegate <NSObject>

@required

- (void)clipSession:(ASDClipSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)clipSession:(ASDClipSession *)arg1 didUpdateProgress:(double)arg2;
- (void)clipSessionDidCompleteSuccessfully:(ASDClipSession *)arg1;

@optional

- (void)clipSessionDidInstallPlaceholder:(ASDClipSession *)arg1;

@end
