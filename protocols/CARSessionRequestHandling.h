
@protocol CARSessionRequestHandling <NSObject>

@optional

- (void)cancelRequests;
- (void)prepareForRemovingWiFiUUID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)startAdvertisingCarPlayControlForUSB;
- (void)startAdvertisingCarPlayControlForWiFiUUID:(NSString *)arg1;
- (void)startSessionWithHost:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: CARSessionRequestHost *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)startSessionWithHost:(void *)arg1 requestIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: CARSessionRequestHost *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)stoppedSessionForHostIdentifier:(NSString *)arg1;

@end
