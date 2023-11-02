
@interface SLCollaborationAttributionConversationDrawingMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _groupID;
    NSURL * _groupPhotoFileURL;
    bool  _isGroupConversation;
    NSArray * _recipientDrawingMetadata;
}

@property (nonatomic, readonly) NSString *groupID;
@property (nonatomic, readonly) NSURL *groupPhotoFileURL;
@property (nonatomic, readonly) bool isGroupConversation;
@property (nonatomic, readonly) NSArray *recipientDrawingMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)groupPhotoFileURL;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupPhotoFileURL:(id)arg1 recipientDrawingMetadata:(id)arg2 groupID:(id)arg3;
- (id)initWithRecipientDrawingMetadata:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGroupConversation;
- (id)recipientDrawingMetadata;

@end
