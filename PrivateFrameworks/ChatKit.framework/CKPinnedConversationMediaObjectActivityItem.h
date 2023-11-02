
@interface CKPinnedConversationMediaObjectActivityItem : NSObject <CKPinnedConversationActivityItem> {
    double  _activityItemContentScale;
    NSString * _attachedContactItemIdentifier;
    CKMediaObject * _mediaObject;
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
@property (nonatomic, readonly) CKMediaObject *mediaObject;
@property (nonatomic, readonly) IMMessage *message;
@property (readonly) Class superclass;

+ (bool)_mediaTypeSupportedForPinningPreview:(int)arg1;
+ (id)previewImageForMediaObject:(id)arg1;
+ (id)previewableMediaObjectFromMessage:(id)arg1;

- (void).cxx_destruct;
- (bool)activityItemAppearsWithAnimation;
- (double)activityItemContentScale;
- (bool)activityItemDisappearsWithAnimation;
- (id)activityItemIdentifier;
- (id)activityItemView;
- (id)attachedContactItemIdentifier;
- (id)initWithMessage:(id)arg1 mediaObject:(id)arg2 contentScale:(double)arg3 attachedContactItemIdentifier:(id)arg4;
- (id)mediaObject;
- (id)message;

@end
