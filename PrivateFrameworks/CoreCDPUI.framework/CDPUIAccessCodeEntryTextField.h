
@interface CDPUIAccessCodeEntryTextField : UITextView <UITextViewDelegate> {
    <CDPUIAccessCodeEntryTextFieldDelegate> * _accessCodeInputDelegate;
    NSString * _placeholder;
    UITextView * _placeholderTextView;
    NSSet * _separatorDeleteLocations;
    NSSet * _separatorLocations;
}

@property (nonatomic) <CDPUIAccessCodeEntryTextFieldDelegate> *accessCodeInputDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isComplete;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, retain) UITextView *placeholderTextView;
@property (readonly) Class superclass;

+ (unsigned long long)accessKeyCharacterCount;
+ (unsigned long long)wrappingKeyCharacterCount;

- (void).cxx_destruct;
- (void)_handleMultiCharacterStringInput:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)_numberOfSeparators;
- (id)_sanitizeInputString:(id)arg1;
- (unsigned long long)_totalCharacterLimit;
- (id)accessCodeInputDelegate;
- (bool)enablesReturnKeyAutomatically;
- (bool)hasText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (bool)isComplete;
- (void)layoutSubviews;
- (id)placeholder;
- (id)placeholderTextView;
- (void)setAccessCodeInputDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPlaceholderTextView:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setupSeparatorLocations;
- (void)setupUI;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updatePlaceholderVisibility;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
