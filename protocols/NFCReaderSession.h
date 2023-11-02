
@protocol NFCReaderSession <NSObject>

@required

- (NSString *)alertMessage;
- (void)beginSession;
- (void)invalidateSession;
- (void)invalidateSessionWithErrorMessage:(NSString *)arg1;
- (bool)isReady;
- (void)setAlertMessage:(NSString *)arg1;

@end
