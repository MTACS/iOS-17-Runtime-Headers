
@interface JFXEffectFactory : NSObject

+ (id)delegate;
+ (void)setDelegate:(id)arg1;
+ (id)sharedInstance;

- (id)createEffectContentDataSourceForEffectID:(id)arg1 ofType:(int)arg2;
- (id)createEffectForType:(int)arg1 fromID:(id)arg2 withProperties:(id)arg3;
- (void)defaultPickerItemForType:(int)arg1 completion:(id /* block */)arg2;
- (void)effectCategoriesForPickerItem:(id)arg1 completion:(id /* block */)arg2;
- (void)effectCategoriesForType:(int)arg1 completion:(id /* block */)arg2;
- (void)effectIDsForPickerItem:(id)arg1 completion:(id /* block */)arg2;
- (void)effectIDsForType:(int)arg1 completion:(id /* block */)arg2;
- (void)effectsForType:(int)arg1 completion:(id /* block */)arg2;
- (id)effectsForType:(int)arg1 fromCategory:(id)arg2;
- (void)effectsForType:(int)arg1 pickerItem:(id)arg2 completion:(id /* block */)arg3;
- (void)fetchPickerItems:(id /* block */)arg1;
- (id)noneEffectIDForType:(int)arg1;
- (void)pickerItemForCategory:(id)arg1 completion:(id /* block */)arg2;

@end
