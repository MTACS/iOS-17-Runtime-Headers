
@interface PreviewTableViewController : UITableViewController {
    <LinkPreviewProvider> * _linkPreviewProvider;
    <PreviewTableViewControllerDelegate> * _previewDelegate;
}

@property (nonatomic) <LinkPreviewProvider> *linkPreviewProvider;
@property (nonatomic) <PreviewTableViewControllerDelegate> *previewDelegate;

- (void).cxx_destruct;
- (id)linkPreviewProvider;
- (id)previewDelegate;
- (void)setLinkPreviewProvider:(id)arg1;
- (void)setPreviewDelegate:(id)arg1;
- (id)tableView:(id)arg1 contextMenuConfigurationForRowAtIndexPath:(id)arg2 point:(struct CGPoint { double x1; double x2; })arg3;
- (id)tableView:(id)arg1 previewForDismissingContextMenuWithConfiguration:(id)arg2;
- (id)tableView:(id)arg1 previewForHighlightingContextMenuWithConfiguration:(id)arg2;
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;
- (void)viewWillDisappear:(bool)arg1;

@end
