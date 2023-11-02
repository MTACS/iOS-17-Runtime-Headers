
@interface MRUVisualStylingProvider : NSObject <MTVisualStylingProviderObservingPrivate> {
    NSHashTable * _observers;
    UIColor * _primaryColor;
    UIColor * _quaternaryColor;
    UIColor * _secondaryColor;
    UIColor * _separatorColor;
    bool  _supportsVibrancy;
    UIColor * _tertiaryColor;
    <UITraitChangeObservable> * _traitChangeObservable;
    <UITraitChangeRegistration> * _traitChangeRegistration;
    MTVisualStylingProvider * _visualStylingProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) UIColor *primaryColor;
@property (nonatomic, retain) UIColor *quaternaryColor;
@property (nonatomic, retain) UIColor *secondaryColor;
@property (nonatomic, retain) UIColor *separatorColor;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsVibrancy;
@property (nonatomic, retain) UIColor *tertiaryColor;
@property (nonatomic) <UITraitChangeObservable> *traitChangeObservable;
@property (nonatomic, retain) <UITraitChangeRegistration> *traitChangeRegistration;
@property (nonatomic, retain) MTVisualStylingProvider *visualStylingProvider;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (double)alphaForNowPlayingStyle:(long long)arg1;
- (void)applyBlendModeToView:(id)arg1;
- (void)applyStyle:(long long)arg1 toView:(id)arg2;
- (id)blendColorForStyle:(long long)arg1;
- (long long)blendModeForNowPlayingStyle:(long long)arg1;
- (id)colorForNowPlayingStyle:(long long)arg1;
- (id)colorForStyle:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithVisualStylingProvider:(id)arg1;
- (void)notifyObservers;
- (id)observers;
- (id)primaryColor;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (id)quaternaryColor;
- (void)removeObserver:(id)arg1;
- (id)secondaryColor;
- (id)separatorColor;
- (void)setObservers:(id)arg1;
- (void)setPrimaryColor:(id)arg1;
- (void)setQuaternaryColor:(id)arg1;
- (void)setSecondaryColor:(id)arg1;
- (void)setSeparatorColor:(id)arg1;
- (void)setSupportsVibrancy:(bool)arg1;
- (void)setTertiaryColor:(id)arg1;
- (void)setTraitChangeObservable:(id)arg1;
- (void)setTraitChangeRegistration:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1;
- (bool)supportsVibrancy;
- (id)tertiaryColor;
- (id)traitChangeObservable;
- (id)traitChangeRegistration;
- (long long)visualStyleForNowPlayingStyle:(long long)arg1;
- (id)visualStylingProvider;

@end
