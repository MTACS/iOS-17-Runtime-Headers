
@interface WeatherCore.SyncedDataManager : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  cachedSyncedData;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  defaultSyncedData;
    void lock;
    void syncedDataContextProvider;
}

@end
