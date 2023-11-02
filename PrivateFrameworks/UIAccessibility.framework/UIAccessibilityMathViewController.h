
@interface UIAccessibilityMathViewController : UIViewController <WKNavigationDelegate> {
    NSDictionary * _mathDictionary;
    SCRCMathExpression * _mathExpression;
    UIAccessibilityMathWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *mathDictionary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (id)_htmlString;
- (void)_styleBarButtonItem:(id)arg1;
- (id)initWithMathDictionary:(id)arg1;
- (void)loadView;
- (id)mathDictionary;
- (void)viewDidLoad;

@end
