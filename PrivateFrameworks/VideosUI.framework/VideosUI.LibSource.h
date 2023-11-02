
@interface VideosUI.LibSource : _TtCs12_SwiftObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _hasExecutedMenuFetchOnce;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _menuItems;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _selectedMenuItem;
    void id;
    void isMPDownloadingFetchInProgress;
    void libMenuRequests;
    void ownerName;
    void type;
}

- (void)localMPMediaLibraryContentChanged;
- (void)localMPMediaLibraryDownloadingDidChange;
- (void)refreshRentalMenu;
- (void)sideBandContentChanged;

@end
