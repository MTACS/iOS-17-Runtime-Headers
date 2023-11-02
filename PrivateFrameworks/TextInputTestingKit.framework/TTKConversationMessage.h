
@interface TTKConversationMessage : NSObject {
    NSString * _senderId;
    NSString * _text;
}

@property (nonatomic, readonly) NSString *senderId;
@property (nonatomic, readonly) NSString *text;

+ (id)fromJsonDict:(id)arg1;
+ (id)messageWithText:(id)arg1 senderId:(id)arg2;

- (void).cxx_destruct;
- (id)senderId;
- (id)text;
- (id)toJsonDict;

@end
