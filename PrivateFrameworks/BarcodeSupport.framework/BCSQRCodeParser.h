
@interface BCSQRCodeParser : NSObject {
    BCSNotificationServiceConnection * _notificationServiceConnection;
    BCSParsingServiceConnection * _parsingServiceConnection;
}

@property (nonatomic, readonly) BCSNotificationServiceConnection *notificationServiceConnection;

+ (id)sharedParser;

- (void).cxx_destruct;
- (void)_parseMetadataObject:(id)arg1 reply:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)_payloadForMRCObject:(id)arg1;
- (id)_qrCodeFeatureFromImage:(struct CGImage { }*)arg1;
- (id)notificationServiceConnection;
- (void)parseCodeFromImage:(struct CGImage { }*)arg1 completionHandler:(id /* block */)arg2;
- (void)parseCodeFromMetadataMachineReadableCodeObject:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)parseCodeFromString:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)postNotificationAfterParsingCodeFromImage:(struct CGImage { }*)arg1 completion:(id /* block */)arg2;
- (void)setPreferredBundleIdentifier:(id)arg1 forURL:(id)arg2;
- (void)startQRCodeParsingSessionWithMetadataObject:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopQRCodeParsingSession;

@end
