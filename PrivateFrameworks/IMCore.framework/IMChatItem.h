
@interface IMChatItem : NSObject <NSCopying> {
    IMItem * _item;
}

@property (nonatomic, readonly, retain) NSString *balloonBundleID;
@property (nonatomic, readonly) bool canDelete;
@property (nonatomic, readonly) bool canEditMessageText;
@property (nonatomic, readonly) bool canReply;
@property (nonatomic, readonly) bool canRetract;
@property (getter=isHighlighted, nonatomic, readonly) bool highlighted;
@property (nonatomic, retain) IMItem *item;
@property (nonatomic, readonly) long long syndicationBehavior;
@property (nonatomic, readonly) long long syndicationType;
@property (nonatomic, readonly, copy) NSString *threadIdentifier;
@property (nonatomic, readonly) bool wasDetonated;

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1;
- (id)_item;
- (id)_parentItem;
- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)balloonBundleID;
- (bool)canDelete;
- (bool)canEditMessageText;
- (bool)canReply;
- (bool)canRetract;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isEditedMessageHistory;
- (bool)isHighlighted;
- (bool)isReplyContextPreview;
- (id)item;
- (bool)itemIsReply;
- (bool)itemIsReplyContextPreview;
- (bool)itemIsReplyCount;
- (bool)itemIsThreadOriginator;
- (bool)itemIsThreadOriginatorWithThreadIdentifier:(id*)arg1;
- (void)setItem:(id)arg1;
- (long long)syndicationBehavior;
- (long long)syndicationType;
- (id)threadGroupIdentifier;
- (id)threadIdentifier;
- (bool)wasDetonated;

@end
