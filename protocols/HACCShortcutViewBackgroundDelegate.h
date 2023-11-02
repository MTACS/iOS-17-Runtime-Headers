
@protocol HACCShortcutViewBackgroundDelegate <NSObject>

@required

- (NSObject<OS_dispatch_queue> *)backgroundUpdateQueue;
- (void)quickToggle:(unsigned long long)arg1 stateChanged:(bool)arg2;
- (bool)shouldDisplayQuickToggleFor:(unsigned long long)arg1;

@end
