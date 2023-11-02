
@interface VideosUI.LibDataSourceManager : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isLoading;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isOffline;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _libSources;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selectedLibSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showHomeSharingLibraryUnavailableAlert;
    void familyMemberServiceRequest;
    void menuDataCache;
}

- (void)handleAccountChanges;
- (void)handleHomeSharingUpdates;
- (void)handleNetworkChanges;

@end
