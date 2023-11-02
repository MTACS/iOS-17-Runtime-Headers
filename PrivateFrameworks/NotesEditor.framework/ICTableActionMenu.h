
@interface ICTableActionMenu : NSObject {
    void completion;
    void presentingBarButtonItem;
    void presentingViewController;
    void tableAttachmentViewController;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) UIBarButtonItem *presentingBarButtonItem;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) ICTableAttachmentViewController *tableAttachmentViewController;

+ (id)menuWithTableAttachmentViewController:(id)arg1 presentingViewController:(id)arg2 presentingBarButtonItem:(id)arg3 completion:(id /* block */)arg4;
+ (id)menuWithTableAttachmentViewController:(id)arg1 presentingViewController:(id)arg2 presentingBarButtonItem:(id)arg3 deferredChildren:(bool)arg4 completion:(id /* block */)arg5;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)init;
- (id)initWithTableAttachmentViewController:(id)arg1 presentingViewController:(id)arg2 presentingBarButtonItem:(id)arg3 completion:(id /* block */)arg4;
- (id)makeMenu;
- (id)menuSections;
- (id)presentingBarButtonItem;
- (id)presentingViewController;
- (void)setCompletion:(id /* block */)arg1;
- (void)setPresentingBarButtonItem:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setTableAttachmentViewController:(id)arg1;
- (id)tableAttachmentViewController;

@end
