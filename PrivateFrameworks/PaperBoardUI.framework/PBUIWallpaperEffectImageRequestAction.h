
@interface PBUIWallpaperEffectImageRequestAction : BSAction

@property (nonatomic, readonly, copy) NSString *slotIdentifier;

- (id)initWithSlotIdentifier:(id)arg1 forResponseOnQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)slotIdentifier;

@end
