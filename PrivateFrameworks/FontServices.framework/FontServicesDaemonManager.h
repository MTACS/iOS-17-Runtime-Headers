
@interface FontServicesDaemonManager : NSObject <FontServicesClientProtocol> {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)checkin:(id /* block */)arg1;
- (void)checkinForFontPicker:(id /* block */)arg1;
- (void)checkinForWebKitProcess:(id)arg1 reply:(id /* block */)arg2;
- (id)connection;
- (void)fontAddedInfo:(id)arg1 addedURLStrings:(id)arg2 removedURLStrings:(id)arg3;
- (void)fontChanged:(id)arg1 reply:(id /* block */)arg2;
- (void)requestFonts:(id)arg1 forClient:(id)arg2;
- (void)requestFonts:(id)arg1 reply:(id /* block */)arg2;
- (void)resetIssuedFontsFor:(id)arg1;
- (void)resumeAndShowAlertForSuspendedFontProviders;
- (void)scheduleFontFilesDeletion:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)synchronizeFontAssets:(id)arg1 reply:(id /* block */)arg2;
- (void)updatingUserFonts:(id /* block */)arg1;

@end
