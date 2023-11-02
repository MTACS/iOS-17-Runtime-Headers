
@interface _UIInputViewControllerOutput : NSObject <NSCopying, NSSecureCoding> {
    bool  _hasDictation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _inputModeListFromLocation;
    double  _inputModeListTouchBegan;
    long long  _inputModeListTouchPhase;
    struct CGPoint { 
        double x; 
        double y; 
    }  _inputModeListUpdatePoint;
    NSArray * _keyboardOutputs;
    NSString * _markedText;
    NSString * _primaryLanguage;
    bool  _proceedShouldReturn;
    bool  _requiresInputManagerSync;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRange;
    bool  _setMarkedText;
    bool  _shouldAdvanceInputMode;
    bool  _shouldAdvanceResponder;
    bool  _shouldDismiss;
    bool  _shouldPostReturnKeyNotification;
    long long  _source;
    bool  _unmarkText;
}

@property (nonatomic) bool hasDictation;
@property (nonatomic) struct CGPoint { double x1; double x2; } inputModeListFromLocation;
@property (nonatomic) double inputModeListTouchBegan;
@property (nonatomic) long long inputModeListTouchPhase;
@property (nonatomic) struct CGPoint { double x1; double x2; } inputModeListUpdatePoint;
@property (nonatomic, retain) NSArray *keyboardOutputs;
@property (nonatomic, copy) NSString *markedText;
@property (nonatomic, copy) NSString *primaryLanguage;
@property (nonatomic) bool proceedShouldReturn;
@property (nonatomic) bool requiresInputManagerSync;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property (nonatomic) bool setMarkedText;
@property (nonatomic) bool shouldAdvanceInputMode;
@property (nonatomic) bool shouldAdvanceResponder;
@property (nonatomic) bool shouldDismiss;
@property (nonatomic) bool shouldPostReturnKeyNotification;
@property (nonatomic) long long source;
@property (nonatomic) bool unmarkText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_currentKeyboardOutput;
- (void)_pushNewKeyboardOutput;
- (void)adjustTextPositionByCharacterOffset:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteBackward;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDictation;
- (id)initWithCoder:(id)arg1;
- (struct CGPoint { double x1; double x2; })inputModeListFromLocation;
- (double)inputModeListTouchBegan;
- (long long)inputModeListTouchPhase;
- (struct CGPoint { double x1; double x2; })inputModeListUpdatePoint;
- (void)insertText:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyboardOutputs;
- (id)markedText;
- (id)primaryLanguage;
- (bool)proceedShouldReturn;
- (bool)requiresInputManagerSync;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setHasDictation:(bool)arg1;
- (void)setInputModeList:(long long)arg1 touchBegan:(double)arg2 fromLocation:(struct CGPoint { double x1; double x2; })arg3 updatePoint:(struct CGPoint { double x1; double x2; })arg4;
- (void)setInputModeListFromLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInputModeListTouchBegan:(double)arg1;
- (void)setInputModeListTouchPhase:(long long)arg1;
- (void)setInputModeListUpdatePoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setKeyboardOutputs:(id)arg1;
- (bool)setMarkedText;
- (void)setMarkedText:(id)arg1;
- (void)setPrimaryLanguage:(id)arg1;
- (void)setProceedShouldReturn:(bool)arg1;
- (void)setRequiresInputManagerSync:(bool)arg1;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSetMarkedText:(bool)arg1;
- (void)setShouldAdvanceInputMode:(bool)arg1;
- (void)setShouldAdvanceResponder:(bool)arg1;
- (void)setShouldDismiss:(bool)arg1;
- (void)setShouldPostReturnKeyNotification:(bool)arg1;
- (void)setSource:(long long)arg1;
- (void)setUnmarkText:(bool)arg1;
- (bool)shouldAdvanceInputMode;
- (bool)shouldAdvanceResponder;
- (bool)shouldDismiss;
- (bool)shouldPostReturnKeyNotification;
- (long long)source;
- (bool)unmarkText;

@end
