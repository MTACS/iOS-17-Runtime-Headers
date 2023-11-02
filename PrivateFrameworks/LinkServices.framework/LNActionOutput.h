
@interface LNActionOutput : NSObject <NSCopying, NSSecureCoding> {
    LNConfirmationActionName * _confirmationActionName;
    bool  _deferred;
    LNDialog * _dialog;
    NSUUID * _identifier;
    LNAction * _nextAction;
    LNAction * _showOutputAction;
    long long  _showOutputActionHint;
    bool  _showPrompt;
    LNValue * _value;
    LNViewSnippet * _viewSnippet;
}

@property (nonatomic, readonly) LNConfirmationActionName *confirmationActionName;
@property (getter=isDeferred, nonatomic, readonly) bool deferred;
@property (nonatomic, readonly) LNDialog *dialog;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) LNAction *nextAction;
@property (nonatomic, readonly) LNAction *showOutputAction;
@property (nonatomic, readonly) long long showOutputActionHint;
@property (getter=shouldShowPrompt, nonatomic, readonly) bool showPrompt;
@property (nonatomic, readonly) LNValue *value;
@property (nonatomic, readonly) LNViewSnippet *viewSnippet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)confirmationActionName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dialog;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dialog:(id)arg2 viewSnippet:(id)arg3 value:(id)arg4 showOutputAction:(id)arg5 deferred:(bool)arg6 nextAction:(id)arg7 confirmationActionName:(id)arg8;
- (id)initWithIdentifier:(id)arg1 dialog:(id)arg2 viewSnippet:(id)arg3 value:(id)arg4 showOutputAction:(id)arg5 deferred:(bool)arg6 nextAction:(id)arg7 confirmationActionName:(id)arg8 showPrompt:(bool)arg9;
- (id)initWithIdentifier:(id)arg1 dialog:(id)arg2 viewSnippet:(id)arg3 value:(id)arg4 showOutputAction:(id)arg5 showOutputActionHint:(long long)arg6 deferred:(bool)arg7 nextAction:(id)arg8 confirmationActionName:(id)arg9 showPrompt:(bool)arg10;
- (bool)isDeferred;
- (bool)isEqual:(id)arg1;
- (id)nextAction;
- (bool)shouldShowPrompt;
- (id)showOutputAction;
- (long long)showOutputActionHint;
- (id)value;
- (id)viewSnippet;

@end
