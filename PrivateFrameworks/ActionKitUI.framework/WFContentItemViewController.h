
@interface WFContentItemViewController : UITableViewController <UIDocumentInteractionControllerDelegate> {
    WFContentItem * _contentItem;
}

@property (nonatomic, readonly) WFContentItem *contentItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentItem;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)initWithContentItem:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;

@end
