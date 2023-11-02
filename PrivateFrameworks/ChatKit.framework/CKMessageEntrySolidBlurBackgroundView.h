
@interface CKMessageEntrySolidBlurBackgroundView : UIVisualEffectView <CKMessageEntryBackgroundViewProtocol> {
    NSString * _backdropGroupName;
    UITraitCollection * _entryViewTraitCollection;
    long long  _style;
}

@property (nonatomic, retain) NSString *backdropGroupName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UITraitCollection *entryViewTraitCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateBackgroundView;
- (id)backdropGroupName;
- (id)entryViewTraitCollection;
- (id)init;
- (id)inputAccessoryViewBackdropColor;
- (id)inputAccessoryViewBackdropEffects;
- (void)setBackdropGroupName:(id)arg1;
- (void)setEntryViewTraitCollection:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
