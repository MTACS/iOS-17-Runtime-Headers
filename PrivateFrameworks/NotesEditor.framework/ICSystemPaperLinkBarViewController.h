
@interface ICSystemPaperLinkBarViewController : UIViewController {
    void addLinkButton;
    void addLinkClient;
    void attachmentWasAddedObservation;
    void attachmentWasDeletedObservation;
    void blurView;
    void lastFetchedFilteredLinks;
    void linkController;
    void linkControllerDelegate;
    void linkDescriptionLabel;
    void noteEditorViewController;
}

- (void).cxx_destruct;
- (void)didTapAddLinkButtonWithButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNoteEditorViewController:(id)arg1 textView:(id)arg2;
- (void)refresh;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
