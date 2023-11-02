
@interface VideosUI.LibLockupViewModel : VideosUI.LibViewModel {
    void _contextMenuItemViewModels;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isDownloadInProgress;
    void childrenUpdatedSubject;
    void contextMenuUpdateSubject;
    void didQueryDownloadInfo;
    void downloadButtonViewModel;
    void downloadStateObserver;
    void familyMemberId;
    void id;
    void isViewModelConstructed;
    void mediaEntity;
    void residesInMenuType;
}

@end
