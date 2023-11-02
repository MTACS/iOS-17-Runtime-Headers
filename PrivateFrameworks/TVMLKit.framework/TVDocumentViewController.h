
@interface TVDocumentViewController : UIViewController {
    TVApplicationController * _appController;
    <TVDocumentViewControllerDelegate> * _delegate;
    struct { 
        bool respondsToWillUpdate; 
        bool respondsToDidUpdate; 
        bool respondsToHandleEvent; 
        bool respondsToDidFailWithError; 
        bool respondsToDidUpdateWithContext; 
    }  _delegateFlags;
    NSDictionary * _documentContext;
}

@property (nonatomic, readonly) TVApplicationController *appController;
@property (nonatomic) <TVDocumentViewControllerDelegate> *delegate;
@property (nonatomic, retain) NSDictionary *documentContext;

+ (id)viewControllerWithContext:(id)arg1 forAppController:(id)arg2;

- (void).cxx_destruct;
- (id)appController;
- (id)delegate;
- (void)didChangeDocumentContext;
- (void)didFailUpdateWithError:(id)arg1;
- (void)didUpdateDocument;
- (void)didUpdateWithContext:(id)arg1;
- (id)documentContext;
- (bool)handleEvent:(id)arg1 withElement:(id)arg2 targetResponder:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setDocumentContext:(id)arg1;
- (id)tvdvc_initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateUsingContext:(id)arg1;
- (void)willUpdateDocument;

@end
