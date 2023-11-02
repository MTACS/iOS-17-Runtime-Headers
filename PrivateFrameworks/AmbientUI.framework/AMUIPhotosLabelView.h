
@interface AMUIPhotosLabelView : UIView <PTSettingsKeyObserver> {
    AMUIPosterSwitcherSettings * _settings;
    UIImageView * _symbolImageView;
    NSString * _symbolName;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double preferredBottomMargin;
@property (nonatomic, readonly) double preferredLeadingMargin;
@property (nonatomic, readonly) double preferredTopMargin;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *symbolName;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_noteWindowWillRotate:(id)arg1;
- (id)_symbolImageConfiguration;
- (void)_updateForAmbientDisplayStyle;
- (void)_updateForAmbientDisplayStyleAnimated:(bool)arg1;
- (void)_updateForInterfaceOrientation:(long long)arg1;
- (void)_updateForWindow:(id)arg1;
- (void)didMoveToWindow;
- (id)initWithSymbolName:(id)arg1 title:(id)arg2;
- (double)preferredBottomMargin;
- (double)preferredLeadingMargin;
- (double)preferredTopMargin;
- (void)setSymbolName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (id)symbolName;
- (id)title;
- (id)viewForLastBaselineLayout;
- (void)willMoveToWindow:(id)arg1;

@end
