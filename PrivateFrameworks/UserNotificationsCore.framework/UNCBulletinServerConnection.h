
@interface UNCBulletinServerConnection : NSObject {
    NSXPCConnection * _bbServerConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)clientInterface;
+ (id)serverInterface;

- (void).cxx_destruct;
- (id)_ensureBBServerSettingsConnection;
- (void)_resetBBServerSettingsConnection;
- (id)activeSectionIDs;
- (id)asyncServerProxyObject;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)refreshAnnounceSettings;
- (void)refreshGlobalSettings;
- (void)refreshSectionInfo;
- (id)serverProxyObject;

@end
