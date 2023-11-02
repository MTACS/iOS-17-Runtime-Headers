
@interface _UIButtonSettings : PTSettings <PTSettingsKeyObserver> {
    bool  _highlightAlternateColor;
    bool  _highlightBelow;
    bool  _highlightIgnoresBars;
    bool  _highlightMode;
    bool  _highlightSubclasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool highlightAlternateColor;
@property (nonatomic) bool highlightBelow;
@property (nonatomic) bool highlightIgnoresBars;
@property (nonatomic) bool highlightMode;
@property (nonatomic) bool highlightSubclasses;
@property (readonly) Class superclass;

+ (id)settingsControllerModule;

- (bool)highlightAlternateColor;
- (bool)highlightBelow;
- (bool)highlightIgnoresBars;
- (bool)highlightMode;
- (bool)highlightSubclasses;
- (id)initWithDefaultValues;
- (void)setDefaultValues;
- (void)setHighlightAlternateColor:(bool)arg1;
- (void)setHighlightBelow:(bool)arg1;
- (void)setHighlightIgnoresBars:(bool)arg1;
- (void)setHighlightMode:(bool)arg1;
- (void)setHighlightSubclasses:(bool)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

@end
