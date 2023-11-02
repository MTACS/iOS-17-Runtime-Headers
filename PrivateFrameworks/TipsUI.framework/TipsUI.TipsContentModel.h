
@interface TipsUI.TipsContentModel : NSObject <TPSAppControllerDelegate> {
    void $__lazy_storage_$_featuredTipController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _collections;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _contentLoadErrorType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentCollection;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _currentTip;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _featuredCollection;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _featuredTip;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _hasLoaded;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _loading;
    void appController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  colorScheme;
    void contentDidUpdate;
    void currentTipList;
    void networkDidChangeToReachable;
    void prefetchingManager;
}

- (void).cxx_destruct;
- (void)appController:(id)arg1 loadingContent:(bool)arg2;
- (void)appControllerContentUpdated:(id)arg1;
- (void)appControllerNetworkStateDidChangeToReachable:(id)arg1;
- (id)init;

@end
