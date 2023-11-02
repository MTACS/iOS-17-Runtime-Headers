
@protocol IMReplyContext

@required

- (bool)replyIsFromMe;
- (NSString *)replyMessageGUID;

@end
