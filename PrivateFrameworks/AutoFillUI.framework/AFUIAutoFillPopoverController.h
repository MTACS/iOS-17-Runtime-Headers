
@interface AFUIAutoFillPopoverController : UIViewController <UIContextMenuInteractionDelegate> {
    NSObject<AFUIAutoFillContentController> * _contentController;
    UIContextMenuInteraction * _contextMenuInteraction;
    RTIDocumentState * _documentState;
    RTIDocumentTraits * _documentTraits;
    UIMenu * _menu;
    <AFUIModalUIDelegate> * _modalUIDelegate;
    id /* block */  _performTextOperations;
}

@property (retain) NSObject<AFUIAutoFillContentController> *contentController;
@property (retain) UIContextMenuInteraction *contextMenuInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RTIDocumentState *documentState;
@property (nonatomic, retain) RTIDocumentTraits *documentTraits;
@property (readonly) unsigned long long hash;
@property (retain) UIMenu *menu;
@property (nonatomic) <AFUIModalUIDelegate> *modalUIDelegate;
@property (nonatomic, copy) id /* block */ performTextOperations;
@property (readonly) Class superclass;

+ (id)presentAsPopoverFromWindow:(id)arg1 documentTraits:(id)arg2 documentState:(id)arg3 modalUIDelegate:(id)arg4 textOperationsHandler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)_displayMenuForContentController:(id)arg1;
- (void)_presentViewControllerForAutoFillMode:(unsigned long long)arg1;
- (void)_removeFromSuperview;
- (id)contentController;
- (id)contextMenuInteraction;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)dismissMenu;
- (id)documentState;
- (void)documentStateChanged:(id)arg1;
- (id)documentTraits;
- (bool)hasSuggestions;
- (id)initWithDocumentTraits:(id)arg1 documentState:(id)arg2 keyboardOutputHandler:(id /* block */)arg3;
- (id)initWithDocumentTraits:(id)arg1 documentState:(id)arg2 textOperationsHandler:(id /* block */)arg3;
- (id)menu;
- (id)modalUIDelegate;
- (id /* block */)performTextOperations;
- (void)presentContacts;
- (void)presentCreditCards;
- (void)presentPassword;
- (void)setContentController:(id)arg1;
- (void)setContextMenuInteraction:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setDocumentTraits:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setModalUIDelegate:(id)arg1;
- (void)setPerformTextOperations:(id /* block */)arg1;
- (void)viewDidLoad;

@end
