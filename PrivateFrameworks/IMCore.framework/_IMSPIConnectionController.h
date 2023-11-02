
@interface _IMSPIConnectionController : NSObject

+ (id)sharedController;

- (void)clearChatCap;
- (void)setChatCap;
- (void)setChatSendCap;
- (void)setChatSendCapWithAttachments;

@end
