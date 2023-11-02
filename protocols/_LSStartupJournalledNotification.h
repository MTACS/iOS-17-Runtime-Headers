
@protocol _LSStartupJournalledNotification <NSObject>

@required

- (void)dispatchToObserver:(LSInstallProgressObserver *)arg1 forInstallProgressService:(_LSInstallProgressService *)arg2;

@end
