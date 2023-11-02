
@protocol BCSNotificationServiceProtocol

@required

- (void)cancelNotificationsForCodeType:(long long)arg1;
- (void)didReceiveNotificationResponse:(UNNotificationResponse *)arg1;
- (void)notifyParsedCodeWithData:(void *)arg1 codePayload:(void *)arg2 shouldReplacePreviousNotifications:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: <BCSParsedData> *, <BCSCodePayload> *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, AWDBarcodeSupportCodeDetectedEvent *, void*
- (void)startNFCReaderWithDelegate:(id <BCSNFCReaderDelegate>)arg1;
- (void)stopNFCReader;

@end
