
@interface WFDialogButton : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)cancelButton;
+ (id)defaultButtonWithTitle:(id)arg1;
+ (id)doneButton;
+ (id)okButton;
+ (id)selectButton;
+ (id)startButton;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 style:(long long)arg3;
- (id)initWithTitle:(id)arg1 style:(long long)arg2;
- (long long)style;
- (id)title;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)smartPromptIntentButton;

@end
