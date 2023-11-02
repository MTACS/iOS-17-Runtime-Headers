
@interface VoiceShortcuts.WidgetReloadingObserver : _TtCs12_SwiftObject <WFDatabaseObjectObserver> {
    void database;
    void debouncer;
}

- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)databaseResultDidChange:(id)arg1;
- (void)reloadTimelines;

@end
