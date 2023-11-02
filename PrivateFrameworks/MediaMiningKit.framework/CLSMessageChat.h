
@interface CLSMessageChat : NSObject {
    NSString * _accountID;
    NSString * _accountLogin;
    NSString * _chatIdentifier;
    NSString * _displayName;
    NSString * _engramID;
    NSString * _groupID;
    NSString * _guid;
    long long  _hasHadSuccessfulQuery;
    long long  _isArchived;
    long long  _isFiltered;
    NSString * _lastAddressedLocalHandle;
    long long  _lastReadMessageTimeStamp;
    NSString * _originalGroupID;
    NSArray * _persons;
    NSData * _properties;
    NSArray * _recipientHandles;
    NSString * _roomname;
    NSString * _serviceName;
    long long  _state;
    long long  _style;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSString *accountLogin;
@property (nonatomic, readonly) NSString *chatIdentifier;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *engramID;
@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) long long hasHadSuccessfulQuery;
@property (nonatomic, readonly) long long isArchived;
@property (nonatomic, readonly) long long isFiltered;
@property (nonatomic, readonly) NSString *lastAddressedLocalHandle;
@property (nonatomic, readonly) long long lastReadMessageTimeStamp;
@property (nonatomic, readonly) NSString *originalGroupID;
@property (nonatomic, readonly) NSArray *persons;
@property (nonatomic, readonly) NSData *properties;
@property (nonatomic, readonly) NSArray *recipientHandles;
@property (nonatomic, readonly) NSString *roomname;
@property (nonatomic, readonly) NSString *serviceName;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long style;

+ (void)enumerateAllChatsWithBlock:(id /* block */)arg1 progressBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)accountID;
- (id)accountLogin;
- (id)allMessageGUIDs;
- (id)chatIdentifier;
- (id)debugDescription;
- (id)displayName;
- (id)engramID;
- (void)enumerateAllAssetIdentifiersWithBlock:(id /* block */)arg1 historyLimit:(double)arg2 assetsMapping:(id)arg3;
- (void)enumerateAllAttachmentsWithBlock:(id /* block */)arg1;
- (void)enumerateAllMessagesWithBlock:(id /* block */)arg1;
- (id)groupID;
- (id)guid;
- (long long)hasHadSuccessfulQuery;
- (id)initWithChatRecord:(struct _IMDChatRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; struct __CFArray {} *x4; long long x5; struct _IMDMessageRecordStruct {} *x6; long long x7; }*)arg1;
- (long long)isArchived;
- (long long)isFiltered;
- (id)lastAddressedLocalHandle;
- (long long)lastReadMessageTimeStamp;
- (id)originalGroupID;
- (id)persons;
- (id)properties;
- (id)recipientHandles;
- (id)roomname;
- (id)serviceName;
- (long long)state;
- (long long)style;

@end
