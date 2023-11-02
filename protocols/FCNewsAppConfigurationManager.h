
@protocol FCNewsAppConfigurationManager <NSObject>

@required

- (void)addAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;
- (<FCNewsAppConfiguration> *)appConfiguration;
- (void)fetchAppConfigurationIfNeededWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCNewsAppConfiguration> *, NSError *, void*
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCNewsAppConfiguration> *, NSError *, void*
- (<FCNewsAppConfiguration> *)possiblyUnfetchedAppConfiguration;
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(void *)arg1 refreshCompletion:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCNewsAppConfiguration> *, NSError *, void*
- (void)removeAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;

@optional

- (NSString *)feldsparID;
- (void)fetchAppWidgetConfigurationWithAdditionalFields:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCNewsAppConfiguration> *, NSDictionary *, NSError *, void*
- (<FCNewsAppConfiguration> *)fetchedAppConfiguration;
- (<FCNewsAppConfiguration><FCJSONEncodableObjectProviding> *)jsonEncodableAppConfiguration;
- (NSArray *)segmentSetIDs;
- (NSArray *)treatmentIDs;

@end
