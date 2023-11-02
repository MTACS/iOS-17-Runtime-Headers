
@interface _LSStartupJournalledInstallNotification : NSObject <_LSStartupJournalledNotification> {
    int  _notification;
    bool  _plugins;
    NSArray * _proxies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int notification;
@property (nonatomic, readonly) bool plugins;
@property (nonatomic, readonly) NSArray *proxies;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dispatchToObserver:(id)arg1 forInstallProgressService:(id)arg2;
- (id)initWithNotification:(int)arg1 appProxies:(id)arg2 plugins:(bool)arg3;
- (int)notification;
- (bool)plugins;
- (id)proxies;

@end
