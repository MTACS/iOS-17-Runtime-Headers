
@protocol CSLPRFAppDataProvider <NSObject>

@required

- (<CSLPRFAppDataProviderDelegate> *)delegate;
- (void)loadAppsWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)loadAppsWithCompletion:(void *)arg1 completionQueue:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*, NSObject<OS_dispatch_queue> *
- (void)setDelegate:(id <CSLPRFAppDataProviderDelegate>)arg1;

@end
