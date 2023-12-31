
@interface SAUIUserUtteranceView : SAAceView

@property (getter=afui_isKeyboardInitiated, setter=setAfui_KeyboardInitiated:, nonatomic) bool afui_keyboardInitiated;
@property (nonatomic, copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)userUtteranceView;
+ (id)userUtteranceViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setText:(id)arg1;
- (id)text;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

- (bool)afui_isKeyboardInitiated;
- (void)setAfui_KeyboardInitiated:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (bool)sruif_isUserUtterance;

@end
