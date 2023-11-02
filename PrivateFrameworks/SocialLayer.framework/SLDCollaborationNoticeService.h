
@interface SLDCollaborationNoticeService : NSObject <SLDCollaborationNoticeServiceProtocol, SLDService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (id)_applicationIdentifierForConnection:(id)arg1;
- (bool)_connShouldUnrestrictHighlightLookup:(id)arg1;
- (id)_handlesForAttributionIdentifiers:(id)arg1 appID:(id)arg2;
- (void)_send:(id)arg1 forAttributionIdentifiers:(id)arg2 reply:(id /* block */)arg3;
- (void)_sendClearNoticesTransmission:(id)arg1 forAttributionIdentifiers:(id)arg2 reply:(id /* block */)arg3;
- (void)sendClearNoticesFor:(id)arg1 forAttributionIdentifiers:(id)arg2 reply:(id /* block */)arg3;
- (void)sendHighlightEventData:(id)arg1 eventType:(long long)arg2 forAttributionIdentifiers:(id)arg3 reply:(id /* block */)arg4;

@end
