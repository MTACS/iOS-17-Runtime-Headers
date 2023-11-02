
@interface GRDBInternal.Database : _TtCs12_SwiftObject {
    void $__lazy_storage_$_authorizer;
    void $__lazy_storage_$_internalStatementCache;
    void $__lazy_storage_$_observationBroker;
    void $__lazy_storage_$_publicStatementCache;
    void _isSuspended;
    void _lastSchemaVersion;
    void _readOnlyDepth;
    void busyCallback;
    void collations;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  configuration;
    void description;
    void functions;
    void isInsideTransactionBlock;
    void isRecordingSelectedRegion;
    void journalModeCache;
    void schemaCache;
    void selectedRegion;
    void sqliteConnection;
    void trace;
}

@end
