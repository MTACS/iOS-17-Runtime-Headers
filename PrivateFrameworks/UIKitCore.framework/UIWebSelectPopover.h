
@interface UIWebSelectPopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl> {
    UIWebSelectTableViewController * _tableViewController;
}

@property (nonatomic, retain) UIWebSelectTableViewController *_tableViewController;

- (id)_tableViewController;
- (void)_userActionDismissedPopover:(id)arg1;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(bool)arg5;
- (void)set_tableViewController:(id)arg1;

@end
