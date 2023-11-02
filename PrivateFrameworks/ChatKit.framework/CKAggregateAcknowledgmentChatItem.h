
@interface CKAggregateAcknowledgmentChatItem : CKAssociatedMessageChatItem {
    long long  _latestAcknowledgmentType;
    bool  _overrideBalloonOrientationForPhotoGrid;
}

@property (readonly) UIColor *acknowledgmentImageColor;
@property (readonly, copy) NSString *acknowledgmentImageName;
@property (nonatomic, readonly, copy) NSArray *acknowledgments;
@property (nonatomic, readonly) BOOL balloonOrientation;
@property (readonly) Class balloonViewClass;
@property (nonatomic, readonly) long long fromMeAcknowledgmentType;
@property (nonatomic, readonly) bool includesFromMe;
@property (nonatomic, readonly) bool includesMultiple;
@property (nonatomic, readonly) long long latestAcknowledgmentType;
@property (nonatomic, readonly) bool latestIsFromMe;
@property (nonatomic) bool overrideBalloonOrientationForPhotoGrid;
@property (nonatomic, readonly, copy) NSString *serviceName;

- (id)_imAggregateAcknowledgmentChatItem;
- (id)acknowledgmentImageColor;
- (id)acknowledgmentImageName;
- (id)acknowledgments;
- (id)associatedChatItemGUID;
- (BOOL)balloonOrientation;
- (Class)balloonViewClass;
- (Class)cellClass;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (long long)fromMeAcknowledgmentType;
- (bool)includesFromMe;
- (bool)includesMultiple;
- (id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2;
- (bool)isEqual:(id)arg1;
- (long long)latestAcknowledgmentType;
- (bool)latestIsFromMe;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (bool)overrideBalloonOrientationForPhotoGrid;
- (id)serviceName;
- (void)setOverrideBalloonOrientationForPhotoGrid:(bool)arg1;
- (BOOL)transcriptOrientation;

@end
