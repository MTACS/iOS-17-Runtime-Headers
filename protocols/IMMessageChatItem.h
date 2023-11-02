
@protocol IMMessageChatItem <NSObject>

@required

- (bool)failed;
- (bool)isFromMe;
- (IMHandle *)sender;
- (NSDate *)time;

@end
