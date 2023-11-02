
@interface WFPrintActionUIKitUserInterface : WFActionUserInterface <UIPrintInteractionControllerDelegate, WFPrintActionUserInterface> {
    id /* block */  _completionHandler;
    UIPrintInteractionController * _printController;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPrintInteractionController *printController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *userInterfaceType;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)arg1;
- (id /* block */)completionHandler;
- (void)finishWithError:(id)arg1;
- (id)printController;
- (id)printInteractionControllerParentViewController:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setPrintController:(id)arg1;
- (void)showWithFile:(id)arg1 completionHandler:(id /* block */)arg2;

@end
