
@interface PKTextInputKeyboardSuppressionPolicyDelegate : NSObject <PKTextInputSupportedElementDelegate, _UIKeyboardSuppressionPolicyDelegate> {
    bool  _isQueryingLocaleIdentifier;
    bool  _suppressLocaleIdentifier;
    bool  isFloatingKeyboardVisible;
}

@property (nonatomic) bool _suppressLocaleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFloatingKeyboardVisible;
@property (readonly) Class superclass;

- (id)_recognitionLocaleIdentifier;
- (bool)_shouldSuppressAssistantBarForDelegate:(id)arg1;
- (bool)_shouldSuppressForDelegate:(id)arg1;
- (bool)_shouldSuppressKeyboardUIForDelegate:(id)arg1 checkSource:(bool)arg2;
- (bool)_suppressLocaleIdentifier;
- (bool)isFloatingKeyboardVisible;
- (bool)isSupportedForTextInputTraits:(id)arg1;
- (void)setIsFloatingKeyboardVisible:(bool)arg1;
- (void)set_suppressLocaleIdentifier:(bool)arg1;
- (void)updateKeyboardSuppressionPolicy;

@end
