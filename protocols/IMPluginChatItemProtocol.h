
@protocol IMPluginChatItemProtocol <NSObject>

@required

- (IMBalloonPluginDataSource *)dataSource;
- (bool)isFromMe;
- (NSString *)type;

@end
