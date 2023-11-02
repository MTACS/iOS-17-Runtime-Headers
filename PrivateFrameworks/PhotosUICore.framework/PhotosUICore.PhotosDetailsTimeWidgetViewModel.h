
@interface PhotosUICore.PhotosDetailsTimeWidgetViewModel : PhotosUICore.PhotosDetailsWidgetViewModel {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _cloudLocalState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _date;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _timeZone;
    void fileName;
    void isSyndicatedGuestAsset;
    void isiCloudEnabled;
}

- (void).cxx_destruct;
- (void)clipBoardChangedWithPasteboardNotification:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;

@end
