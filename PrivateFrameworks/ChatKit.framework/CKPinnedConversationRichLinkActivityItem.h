
@interface CKPinnedConversationRichLinkActivityItem : NSObject <CKPinnedConversationActivityItem> {
    double  _activityItemContentScale;
    NSString * _attachedContactItemIdentifier;
    IMChatContext * _chatContext;
    LPLinkView * _linkView;
    IMMessage * _message;
}

@property (nonatomic, readonly) bool activityItemAppearsWithAnimation;
@property (nonatomic, readonly) double activityItemContentScale;
@property (nonatomic, readonly) bool activityItemDisappearsWithAnimation;
@property (nonatomic, readonly) NSString *activityItemIdentifier;
@property (nonatomic, readonly) NSString *attachedContactItemIdentifier;
@property (nonatomic, readonly) IMChatContext *chatContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) LPLinkView *linkView;
@property (nonatomic, readonly) IMMessage *message;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)activityItemAppearsWithAnimation;
- (double)activityItemContentScale;
- (bool)activityItemDisappearsWithAnimation;
- (id)activityItemIdentifier;
- (id)activityItemView;
- (id)attachedContactItemIdentifier;
- (id)chatContext;
- (id)initWithLinkView:(id)arg1;
- (id)initWithMessage:(id)arg1 chatContext:(id)arg2 contentScale:(double)arg3 attachedContactItemIdentifier:(id)arg4;
- (id)linkPreviewContentView;
- (id)linkView;
- (id)message;

@end
