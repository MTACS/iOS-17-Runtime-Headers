
@interface HDHAHealthPluginHostFeedGenerator : NSObject {
    HDHAHealthAppPluginHostConnection * _connection;
}

@property (nonatomic, retain) HDHAHealthAppPluginHostConnection *connection;

- (void).cxx_destruct;
- (id)connection;
- (void)handleJournaledSharingEntries:(id)arg1;
- (id)healthAppPluginHost;
- (id)init;
- (void)invalidateStoreCache;
- (void)runBackgroundGenerationForAllPlugins;
- (void)runBackgroundGenerationForPluginIdentifiers:(id)arg1 commitUrgentTransaction:(bool)arg2 feedItemsOnly:(bool)arg3;
- (void)setConnection:(id)arg1;
- (id)synchronousHealthAppPluginHost;

@end
