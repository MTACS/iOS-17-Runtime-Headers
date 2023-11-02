
@interface HUSimpleItemModuleTableViewController : HUItemTableViewController <UITextViewDelegate> {
    id /* block */  _moduleControllerBuilder;
    NSArray * _moduleControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ moduleControllerBuilder;
@property (nonatomic, readonly) NSArray *moduleControllers;
@property (readonly) Class superclass;

+ (unsigned long long)updateMode;

- (void).cxx_destruct;
- (void)_updateTitle;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)dismissTextViewController;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)initWithTableViewStyle:(long long)arg1 moduleCreator:(id /* block */)arg2 moduleControllerBuilder:(id /* block */)arg3;
- (id /* block */)moduleControllerBuilder;
- (id)moduleControllers;
- (void)setModuleControllerBuilder:(id /* block */)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewDidLayoutSubviews;

@end
