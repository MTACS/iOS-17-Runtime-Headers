
@interface SWCollaborationView : UIView {
    unsigned long long  _activeParticipantCount;
    _SWCollaborationButtonViewImpl * _buttonView;
    <UICloudSharingControllerDelegate> * _cloudSharingControllerDelegate;
    <UICloudSharingControllerDelegate> * _cloudSharingDelegate;
    <SWCollaborationViewDelegate> * _delegate;
    UIImage * _headerImage;
    NSString * _headerSubtitle;
    NSString * _headerTitle;
    NSString * _manageButtonTitle;
    UIView * _typeErasedButtonView;
}

@property (nonatomic) unsigned long long activeParticipantCount;
@property (nonatomic, retain) _SWCollaborationButtonViewImpl *buttonView;
@property (nonatomic, readonly) _SWCollaborationButtonViewImpl *buttonView;
@property (nonatomic) <UICloudSharingControllerDelegate> *cloudSharingControllerDelegate;
@property (nonatomic) <UICloudSharingControllerDelegate> *cloudSharingDelegate;
@property (nonatomic) <SWCollaborationViewDelegate> *delegate;
@property (nonatomic, retain) UIImage *headerImage;
@property (nonatomic, copy) NSString *headerSubtitle;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic, copy) NSString *manageButtonTitle;
@property (nonatomic, retain) UIView *typeErasedButtonView;

- (void).cxx_destruct;
- (bool)_shouldOverrideSymbolConfigForIWork;
- (bool)_shouldOverrideSymbolConfigForWolfFreeform;
- (unsigned long long)activeParticipantCount;
- (id)buttonView;
- (id)buttonView;
- (id)cloudSharingControllerDelegate;
- (id)cloudSharingDelegate;
- (id)delegate;
- (void)dismissPopover:(id /* block */)arg1;
- (void)dismissPopoverAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)headerImage;
- (id)headerSubtitle;
- (id)headerTitle;
- (id)initWithButtonView:(id)arg1;
- (id)initWithItemProvider:(id)arg1;
- (id)initWithTypeErasedButtonView:(id)arg1;
- (id)manageButtonTitle;
- (void)setActiveParticipantCount:(unsigned long long)arg1;
- (void)setButtonView:(id)arg1;
- (void)setCloudSharingControllerDelegate:(id)arg1;
- (void)setCloudSharingDelegate:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setHeaderSubtitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setManageButtonTitle:(id)arg1;
- (void)setShowManageButton:(bool)arg1;
- (void)setTypeErasedButtonView:(id)arg1;
- (id)typeErasedButtonView;
- (void)updatePlaceholderGlyphScale:(long long)arg1 weight:(long long)arg2 pointSize:(double)arg3;

@end
