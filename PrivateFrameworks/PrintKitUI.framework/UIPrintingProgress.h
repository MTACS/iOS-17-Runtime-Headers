
@interface UIPrintingProgress : NSObject {
    UIAlertController * _alertController;
    id /* block */  _cancelHandler;
    bool  _creatingPDF;
    double  _displayTime;
    bool  _donePrinting;
    bool  _forceDisplayAsAlert;
    UIWindowScene * _hostingWindowScene;
    double  _lastPageUpdate;
    bool  _presentingAlert;
    NSString * _printerName;
    double  _progressAlertDelay;
    UIWindow * _progressAlertWindow;
    double  _startTime;
    UIPrintingProgressViewController * _viewController;
}

@property bool creatingPDF;
@property UIWindowScene *hostingWindowScene;
@property double lastPageUpdate;
@property double progressAlertDelay;
@property (retain) UIWindow *progressAlertWindow;
@property (readonly) NSString *title;

- (void).cxx_destruct;
- (void)_mainQueue_endProgress;
- (void)_mainQueue_hideProgressAnimated:(bool)arg1;
- (void)_mainQueue_presentProgressAlert;
- (void)_mainQueue_showProgress:(id)arg1 immediately:(bool)arg2;
- (void)_presentProgressAlert;
- (bool)creatingPDF;
- (void)endProgress;
- (void)hideProgressAnimated:(bool)arg1;
- (id)hostingWindowScene;
- (id)initPDFCreationWithHostingWindowScene:(id)arg1 cancelHandler:(id /* block */)arg2;
- (id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(bool)arg2 hostingWindowScene:(id)arg3 cancelHandler:(id /* block */)arg4;
- (double)lastPageUpdate;
- (double)nextPrintDelay;
- (double)progressAlertDelay;
- (id)progressAlertWindow;
- (void)progressCancel;
- (bool)progressVisible;
- (void)setCreatingPDF:(bool)arg1;
- (void)setHostingWindowScene:(id)arg1;
- (void)setLastPageUpdate:(double)arg1;
- (void)setPage:(long long)arg1 ofPage:(long long)arg2;
- (void)setPrinterInfoState:(int)arg1;
- (void)setProgressAlertDelay:(double)arg1;
- (void)setProgressAlertWindow:(id)arg1;
- (void)showProgress:(id)arg1 immediately:(bool)arg2;
- (id)title;

@end
