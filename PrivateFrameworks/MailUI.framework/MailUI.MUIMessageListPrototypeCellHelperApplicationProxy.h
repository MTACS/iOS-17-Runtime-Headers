
@interface MailUI.MUIMessageListPrototypeCellHelperApplicationProxy : NSObject <MessageListCellHelperApplicationProxy>

@property (nonatomic, readonly) MUIAddressListFormatter *addressListFormatter;
@property (nonatomic, readonly) bool showToCCIndicators;

- (id)addressListFormatter;
- (id)init;
- (bool)isMessageListCellObject:(id)arg1;
- (bool)showToCCIndicators;

@end
