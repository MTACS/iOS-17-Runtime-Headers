
@interface TSWPReferenceLibraryViewController : UIReferenceLibraryViewController {
    <TSWPReferenceLibraryViewControllerDelegate> * _delegate;
}

@property (nonatomic) <TSWPReferenceLibraryViewControllerDelegate> *delegate;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;

@end
