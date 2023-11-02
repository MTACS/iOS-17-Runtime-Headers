
@interface WFTriggerComposeViewController : WFComposeViewController {
    unsigned long long  _mode;
    <WFTriggerComposeViewControllerDelegate> * delegate;
}

@property (nonatomic) <WFTriggerComposeViewControllerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long mode;

+ (bool)canShowInputAction;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)didTapNext:(id)arg1;
- (void)dismissForTutorial:(bool)arg1 completionHandler:(id /* block */)arg2;
- (id)doneBarButtonItem;
- (id)emptyStateString;
- (id)initWithWorkflow:(id)arg1 mode:(unsigned long long)arg2 database:(id)arg3;
- (bool)isModalInPresentation;
- (unsigned long long)mode;
- (unsigned long long)navigationUpdateBehavior;
- (void)setDelegate:(id)arg1;
- (bool)showsDetailsButton;
- (Class)triggerInputType;
- (void)viewDidLoad;

@end
