
@interface UITextInputAssistantItem : NSObject {
    bool  _allowsHidingShortcuts;
    NSArray * _centerBarButtonGroups;
    UIColor * _detachedBackgroundColor;
    UIBlurEffect * _detachedBackgroundEffect;
    UIColor * _detachedTintColor;
    bool  _independentGroupSizes;
    NSArray * _leadingBarButtonGroups;
    double  _marginOverride;
    bool  _showsBarButtonItemsInline;
    NSArray * _trailingBarButtonGroups;
    bool  _visibleWhenMinimized;
}

@property (nonatomic) bool allowsHidingShortcuts;
@property (getter=_centerBarButtonGroups, setter=_setCenterBarButtonGroups:, nonatomic, copy) NSArray *centerBarButtonGroups;
@property (getter=_detachedBackgroundColor, setter=_setDetachedBackgroundColor:, nonatomic, retain) UIColor *detachedBackgroundColor;
@property (getter=_detachedBackgroundEffect, setter=_setDetachedBackgroundEffect:, nonatomic, copy) UIBlurEffect *detachedBackgroundEffect;
@property (getter=_detachedTintColor, setter=_setDetachedTintColor:, nonatomic, retain) UIColor *detachedTintColor;
@property (getter=_hasItemsToDisplay, nonatomic, readonly) bool hasItemsToDisplay;
@property (getter=_independentGroupSizes, setter=_setIndependentGroupSizes:, nonatomic) bool independentGroupSizes;
@property (nonatomic, copy) NSArray *leadingBarButtonGroups;
@property (getter=_marginOverride, setter=_setMarginOverride:, nonatomic) double marginOverride;
@property (getter=_requiresPredictionDisabled, nonatomic, readonly) bool requiresPredictionDisabled;
@property (getter=_showsBarButtonItemsInline, setter=_setShowsBarButtonItemsInline:, nonatomic) bool showsBarButtonItemsInline;
@property (getter=_isSystemItem, nonatomic, readonly) bool systemItem;
@property (nonatomic, copy) NSArray *trailingBarButtonGroups;
@property (getter=_isVisibleWhenMinimized, setter=_setVisibleWhenMinimized:, nonatomic) bool visibleWhenMinimized;

+ (id)_keyboardDeleteItem;

- (void).cxx_destruct;
- (id)_centerBarButtonGroups;
- (id)_detachedBackgroundColor;
- (id)_detachedBackgroundEffect;
- (id)_detachedTintColor;
- (bool)_hasItemsToDisplay;
- (bool)_independentGroupSizes;
- (bool)_isSystemItem;
- (bool)_isVisibleWhenMinimized;
- (double)_marginOverride;
- (bool)_requiresPredictionDisabled;
- (void)_setCenterBarButtonGroups:(id)arg1;
- (void)_setDetachedBackgroundColor:(id)arg1;
- (void)_setDetachedBackgroundEffect:(id)arg1;
- (void)_setDetachedTintColor:(id)arg1;
- (void)_setIndependentGroupSizes:(bool)arg1;
- (void)_setMarginOverride:(double)arg1;
- (void)_setShowsBarButtonItemsInline:(bool)arg1;
- (void)_setVisibleWhenMinimized:(bool)arg1;
- (bool)_showsBarButtonItemsInline;
- (bool)allowsHidingShortcuts;
- (id)description;
- (id)init;
- (id)leadingBarButtonGroups;
- (void)setAllowsHidingShortcuts:(bool)arg1;
- (void)setLeadingBarButtonGroups:(id)arg1;
- (void)setTrailingBarButtonGroups:(id)arg1;
- (id)trailingBarButtonGroups;

@end
