
@protocol NCNotificationStaticContentProviding <NSObject>

@required

- (id /* block */)cancelAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (id /* block */)clearAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (id /* block */)closeAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (unsigned long long)coalesceCount;
- (UIView *)communicationAvatar;
- (long long)contentHidingEnforcement;
- (id)copyWithContentHidingEnforcement:(long long)arg1;
- (NSArray *)currentActions;
- (NSDate *)date;
- (id /* block */)defaultAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (<NCNotificationStaticContentProvidingDelegate> *)delegate;
- (NSString *)footerText;
- (NSArray *)icons;
- (NSAttributedString *)importantAttributedTextWithImageConfiguration:(UIImageConfiguration *)arg1;
- (NSString *)importantText;
- (MTVisualStylingProvider *)importantTextVisualStylingProvider;
- (NCNotificationAction *)inlineAction;
- (bool)isDateAllDay;
- (bool)isHidingContent;
- (bool)isNumberOfLinesInfinite;
- (NSArray *)menuActions;
- (id /* block */)nilAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (NSArray *)overriddenActions;
- (NSString *)primarySubtitleText;
- (NSString *)primaryText;
- (NSString *)secondaryText;
- (void)setDelegate:(id <NCNotificationStaticContentProvidingDelegate>)arg1;
- (void)setOverriddenActions:(NSArray *)arg1;
- (bool)showsTextInputOnAppearance;
- (UIImage *)thumbnail;
- (NSTimeZone *)timeZone;
- (NSString *)title;

@optional

- (NSArray *)interfaceActions;
- (NSString *)summaryText;

@end
