
@interface WFReferenceLibraryViewController : UIReferenceLibraryViewController {
    <WFReferenceLibraryViewControllerDelegate> * _delegate;
}

@property (nonatomic) <WFReferenceLibraryViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
