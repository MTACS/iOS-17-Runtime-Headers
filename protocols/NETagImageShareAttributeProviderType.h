
@protocol NETagImageShareAttributeProviderType

@required

- (void)createShareSportsEventImageFor:(void *)arg1 size:(void *)arg2 logoWidth:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: <FCSportsEventProviding> *, struct CGSize { double x1; double x2; }, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (void)createSportsShareImageFor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <FCSportsProviding> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*
- (UIImage *)mySportsShareImageFor:(id <FCTagProviding>)arg1;
- (UIImage *)shareImageFor:(id <FCTagProviding>)arg1;

@end
