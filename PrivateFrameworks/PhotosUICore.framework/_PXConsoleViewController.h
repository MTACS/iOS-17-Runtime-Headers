
@interface _PXConsoleViewController : UIViewController {
    UIBarButtonItem * __shareBarButtonItem;
    UITextView * __textView;
    bool  _toolBarWasHidden;
}

@property (nonatomic, readonly) UIBarButtonItem *_shareBarButtonItem;
@property (nonatomic, readonly) UITextView *_textView;
@property (nonatomic) bool toolBarWasHidden;

- (void).cxx_destruct;
- (void)_presentSharingViewController:(id)arg1;
- (id)_shareBarButtonItem;
- (id)_textView;
- (void)appendOutput:(id)arg1;
- (id)init;
- (void)loadView;
- (void)setToolBarWasHidden:(bool)arg1;
- (bool)toolBarWasHidden;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
