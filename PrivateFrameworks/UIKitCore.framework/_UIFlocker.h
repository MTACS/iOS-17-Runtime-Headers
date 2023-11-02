
@interface _UIFlocker : NSObject {
    _UIDragBadge * _badge;
    unsigned long long  _badgeValue;
    UIView * _containerView;
    NSMutableArray * _ghostPortals;
    _UIGroupCompletion * _groupCompletion;
    bool  _isFlocked;
    unsigned long long  _itemCount;
    UITargetedPreview * _primaryPlatterPreview;
    NSArray * _secondaryPlatterViews;
    unsigned long long  _settings;
    id /* block */  _unflockPreviewProvider;
}

@property (nonatomic, retain) _UIDragBadge *badge;
@property (nonatomic) unsigned long long badgeValue;
@property (nonatomic, retain) UIView *containerView;
@property (nonatomic, retain) NSMutableArray *ghostPortals;
@property (nonatomic, retain) _UIGroupCompletion *groupCompletion;
@property (nonatomic) bool isFlocked;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic, retain) UITargetedPreview *primaryPlatterPreview;
@property (nonatomic, retain) NSArray *secondaryPlatterViews;
@property (nonatomic) unsigned long long settings;
@property (nonatomic, copy) id /* block */ unflockPreviewProvider;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_badgeCenter;
- (void)_installGhostPortalForPreview:(id)arg1;
- (id)_primaryPlatterView;
- (id)badge;
- (struct CGPoint { double x1; double x2; })badgeLocationInView:(id)arg1;
- (unsigned long long)badgeValue;
- (id)containerView;
- (void)flock;
- (id)ghostPortals;
- (id)groupCompletion;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithContainerView:(id)arg1;
- (void)install;
- (bool)isFlocked;
- (unsigned long long)itemCount;
- (id)primaryPlatterPreview;
- (id)secondaryPlatterViews;
- (void)setBadge:(id)arg1;
- (void)setBadgeValue:(unsigned long long)arg1;
- (void)setContainerView:(id)arg1;
- (void)setGhostPortals:(id)arg1;
- (void)setGroupCompletion:(id)arg1;
- (void)setIsFlocked:(bool)arg1;
- (void)setItemCount:(unsigned long long)arg1;
- (void)setPrimaryPlatterPreview:(id)arg1;
- (void)setSecondaryPlatterViews:(id)arg1;
- (void)setSettings:(unsigned long long)arg1;
- (void)setUnflockPreviewProvider:(id /* block */)arg1;
- (unsigned long long)settings;
- (void)unflock;
- (id /* block */)unflockPreviewProvider;
- (void)unflockToDrag:(bool)arg1 animated:(bool)arg2;
- (void)updateFlockLocation;

@end
