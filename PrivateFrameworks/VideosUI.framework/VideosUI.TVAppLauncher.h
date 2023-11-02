
@interface VideosUI.TVAppLauncher : VUITVAppLauncher {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isLoading;
    void libDataSourceManager;
}

- (void).cxx_destruct;
- (void)configureAppWindow;
- (void)hideLoadingView;
- (id)init;
- (void)showLoadingView;

@end
