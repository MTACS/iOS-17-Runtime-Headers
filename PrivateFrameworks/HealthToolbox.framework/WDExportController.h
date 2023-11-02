
@interface WDExportController : NSObject {
    unsigned long long  _backgroundTask;
    NSURL * _exportFileURL;
    WDExportManager * _exportManager;
    UIViewController * _exportPresentingViewController;
    unsigned long long  _exportResult;
    UIView * _exportSourceView;
    bool  _isExporting;
}

- (void).cxx_destruct;
- (void)_beginExport;
- (void)_cleanUpExport;
- (void)_shareExportFileAndCleanUp;
- (bool)exportInProgress;
- (id)initWithProfile:(id)arg1;
- (void)verifyExportWithPresentingViewController:(id)arg1 shareSheetSourceView:(id)arg2;

@end
