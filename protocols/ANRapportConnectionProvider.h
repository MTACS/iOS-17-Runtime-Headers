
@protocol ANRapportConnectionProvider <ANConnectionProvider>

@required

- (NSError *)activateLinkWithOptions:(unsigned long long)arg1;
- (void)activateLinkWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addDeviceDelegate:(id <ANRapportConnectionDeviceDelegate>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)deactivateLinkWithOptions:(unsigned long long)arg1;
- (NSArray *)devices;
- (RPCompanionLinkDevice *)localDevice;
- (void)registerDailyRequest:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, NSDictionary *, id /* block */, void*
- (void)sendDailyRequest:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: RPCompanionLinkDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)sendHomeLocationStatusRequestToDevice:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: RPCompanionLinkDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (NSError *)sendMessage:(void *)arg1 device:(void *)arg2 responseHandler:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, RPCompanionLinkDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RPCompanionLinkClient *, NSError *, void*

@end
