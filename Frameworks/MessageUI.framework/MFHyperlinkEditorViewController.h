
@interface MFHyperlinkEditorViewController : UIViewController <UITextFieldDelegate> {
    id /* block */  _completion;
    UIButton * _linkEditorCancelButton;
    UITextField * _linkEditorTextField;
    UILabel * _linkEditorTitle;
    unsigned long long  _mode;
    bool  _shouldShowCloseButton;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIButton *linkEditorCancelButton;
@property (nonatomic, retain) UITextField *linkEditorTextField;
@property (nonatomic, retain) UILabel *linkEditorTitle;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) bool shouldShowCloseButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)dismissLinkEditor;
- (id)initWithTitle:(id)arg1 text:(id)arg2 mode:(unsigned long long)arg3 shouldShowCloseButton:(bool)arg4 completion:(id /* block */)arg5;
- (id)linkEditorCancelButton;
- (id)linkEditorTextField;
- (id)linkEditorTitle;
- (void)loadView;
- (unsigned long long)mode;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setCompletion:(id /* block */)arg1;
- (void)setLinkEditorCancelButton:(id)arg1;
- (void)setLinkEditorTextField:(id)arg1;
- (void)setLinkEditorTitle:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setShouldShowCloseButton:(bool)arg1;
- (bool)shouldShowCloseButton;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
