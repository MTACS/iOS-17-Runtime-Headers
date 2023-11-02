
@interface AUServiceAdapter : NSObject <AUServiceProtocol, FudPluginDelegate> {
    NSXPCConnection * _activeConnection;
    <FudPlugin> * _updater;
}

@property (nonatomic) NSXPCConnection *activeConnection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <FudPlugin> *updater;

+ (id)sharedInstance;

- (id)_init;
- (void)accessoryDisconnected:(id)arg1;
- (id)activeConnection;
- (void)applyFirmwareWithOptions:(id)arg1;
- (void)bootstrapWithOptions:(id)arg1;
- (void)deviceClassAttached:(id)arg1 options:(id)arg2 withReply:(id /* block */)arg3;
- (void)didApply:(bool)arg1 info:(id)arg2 error:(id)arg3;
- (void)didBootstrap:(bool)arg1 info:(id)arg2 error:(id)arg3;
- (void)didDownload:(bool)arg1 info:(id)arg2 error:(id)arg3;
- (void)didFind:(bool)arg1 info:(id)arg2 updateAvailable:(bool)arg3 needsDownload:(bool)arg4 error:(id)arg5;
- (void)didFinish:(bool)arg1 info:(id)arg2 error:(id)arg3;
- (void)didPrepare:(bool)arg1 info:(id)arg2 error:(id)arg3;
- (void)downloadFirmwareWithOptions:(id)arg1;
- (void)findFirmwareWithOptions:(id)arg1 remote:(bool)arg2;
- (void)finishWithOptions:(id)arg1;
- (bool)hasActiveConnection;
- (void)issueNotification:(id)arg1;
- (void)log:(int)arg1 format:(id)arg2;
- (void)logv:(int)arg1 format:(id)arg2 arguments:(char *)arg3;
- (void)personalizationRequest:(id)arg1;
- (void)personalizationResponse:(id)arg1 response:(id)arg2 status:(id)arg3;
- (void)prepareFirmwareWithOptions:(id)arg1;
- (void)progress:(double)arg1;
- (void)queryDeviceList:(id /* block */)arg1;
- (void)reportAnalytics:(id)arg1 info:(id)arg2;
- (void)setActiveConnection:(id)arg1;
- (id)updater;

@end
