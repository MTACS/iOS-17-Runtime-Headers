
@interface WorkflowKit.AutoShortcutsAppsDataSource : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _autoShortcutApps;
    void autoShortcutsLoader;
    void cancellables;
    void userShortcutDataSource;
}

- (void).cxx_destruct;
- (void)appShortcutsChanged;
- (id)init;

@end
