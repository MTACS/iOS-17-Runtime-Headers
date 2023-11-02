
@interface CKPinnedConversationTapbackBubbleActivityItem : NSObject <CKPinnedConversationActivityItem> {
    double  _activityItemContentScale;
    NSString * _attachedContactItemIdentifier;
    IMMessage * _message;
}

@property (nonatomic, readonly) bool activityItemAppearsWithAnimation;
@property (nonatomic, readonly) double activityItemContentScale;
@property (nonatomic, readonly) bool activityItemDisappearsWithAnimation;
@property (nonatomic, readonly) NSString *activityItemIdentifier;
@property (nonatomic, readonly) NSString *attachedContactItemIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IMMessage *message;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)activityItemAppearsWithAnimation;
- (double)activityItemContentScale;
- (bool)activityItemDisappearsWithAnimation;
- (id)activityItemIdentifier;
- (id)activityItemView;
- (id)attachedContactItemIdentifier;
- (id)initWithMessage:(id)arg1 contentScale:(double)arg2 attachedContactItemIdentifier:(id)arg3;
- (id)message;

@end
