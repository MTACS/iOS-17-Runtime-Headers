
@interface _UINavigationBarPalette : UIView <UIPointerInteractionDelegate, _UINavigationBarLayoutParticipating> {
    unsigned long long  __contentViewMarginType;
    bool  __displaysWhenSearchActive;
    long long  __layoutPriority;
    _UIPointerInteractionAssistant * _assistant;
    NSString * _assistantIdentifier;
    UIView * _contentView;
    double  _minimumHeight;
    UINavigationItem * _owningNavigationItem;
    bool  _pinned;
    double  _preferredHeight;
    bool  _transitioning;
}

@property (setter=_setContentViewMarginType:, nonatomic) unsigned long long _contentViewMarginType;
@property (setter=_setDisplaysWhenSearchActive:, nonatomic) bool _displaysWhenSearchActive;
@property (setter=_setLayoutPriority:, nonatomic) long long _layoutPriority;
@property (nonatomic) _UIPointerInteractionAssistant *assistant;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, readonly) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double minimumHeight;
@property (nonatomic) UINavigationItem *owningNavigationItem;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic) double preferredHeight;
@property (readonly) Class superclass;
@property (nonatomic) bool transitioning;

- (void).cxx_destruct;
- (void)_clearAssistants;
- (unsigned long long)_contentViewMarginType;
- (bool)_displaysWhenSearchActive;
- (long long)_layoutPriority;
- (void)_setAssistants;
- (void)_setContentViewMarginType:(unsigned long long)arg1;
- (void)_setDisplaysWhenSearchActive:(bool)arg1;
- (void)_setLayoutPriority:(long long)arg1;
- (void)addSubview:(id)arg1;
- (id)assistant;
- (id)assistantIdentifier;
- (id)contentView;
- (id)init;
- (id)initWithContentView:(id)arg1;
- (bool)isPinned;
- (void)layoutSubviews;
- (double)minimumHeight;
- (id)owningNavigationItem;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3;
- (void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3;
- (double)preferredHeight;
- (void)setAssistant:(id)arg1;
- (void)setAssistantIdentifier:(id)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setOwningNavigationItem:(id)arg1;
- (void)setPinned:(bool)arg1;
- (void)setPreferredHeight:(double)arg1;
- (void)setTransitioning:(bool)arg1;
- (bool)transitioning;
- (void)updateLayoutData:(id)arg1 layoutWidth:(double)arg2;

@end
