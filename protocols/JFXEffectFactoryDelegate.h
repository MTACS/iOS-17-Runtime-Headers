
@protocol JFXEffectFactoryDelegate <NSObject>

@required

- (void)effectFactory:(void *)arg1 effectIDsAvailableForType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: JFXEffectFactory *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (bool)effectFactory:(JFXEffectFactory *)arg1 isStyleTransferEffectID:(NSString *)arg2;
- (NSArray *)styleTransferEffectIDsForFactory:(JFXEffectFactory *)arg1;

@optional

- (<JFXEffectContentDataSource> *)effectFactory:(JFXEffectFactory *)arg1 createEffectContentDataSourceForEffectID:(NSString *)arg2 ofType:(int)arg3;
- (void)effectFactory:(void *)arg1 effectCategoriesAvailableForType:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: JFXEffectFactory *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)effectFactory:(void *)arg1 effectCategoriesForGroupID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: JFXEffectFactory *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)effectFactory:(void *)arg1 fetchPickerItemsWithCompletion:(void *)arg2; // needs 2 arg types, found 7: JFXEffectFactory *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*

@end
