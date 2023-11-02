
@interface CFXEffectFactoryDelegate : NSObject <JFXEffectFactoryDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)CFX_animojiEffectsWithFactory:(id)arg1;
- (bool)CFX_disableExpensiveFilters;
- (bool)CFX_enoughPowerForStyleTransfer;
- (id)CFX_filterEffectsWithFactory:(id)arg1;
- (bool)CFX_isExpensiveEffectID:(id)arg1 withFactory:(id)arg2;
- (id)CFX_overlayEffectsWithFactory:(id)arg1;
- (Class)JFXEffectClassForType:(int)arg1;
- (id)effectFactory:(id)arg1 createEffectContentDataSourceForEffectID:(id)arg2 ofType:(int)arg3;
- (void)effectFactory:(id)arg1 effectIDsAvailableForType:(int)arg2 completion:(id /* block */)arg3;

@end
