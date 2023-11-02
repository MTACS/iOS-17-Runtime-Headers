
@interface IMSPIChat : NSObject {
    NSString * _chatIdentifier;
    NSString * _displayName;
    NSString * _guid;
    NSArray * _handles;
    bool  _isBlackholed;
    bool  _isGroup;
    NSString * _serviceName;
}

@property (retain) NSString *chatIdentifier;
@property (retain) NSString *displayName;
@property (retain) NSString *guid;
@property (retain) NSArray *handles;
@property (readonly) bool isBlackholed;
@property bool isGroup;
@property (retain) NSString *serviceName;

+ (void)enumerateAllChatsWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)chatIdentifier;
- (id)description;
- (id)displayName;
- (void)enumerateAllAttachmentsWithBlock:(id /* block */)arg1;
- (void)enumerateAllMessagesWithBlock:(id /* block */)arg1;
- (id)guid;
- (id)handles;
- (id)initWithChatRecord:(struct _IMDChatRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; struct __CFArray {} *x4; long long x5; struct _IMDMessageRecordStruct {} *x6; long long x7; }*)arg1;
- (bool)isBlackholed;
- (bool)isGroup;
- (id)serviceName;
- (void)setChatIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHandles:(id)arg1;
- (void)setIsGroup:(bool)arg1;
- (void)setServiceName:(id)arg1;

@end
