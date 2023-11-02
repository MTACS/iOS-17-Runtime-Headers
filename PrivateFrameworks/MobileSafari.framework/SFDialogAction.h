
@interface SFDialogAction : NSObject {
    long long  _actionType;
    long long  _activatingKeyboardShortcut;
    id /* block */  _customAction;
    bool  _isPreferredAction;
    NSString * _title;
}

@property (nonatomic, readonly) long long actionType;
@property (nonatomic, readonly) long long activatingKeyboardShortcut;
@property (nonatomic, readonly) bool hasCustomAction;
@property (nonatomic, readonly) bool isPreferredAction;
@property (nonatomic, readonly) NSString *title;

+ (id)actionWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3;
+ (id)actionWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3 isPreferredAction:(bool)arg4;

- (void).cxx_destruct;
- (long long)actionType;
- (long long)activatingKeyboardShortcut;
- (bool)hasCustomAction;
- (id)initWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3 isPreferredAction:(bool)arg4;
- (bool)isPreferredAction;
- (void)setCustomAction:(id /* block */)arg1;
- (id)title;
- (void)triggerCustomAction;

@end
