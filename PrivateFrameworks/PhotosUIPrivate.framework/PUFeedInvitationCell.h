
@interface PUFeedInvitationCell : PUFeedCell <PXSharedAlbumInvitationViewDelegate> {
    UILabel * _dateLabel;
    PXSharedAlbumHeaderView * _headerView;
    PXFeedInvitationSectionInfo * _invitationSectionInfo;
    PXSharedAlbumInvitationView * _invitationView;
    bool  _showFooter;
    bool  _showHeader;
    bool  _useInPopover;
}

@property (nonatomic, retain) UILabel *dateLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXSharedAlbumHeaderView *headerView;
@property (nonatomic, retain) PXFeedInvitationSectionInfo *invitationSectionInfo;
@property (nonatomic, retain) PXSharedAlbumInvitationView *invitationView;
@property (nonatomic) bool showFooter;
@property (nonatomic) bool showHeader;
@property (readonly) Class superclass;
@property (nonatomic) bool useInPopover;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (id)_delegate;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateColors;
- (void)_updateDate;
- (void)_updateFooter;
- (void)_updateHeaderView;
- (void)_updateInvitationView;
- (id)dateLabel;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invitationSectionInfo;
- (id)invitationView;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDateLabel:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInvitationSectionInfo:(id)arg1;
- (void)setInvitationView:(id)arg1;
- (void)setShowFooter:(bool)arg1;
- (void)setShowHeader:(bool)arg1;
- (void)setUseInPopover:(bool)arg1;
- (void)sharedAlbumInvitationView:(id)arg1 didAccept:(bool)arg2;
- (void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1;
- (bool)showFooter;
- (bool)showHeader;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (bool)useInPopover;

@end
