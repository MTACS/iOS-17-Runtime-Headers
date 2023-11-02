
@interface NewsFeed.DebugFormatMainViewController : UISplitViewController <UISplitViewControllerDelegate> {
    void bindingViewController;
    void compilerViewController;
    void consoleViewController;
    void containerSegmentedViewController;
    void debuggerViewController;
    void editor;
    void editorContainerController;
    void editorViewController;
    void formatManager;
    void inventoryContainerController;
    void inventoryViewController;
    void layoutViewController;
    void logViewController;
    void metricViewController;
    void packages;
    void reloadState;
    void testViewController;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)primaryViewControllerForCollapsingSplitViewController:(id)arg1;
- (id)primaryViewControllerForExpandingSplitViewController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
