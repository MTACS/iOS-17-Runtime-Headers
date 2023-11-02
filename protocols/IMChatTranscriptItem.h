
@protocol IMChatTranscriptItem <NSObject>

@required

- (IMHandle *)handle;
- (bool)isFromMe;
- (IMServiceImpl *)service;
- (NSDate *)transcriptDate;
- (NSAttributedString *)transcriptText;
- (bool)wantsTail;

@end
