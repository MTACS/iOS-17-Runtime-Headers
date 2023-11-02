
@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl> {
    struct RetainPtr<WKSelectTableViewController> { 
        void *m_ptr; 
    }  _tableViewController;
}

@property (nonatomic, readonly) UITableViewController *tableViewController;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_userActionDismissedPopover:(id)arg1;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithView:(id)arg1 hasGroups:(bool)arg2;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(bool)arg3;
- (id)tableViewController;

@end
