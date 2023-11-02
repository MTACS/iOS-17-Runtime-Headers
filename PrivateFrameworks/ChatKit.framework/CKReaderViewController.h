
@interface CKReaderViewController : UIViewController <UIWebViewDelegate> {
    <CKReaderViewControllerDelegate> * _delegate;
    NSString * _messageGUID;
    bool  _scrollPositionRestored;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRangeToRestore;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKReaderViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *messageGUID;
@property (getter=isScrollPositionRestored, nonatomic) bool scrollPositionRestored;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSAttributedString *text;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRangeToRestore;
@property (nonatomic, retain) UITextView *textView;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } visibleRange;

+ (id)readerScrollPositionCache;
+ (id)readerViewControllerForAudioChatItem:(id)arg1;
+ (id)readerViewControllerForChatItem:(id)arg1;

- (void).cxx_destruct;
- (void)_restoreScrollPositionIfNeeded;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isScrollPositionRestored;
- (void)loadView;
- (id)messageGUID;
- (void)setDelegate:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setScrollPositionRestored:(bool)arg1;
- (void)setText:(id)arg1;
- (void)setTextRangeToRestore:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextView:(id)arg1;
- (void)setVisibleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)text;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeToRestore;
- (id)textView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleRange;

@end
