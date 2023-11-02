
@protocol LSInstallProgressProtocol <NSObject>

@required

- (void)_lsPing:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)addObserver;
- (void)createInstallProgressForApplication:(void *)arg1 withPhase:(void *)arg2 andPublishingString:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: LSApplicationProxy *, unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)installationEndedForApplication:(NSString *)arg1 withState:(unsigned long long)arg2;
- (void)installationFailedForApplication:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)removeObserver;
- (void)sendNotification:(void *)arg1 forApplicationWithBundleIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: int, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendNotification:(int)arg1 forApplications:(NSArray *)arg2 withPlugins:(bool)arg3;
- (void)setProgressProportionsByPhase:(void *)arg1 forInstallOfApplicationWithIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
