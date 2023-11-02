
@interface VoiceShortcuts.DatabaseClient : _TtCs12_SwiftObject <WFDatabaseObjectObserver> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _deletionsStream;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _entitiesStream;
    void database;
    void operations;
}

- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;

@end
