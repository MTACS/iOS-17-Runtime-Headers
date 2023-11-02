
@interface PKAccountBillPaymentLearnMoreViewController : UIViewController <UIScrollViewDelegate, UITextViewDelegate> {
    PKAccount * _account;
    NSString * _customerAgreementLinkText;
    NSString * _customerAgreementText;
    UITextView * _customerAgreementTextView;
    NSArray * _footnoteLabels;
    NSArray * _footnotes;
    UIScrollView * _scrollView;
    UILabel * _subtitleLabel;
    NSString * _subtitleText;
    NSArray * _suggestionDescriptionLabels;
    NSArray * _suggestionDescriptions;
    PKAccountTermsAndConditionsController * _termsController;
    UILabel * _titleLabel;
    NSString * _titleText;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_customerAgreementAttributedString;
- (void)_reportEventForPassIfNecessary:(id)arg1;
- (void)doneButtonTapped;
- (id)initWithAccount:(id)arg1;
- (void)loadView;
- (void)scrollViewDidScroll:(id)arg1;
- (bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 interaction:(long long)arg4;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;

@end
