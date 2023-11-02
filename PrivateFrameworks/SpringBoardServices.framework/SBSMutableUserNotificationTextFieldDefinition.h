
@interface SBSMutableUserNotificationTextFieldDefinition : SBSUserNotificationTextFieldDefinition

@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (nonatomic) long long keyboardType;
@property (nonatomic) unsigned long long maxLength;
@property (getter=isSecure, nonatomic) bool secure;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setAutocapitalizationType:(long long)arg1;
- (void)setAutocorrectionType:(long long)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setMaxLength:(unsigned long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setValue:(id)arg1;

@end
