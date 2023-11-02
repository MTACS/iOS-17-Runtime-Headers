
@interface UNTextInputNotificationAction : UNNotificationAction

@property (nonatomic, readonly, copy) NSString *textInputButtonTitle;
@property (nonatomic, readonly, copy) NSString *textInputPlaceholder;

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 icon:(id)arg4 textInputButtonTitle:(id)arg5 textInputPlaceholder:(id)arg6;
+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 options:(unsigned long long)arg3 textInputButtonTitle:(id)arg4 textInputPlaceholder:(id)arg5;

- (id)description;
- (bool)isEqual:(id)arg1;

@end
