
@interface IMAttachmentMessagePartChatItem : IMMessagePartChatItem {
    bool  _needsReloadForCommSafetyStateChange;
    unsigned long long  _numberOfMomentSharePhotos;
    unsigned long long  _numberOfMomentShareSavedAssets;
    unsigned long long  _numberOfMomentShareVideos;
    NSString * _transferGUID;
    bool  _wantsAttachmentContiguous;
}

@property (nonatomic) bool needsReloadForCommSafetyStateChange;
@property (nonatomic) unsigned long long numberOfMomentSharePhotos;
@property (nonatomic) unsigned long long numberOfMomentShareSavedAssets;
@property (nonatomic) unsigned long long numberOfMomentShareVideos;
@property (nonatomic, readonly) bool parentChatIsSpam;
@property (nonatomic, readonly, copy) NSString *transferGUID;
@property (nonatomic, readonly) bool wantsAttachmentContiguous;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 transferGUID:(id)arg5 chatContext:(id)arg6;
- (id)_initWithItem:(id)arg1 text:(id)arg2 index:(long long)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 transferGUID:(id)arg5 chatContext:(id)arg6 visibleAssociatedMessageChatItems:(id)arg7;
- (bool)_wantsAttachmentContiguousForType:(id)arg1;
- (unsigned char)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)isAttachmentContiguousWithChatItem:(id)arg1;
- (id)layoutGroupIdentifier;
- (id)messageSummaryInfo;
- (bool)needsReloadForCommSafetyStateChange;
- (unsigned long long)numberOfMomentSharePhotos;
- (unsigned long long)numberOfMomentShareSavedAssets;
- (unsigned long long)numberOfMomentShareVideos;
- (bool)parentChatIsSpam;
- (id)replyContextPreviewChatItemForReply:(id)arg1 chatContext:(id)arg2;
- (void)setNeedsReloadForCommSafetyStateChange:(bool)arg1;
- (void)setNumberOfMomentSharePhotos:(unsigned long long)arg1;
- (void)setNumberOfMomentShareSavedAssets:(unsigned long long)arg1;
- (void)setNumberOfMomentShareVideos:(unsigned long long)arg1;
- (long long)syndicationBehavior;
- (id)transferGUID;
- (bool)wantsAttachmentContiguous;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
