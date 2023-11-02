
@interface _UIReplacementCandidate : NSObject {
    NSString * _displayedText;
    long long  _preferredPromptButton;
    long long  _preferredPromptStyle;
    UITextRange * _rangeInDocument;
    NSString * _revertText;
    NSArray * _textChoices;
    long long  _underlineStyle;
    NSArray * _underlines;
}

@property (nonatomic, retain) NSString *displayedText;
@property (nonatomic) long long preferredPromptButton;
@property (nonatomic) long long preferredPromptStyle;
@property (nonatomic, retain) UITextRange *rangeInDocument;
@property (nonatomic, retain) NSString *revertText;
@property (nonatomic, retain) NSArray *textChoices;
@property (nonatomic) long long underlineStyle;
@property (nonatomic, retain) NSArray *underlines;

+ (id)candidateForAutocorrection:(id)arg1 range:(id)arg2 underlineStyle:(long long)arg3 promptStyle:(long long)arg4 promptButton:(long long)arg5;
+ (id)candidateForAutocorrectionCandidate:(id)arg1 range:(id)arg2;
+ (id)candidateForFinalText:(id)arg1 revertText:(id)arg2 range:(id)arg3 underlineStyle:(long long)arg4 promptStyle:(long long)arg5 promptButton:(long long)arg6;

- (void).cxx_destruct;
- (id)displayedText;
- (id)initWithText:(id)arg1;
- (long long)preferredPromptButton;
- (long long)preferredPromptStyle;
- (id)rangeInDocument;
- (id)revertText;
- (void)setDisplayedText:(id)arg1;
- (void)setPreferredPromptButton:(long long)arg1;
- (void)setPreferredPromptStyle:(long long)arg1;
- (void)setRangeInDocument:(id)arg1;
- (void)setRevertText:(id)arg1;
- (void)setTextChoices:(id)arg1;
- (void)setUnderlineStyle:(long long)arg1;
- (void)setUnderlines:(id)arg1;
- (id)textChoices;
- (long long)underlineStyle;
- (id)underlines;

@end
