
@interface UIActivityContentContext : NSObject {
    NSArray * _applicationActivityTypes;
    bool  _canRenderPeople;
    bool  _configureForCloudSharing;
    bool  _configureForPhotosEdit;
    NSArray * _heroActionActivityTypes;
    bool  _hideHeaderView;
    BSAuditToken * _hostAuditToken;
    bool  _isRemote;
    bool  _sharingExpanded;
    bool  _showHeroActionsHorizontally;
    UIColor * _tintColor;
    NSString * _topContentSectionText;
}

@property (nonatomic, copy) NSArray *applicationActivityTypes;
@property (nonatomic) bool canRenderPeople;
@property (nonatomic) bool configureForCloudSharing;
@property (nonatomic) bool configureForPhotosEdit;
@property (nonatomic, copy) NSArray *heroActionActivityTypes;
@property (nonatomic) bool hideHeaderView;
@property (nonatomic, retain) BSAuditToken *hostAuditToken;
@property (nonatomic) bool isRemote;
@property (nonatomic) bool sharingExpanded;
@property (nonatomic) bool showHeroActionsHorizontally;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic, copy) NSString *topContentSectionText;

- (void).cxx_destruct;
- (id)applicationActivityTypes;
- (bool)canRenderPeople;
- (bool)configureForCloudSharing;
- (bool)configureForPhotosEdit;
- (id)heroActionActivityTypes;
- (bool)hideHeaderView;
- (id)hostAuditToken;
- (bool)isRemote;
- (void)setApplicationActivityTypes:(id)arg1;
- (void)setCanRenderPeople:(bool)arg1;
- (void)setConfigureForCloudSharing:(bool)arg1;
- (void)setConfigureForPhotosEdit:(bool)arg1;
- (void)setHeroActionActivityTypes:(id)arg1;
- (void)setHideHeaderView:(bool)arg1;
- (void)setHostAuditToken:(id)arg1;
- (void)setIsRemote:(bool)arg1;
- (void)setSharingExpanded:(bool)arg1;
- (void)setShowHeroActionsHorizontally:(bool)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTopContentSectionText:(id)arg1;
- (bool)sharingExpanded;
- (bool)showHeroActionsHorizontally;
- (id)tintColor;
- (id)topContentSectionText;

@end
