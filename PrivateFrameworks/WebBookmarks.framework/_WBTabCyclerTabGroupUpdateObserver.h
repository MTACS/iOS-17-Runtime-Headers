
@interface _WBTabCyclerTabGroupUpdateObserver : NSObject <WBTabGroupManagerObserver> {
    id /* block */  _handler;
    WBTabGroupManager * _tabGroupManager;
    NSTimer * _timeoutTimer;
    bool  _waitForTabGroups;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)observeTabGroupManager:(id)arg1 waitForTabGroups:(bool)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_timeout;
- (id)initWithTabGroupManager:(id)arg1 handler:(id /* block */)arg2;
- (void)startObserving;
- (void)tabGroupManagerDidUpdateTabGroups:(id)arg1;

@end
