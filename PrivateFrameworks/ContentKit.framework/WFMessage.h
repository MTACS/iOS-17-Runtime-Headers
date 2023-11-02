
@interface WFMessage : NSObject <NSCopying, NSSecureCoding, WFNaming> {
    NSString * _content;
    NSString * _conversationID;
    NSArray * _recipientContactIDs;
    NSArray * _recipients;
    NSString * _senderContactID;
    NSArray * _senderHandles;
}

@property (nonatomic, readonly, copy) NSString *content;
@property (nonatomic, readonly, copy) NSString *conversationID;
@property (nonatomic, readonly, copy) NSArray *recipientContactIDs;
@property (nonatomic, readonly, copy) NSArray *recipients;
@property (nonatomic, readonly, copy) NSString *senderContactID;
@property (nonatomic, readonly, copy) NSArray *senderHandles;
@property (nonatomic, readonly, copy) NSString *wfName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (id)conversationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 conversationID:(id)arg2 recipientContactIDs:(id)arg3 recipients:(id)arg4 senderContactID:(id)arg5 senderHandles:(id)arg6;
- (id)recipientContactIDs;
- (id)recipients;
- (id)senderContactID;
- (id)senderHandles;
- (id)wfName;

@end
