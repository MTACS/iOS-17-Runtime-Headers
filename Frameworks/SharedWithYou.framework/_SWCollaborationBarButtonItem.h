
@interface _SWCollaborationBarButtonItem : UIBarButtonItem <UIPopoverPresentationControllerDelegate> {
    _SWCollaborationButtonView * _collaborationButtonView;
}

@property (nonatomic) unsigned long long activeParticipantCount;
@property (nonatomic, retain) <UICloudSharingControllerDelegate> *cloudSharingControllerDelegate;
@property (nonatomic, retain) _SWCollaborationButtonView *collaborationButtonView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SWHighlight *highlight;
@property (nonatomic) bool isContentShared;
@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)activeParticipantCount;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (id)cloudSharingControllerDelegate;
- (id)collaborationButtonView;
- (void)dismissPopoverAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)highlight;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollaborationButtonView:(id)arg1;
- (id)initWithHighlight:(id)arg1;
- (id)initWithHighlight:(id)arg1 detailViewListContent:(id)arg2;
- (id)initWithItemProvider:(id)arg1;
- (bool)isContentShared;
- (id)itemProvider;
- (void)setActiveParticipantCount:(unsigned long long)arg1;
- (void)setCloudSharingControllerDelegate:(id)arg1;
- (void)setCollaborationButtonView:(id)arg1;
- (void)setDetailViewListContent:(id)arg1;
- (void)setHighlight:(id)arg1;
- (void)setIsContentShared:(bool)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setManageButtonTitle:(id)arg1;
- (void)setShowManageButton:(bool)arg1;

@end
