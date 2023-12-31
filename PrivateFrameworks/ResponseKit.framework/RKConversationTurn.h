
@interface RKConversationTurn : NSObject {
    NSString * _senderId;
    NSString * _text;
    NSDate * _timestamp;
}

@property (readonly) NSString *senderId;
@property (readonly) NSString *text;
@property (readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (id)initWithString:(id)arg1 senderID:(id)arg2 timestamp:(id)arg3;
- (id)senderId;
- (id)text;
- (id)timestamp;

@end
