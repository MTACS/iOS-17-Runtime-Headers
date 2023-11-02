
@interface IMSPISuggestionsObject : NSObject {
    NSString * _chatGUID;
    NSString * _displayName;
    NSArray * _participants;
}

@property (readonly) NSString *chatGUID;
@property (readonly) NSString *displayName;
@property (readonly) NSArray *participants;

- (void).cxx_destruct;
- (id)chatGUID;
- (id)description;
- (id)displayName;
- (id)initWithChatGuid:(id)arg1 displayName:(id)arg2 participants:(id)arg3;
- (id)participants;

@end
