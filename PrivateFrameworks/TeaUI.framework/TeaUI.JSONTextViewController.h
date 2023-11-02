
@interface TeaUI.JSONTextViewController : UIViewController <UISearchControllerDelegate, UISearchResultsUpdating, UITextFieldDelegate, UITextViewDelegate> {
    void $__lazy_storage_$_doneBarButtonItem;
    void $__lazy_storage_$_nextTokenBarButtonItem;
    void $__lazy_storage_$_previousTokenBarButtonItem;
    void $__lazy_storage_$_resultsBarButtonItem;
    void $__lazy_storage_$_searchToolbar;
    void $__lazy_storage_$_textResizeBarButtonItem;
    void _textSize;
    void textParser;
    void textView;
}

@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, readonly) UIView *inputAccessoryView;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (void)done;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)inputAccessoryView;
- (void)nextToken;
- (void)previousToken;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (bool)textFieldShouldReturn:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willDismissSearchController:(id)arg1;
- (void)willPresentSearchController:(id)arg1;

@end
