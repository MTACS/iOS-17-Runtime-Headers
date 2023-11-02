
@protocol EMMailboxBuilder <NSObject>

@required

- (bool)canContainMessages;
- (bool)descriptionUsesRealName;
- (EMMailbox *)parent;
- (void)setCanContainMessages:(bool)arg1;
- (void)setDescriptionUsesRealName:(bool)arg1;
- (void)setParent:(EMMailbox *)arg1;

@end
