
@interface EDSortableThreadProxy : NSObject {
    NSArray * _ccList;
    EDSortableThreadProxyAdditionalProperties * _properties;
    EDSortableThreadItem * _threadItem;
}

@property (nonatomic, copy) NSArray *ccList;
@property (readonly) long long conversationID;
@property (nonatomic) long long displayMessageGlobalID;
@property (nonatomic, copy) NSIndexSet *flagColors;
@property (nonatomic, retain) ECMessageFlags *flags;
@property (nonatomic) bool hasAttachments;
@property (nonatomic) bool hasUnflagged;
@property (nonatomic) bool isBlocked;
@property (nonatomic) bool isVIP;
@property (nonatomic, retain) NSArray *mailboxObjectIDs;
@property (nonatomic) unsigned long long numberOfMessagesInThread;
@property (nonatomic, retain) EDSortableThreadProxyAdditionalProperties *properties;
@property (nonatomic, retain) NSDate *readLaterDate;
@property (nonatomic) long long senderBucket;
@property (nonatomic, copy) NSArray *senderList;
@property (nonatomic, readonly, copy) <EDSortableMessage> *sortableItem;
@property (nonatomic, readonly, copy) EDSortableThreadItem *threadItem;
@property (nonatomic, readonly, copy) EMThreadObjectID *threadObjectID;
@property (nonatomic, copy) NSArray *toList;

- (void).cxx_destruct;
- (void)_addSortableDatesForSortDescriptors:(id)arg1;
- (void)_addSortableMessages:(id)arg1;
- (id)_targetForSelector:(SEL)arg1;
- (id)calculateChangeFromThread:(id)arg1;
- (id)ccList;
- (long long)conversationID;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithConversationID:(long long)arg1 sortableMessages:(id)arg2 originatingQuery:(id)arg3 mailboxTypeResolver:(id)arg4;
- (id)properties;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setCcList:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)sortableItem;
- (id)threadItem;
- (id)threadObjectID;
- (void)updateFromThread:(id)arg1 addingAdditionalInformation:(bool)arg2;

@end
