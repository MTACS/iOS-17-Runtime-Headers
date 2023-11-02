
@interface ICNoteEditorPillOrnamentViewController : ICPillOrnamentViewController {
    UIToolbar * _toolbar;
}

@property (nonatomic, retain) UIToolbar *toolbar;
@property (nonatomic, retain) NSArray *toolbarItems;

- (void).cxx_destruct;
- (id)initWithRootViewController:(id)arg1;
- (void)setToolbar:(id)arg1;
- (void)setToolbarItems:(id)arg1;
- (id)toolbar;
- (id)toolbarItems;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
