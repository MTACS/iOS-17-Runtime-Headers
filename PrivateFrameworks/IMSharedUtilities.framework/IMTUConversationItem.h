
@interface IMTUConversationItem : IMItem <IMRemoteObjectCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _avMode;
    unsigned long long  _flags;
}

@property (nonatomic) unsigned long long avMode;
@property (nonatomic) unsigned long long flags;
@property (nonatomic, readonly) NSDictionary *messageSummaryInfo;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

- (unsigned long long)avMode;
- (id)conversationUUID;
- (id)copyDictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)flags;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSender:(id)arg1 time:(id)arg2 guid:(id)arg3 messageSummaryInfo:(id)arg4;
- (bool)isFromMe;
- (id)messageSummaryInfo;
- (void)setAvMode:(unsigned long long)arg1;
- (void)setFlags:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (bool)_hasMessageChatItem;
- (id)_newChatItems;

@end
