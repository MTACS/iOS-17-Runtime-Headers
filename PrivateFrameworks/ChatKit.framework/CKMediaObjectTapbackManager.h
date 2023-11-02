
@interface CKMediaObjectTapbackManager : NSObject <PXTapbackStatusManager> {
    CKAggregateAttachmentMessagePartChatItem * _chatItem;
    UIView<CKGradientReferenceView> * _gradientReferenceView;
    bool  _invertTapbackTailDirection;
    bool  _originatedFromGridView;
}

@property (nonatomic, retain) CKAggregateAttachmentMessagePartChatItem *chatItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) Class decorationViewClass;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool invertTapbackTailDirection;
@property (nonatomic) bool originatedFromGridView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)chatItem;
- (Class)decorationViewClass;
- (id)gradientReferenceView;
- (bool)hasTapbacksForAsset:(id)arg1;
- (bool)invertTapbackTailDirection;
- (bool)originatedFromGridView;
- (void)setChatItem:(id)arg1;
- (void)setGradientReferenceView:(id)arg1;
- (void)setInvertTapbackTailDirection:(bool)arg1;
- (void)setOriginatedFromGridView:(bool)arg1;
- (id)tapbackUserDataForAsset:(id)arg1 previousAsset:(id)arg2;

@end
