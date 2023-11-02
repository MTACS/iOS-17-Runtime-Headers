
@interface PBUIWallpaperImageSlotRequestAction : BSAction {
    BSActionResponder * _responder;
}

@property (nonatomic, readonly) long long desiredStyle;
@property (nonatomic, readonly, copy) NSString *slotIdentifier;
@property (nonatomic, readonly, copy) UITraitCollection *traitCollection;
@property (nonatomic, readonly) long long variant;

- (void).cxx_destruct;
- (long long)desiredStyle;
- (id)initWithVariant:(long long)arg1 desiredStyle:(long long)arg2 traitCollection:(id)arg3 slotIdentifier:(id)arg4 forResponseOnQueue:(id)arg5 withHandler:(id /* block */)arg6;
- (void)invalidate;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)slotIdentifier;
- (id)traitCollection;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (long long)variant;

@end
