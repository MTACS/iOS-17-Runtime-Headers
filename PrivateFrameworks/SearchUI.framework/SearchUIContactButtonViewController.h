
@interface SearchUIContactButtonViewController : SearchUIButtonItemViewController <CNContactInlineActionsViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) SearchUIActionsViewBoxView *view;

- (void)contactInlineActionsViewController:(id)arg1 willPerformActionOfType:(id)arg2;
- (id)init;
- (void)setButtonItem:(id)arg1;
- (void)setCompact:(bool)arg1;

@end
