
@interface SBSMutableUserNotificationButtonDefinition : SBSUserNotificationButtonDefinition

@property (nonatomic) bool isPreferredButton;
@property (nonatomic) int presentationStyle;
@property (nonatomic, copy) NSString *title;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setIsPreferredButton:(bool)arg1;
- (void)setPresentationStyle:(int)arg1;
- (void)setTitle:(id)arg1;

@end
