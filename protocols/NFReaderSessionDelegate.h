
@protocol NFReaderSessionDelegate <NSObject>

@optional

- (void)readerSession:(NFReaderSession *)arg1 didDetectTags:(NSArray *)arg2;
- (void)readerSession:(NFReaderSession *)arg1 externalReaderFieldNotification:(NFFieldNotification *)arg2;
- (void)readerSessionDidEndUnexpectedly:(NFReaderSession *)arg1;
- (void)readerSessionDidEndUnexpectedly:(NFReaderSession *)arg1 reason:(NSError *)arg2;

@end
