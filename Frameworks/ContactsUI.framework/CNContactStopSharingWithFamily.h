
@interface CNContactStopSharingWithFamily : CNContactAction

- (bool)canPerformAction;
- (bool)familySharedContainerExists;
- (bool)isDestructive;
- (void)performActionWithSender:(id)arg1;
- (id)title;
- (bool)wrapTitle;

@end
