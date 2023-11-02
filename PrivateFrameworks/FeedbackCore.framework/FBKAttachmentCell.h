
@interface FBKAttachmentCell : UITableViewCell <FBKDiffableCell> {
    UILabel * _accessoryLabel;
    FBKAttachment * _attachment;
    UILabel * _attachmentDisplayName;
    UIImageView * _attachmentIcon;
    NSLayoutConstraint * _attachmentLabelSpacingToSuperview;
    long long  _attachmentType;
    UILabel * _doneLabel;
    long long  _gatherState;
    bool  _showsFileSize;
    bool  _showsIcon;
    NSLayoutConstraint * _superviewToImageSpacing;
    NSString * itemIdentifier;
}

@property (nonatomic, retain) UILabel *accessoryLabel;
@property (nonatomic, retain) FBKAttachment *attachment;
@property (nonatomic) UILabel *attachmentDisplayName;
@property (nonatomic) UIImageView *attachmentIcon;
@property (nonatomic) NSLayoutConstraint *attachmentLabelSpacingToSuperview;
@property (nonatomic) long long attachmentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *doneLabel;
@property (nonatomic) long long gatherState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *itemIdentifier;
@property (nonatomic) bool showsFileSize;
@property (nonatomic) bool showsIcon;
@property (readonly) Class superclass;
@property (nonatomic) NSLayoutConstraint *superviewToImageSpacing;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)accessoryLabel;
- (id)attachment;
- (id)attachmentDisplayName;
- (id)attachmentIcon;
- (id)attachmentLabelSpacingToSuperview;
- (long long)attachmentType;
- (void)awakeFromNib;
- (id)doneLabel;
- (long long)gatherState;
- (id)itemIdentifier;
- (void)setAccessoryLabel:(id)arg1;
- (void)setAccessoryText:(id)arg1;
- (void)setAttachment:(id)arg1;
- (void)setAttachmentDisplayName:(id)arg1;
- (void)setAttachmentIcon:(id)arg1;
- (void)setAttachmentLabelSpacingToSuperview:(id)arg1;
- (void)setAttachmentType:(long long)arg1;
- (void)setDoneLabel:(id)arg1;
- (void)setGatherState:(long long)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setShowsFileSize:(bool)arg1;
- (void)setShowsIcon:(bool)arg1;
- (void)setSuperviewToImageSpacing:(id)arg1;
- (void)showButtonState;
- (void)showDeferredState;
- (void)showDownloadNotPermittedState;
- (void)showDownloadUnavailableState;
- (void)showFailedToGatherState;
- (void)showGatheredState;
- (void)showGatheringState;
- (void)showNotGatheredState;
- (void)showUnsatisfiedState;
- (bool)showsFileSize;
- (bool)showsIcon;
- (id)superviewToImageSpacing;
- (void)updateAccessibilityLabel;
- (void)updateCell;
- (void)updateContentInsetWithValue:(double)arg1;
- (void)updateDeferredStateWith:(id)arg1;
- (void)updateSuperviewToAttachmentLabelSpacing:(double)arg1;

@end
