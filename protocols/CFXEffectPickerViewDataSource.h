
@protocol CFXEffectPickerViewDataSource <NSObject>

@required

- (void)effectPickerView:(void *)arg1 effectAtIndex:(void *)arg2 forPreviewingAtSizeInPixels:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 9: CFXEffectPickerView *, long long, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CFXEffect *, void*
- (NSString *)effectPickerView:(CFXEffectPickerView *)arg1 effectIdentifierAtIndex:(long long)arg2;
- (NSString *)effectPickerView:(CFXEffectPickerView *)arg1 effectTitleAtIndex:(long long)arg2;
- (unsigned long long)effectPickerView:(CFXEffectPickerView *)arg1 indexForEffectID:(NSString *)arg2;
- (unsigned long long)numberOfEffectsInPickerView:(CFXEffectPickerView *)arg1;

@end
