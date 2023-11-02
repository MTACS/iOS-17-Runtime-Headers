
@interface SBSAppDragLocalContext : NSObject {
    NSString * _activeCustomIconDataSourceUniqueIdentifier;
    NSString * _applicationBundleIdentifier;
    bool  _cancelsViaScaleAndFade;
    NSSet * _containedIconIdentifiers;
    NSArray * _customIconDataSourceConfigurations;
    NSString * _draggedSceneIdentifier;
    NSString * _droppedIconIdentifier;
    unsigned long long  _gridSizeClass;
    NSSet * _launchActions;
    NSURL * _launchURL;
    UIView * _portaledPreview;
    bool  _sourceLocal;
    long long  _startLocation;
    NSString * _uniqueIdentifier;
    NSUserActivity * _userActivity;
}

@property (nonatomic, copy) NSString *activeCustomIconDataSourceUniqueIdentifier;
@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic) bool cancelsViaScaleAndFade;
@property (nonatomic, copy) NSSet *containedIconIdentifiers;
@property (nonatomic, copy) NSArray *customIconDataSourceConfigurations;
@property (nonatomic, copy) NSString *draggedSceneIdentifier;
@property (nonatomic, copy) NSString *droppedIconIdentifier;
@property (nonatomic) unsigned long long gridSizeClass;
@property (nonatomic, readonly, copy) NSSet *launchActions;
@property (nonatomic, copy) NSURL *launchURL;
@property (nonatomic, retain) UIView *portaledPreview;
@property (getter=isSourceLocal, nonatomic) bool sourceLocal;
@property (nonatomic, readonly) long long startLocation;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, retain) NSUserActivity *userActivity;

- (void).cxx_destruct;
- (id)activeCustomIconDataSourceUniqueIdentifier;
- (id)applicationBundleIdentifier;
- (bool)cancelsViaScaleAndFade;
- (id)containedIconIdentifiers;
- (id)customIconDataSourceConfigurations;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)draggedSceneIdentifier;
- (id)droppedIconIdentifier;
- (unsigned long long)gridSizeClass;
- (id)initWithUniqueIdentifier:(id)arg1 withLaunchActions:(id)arg2 startLocation:(long long)arg3;
- (bool)isSourceLocal;
- (id)launchActions;
- (id)launchURL;
- (id)portaledPreview;
- (void)setActiveCustomIconDataSourceUniqueIdentifier:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setCancelsViaScaleAndFade:(bool)arg1;
- (void)setContainedIconIdentifiers:(id)arg1;
- (void)setCustomIconDataSourceConfigurations:(id)arg1;
- (void)setDraggedSceneIdentifier:(id)arg1;
- (void)setDroppedIconIdentifier:(id)arg1;
- (void)setGridSizeClass:(unsigned long long)arg1;
- (void)setLaunchURL:(id)arg1;
- (void)setPortaledPreview:(id)arg1;
- (void)setSourceLocal:(bool)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (void)setUserActivity:(id)arg1;
- (long long)startLocation;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uniqueIdentifier;
- (id)userActivity;

@end
