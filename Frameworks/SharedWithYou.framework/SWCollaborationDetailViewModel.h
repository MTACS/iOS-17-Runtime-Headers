
@interface SWCollaborationDetailViewModel : NSObject <SWHighlightCenterDelegate> {
    void $__lazy_storage_$_highlightCenter;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _collaborationInfo;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _customCollaborators;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _customContentTitle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _headerFallback;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _highlight;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _manageButtonTitle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _showManageButton;
    void cloudSharingControllerDelegate;
    void itemProvider;
}

@property (nonatomic) <UICloudSharingControllerDelegate> *cloudSharingControllerDelegate;
@property (nonatomic, copy) NSArray *customCollaborators;
@property (nonatomic, copy) NSString *customContentTitle;
@property (nonatomic, retain) SWHighlight *highlight;
@property (nonatomic, retain) NSItemProvider *itemProvider;
@property (nonatomic, copy) NSString *manageButtonTitle;
@property (nonatomic) bool showManageButton;

- (void).cxx_destruct;
- (id)cloudSharingControllerDelegate;
- (id)customCollaborators;
- (id)customContentTitle;
- (id)highlight;
- (void)highlightCenterHighlightsDidChange:(id)arg1;
- (id)init;
- (id)initWithHighlight:(id)arg1;
- (id)initWithItemProvider:(id)arg1;
- (id)itemProvider;
- (id)manageButtonTitle;
- (void)setCloudSharingControllerDelegate:(id)arg1;
- (void)setCustomCollaborators:(id)arg1;
- (void)setCustomContentTitle:(id)arg1;
- (void)setHighlight:(id)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setManageButtonTitle:(id)arg1;
- (void)setShowManageButton:(bool)arg1;
- (bool)showManageButton;

@end
