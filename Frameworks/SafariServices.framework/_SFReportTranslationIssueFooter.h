
@interface _SFReportTranslationIssueFooter : UICollectionReusableView <UITextViewDelegate> {
    <_SFReportTranslationIssueFooterDelegate> * _delegate;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFReportTranslationIssueFooterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)createTextViewForFooter;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;

@end
