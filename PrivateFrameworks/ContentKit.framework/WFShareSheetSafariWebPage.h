
@interface WFShareSheetSafariWebPage : WFSafariWebPage {
    NSString * _javaScriptRunnerIdentifier;
    NSData * _selectionHTML;
    NSString * _selectionText;
}

@property (nonatomic, readonly, copy) NSString *javaScriptRunnerIdentifier;

+ (bool)supportsSecureCoding;
+ (id)webPageFromPreprocessingResult:(id)arg1 javaScriptRunnerIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 pageTitle:(id)arg2 selectionText:(id)arg3 selectionHTML:(id)arg4 documentHTML:(id)arg5 javaScriptRunnerIdentifier:(id)arg6;
- (id)javaScriptRunnerIdentifier;
- (id)selectionHTML;
- (id)selectionText;

@end
