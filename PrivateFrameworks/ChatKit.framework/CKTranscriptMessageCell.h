
@interface CKTranscriptMessageCell : CKTranscriptCell {
    bool  _chatEligibleForContactImage;
    UIButton * _failureButton;
    bool  _isFromMe;
    bool  _isReply;
    bool  _isReplyContextPreview;
    bool  _wantsContactImageLayout;
}

@property (nonatomic) bool chatEligibleForContactImage;
@property (nonatomic) bool failed;
@property (nonatomic, retain) UIButton *failureButton;
@property (nonatomic, readonly) bool failureButtonAdjustsContentAlignmentRect;
@property (nonatomic) bool isFromMe;
@property (nonatomic) bool isReply;
@property (nonatomic) bool isReplyContextPreview;
@property (nonatomic) bool wantsContactImageLayout;

+ (double)failureButtonWidthPlusSpacing;

- (void).cxx_destruct;
- (bool)chatEligibleForContactImage;
- (id)contactImageView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contactImageViewFrame;
- (id)description;
- (bool)failed;
- (id)failureButton;
- (bool)failureButtonAdjustsContentAlignmentRect;
- (bool)isFromMe;
- (bool)isReply;
- (bool)isReplyContextPreview;
- (void)layoutSubviewsForContents;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setChatEligibleForContactImage:(bool)arg1;
- (void)setFailed:(bool)arg1;
- (void)setFailureButton:(id)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setIsReply:(bool)arg1;
- (void)setIsReplyContextPreview:(bool)arg1;
- (void)setWantsContactImageLayout:(bool)arg1;
- (bool)wantsContactImageLayout;

@end
