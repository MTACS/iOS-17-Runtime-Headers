
@interface NewsFeed.TagImageShareAttributeProvider : NSObject <NETagImageShareAttributeProviderType>

- (void)createShareSportsEventImageFor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 logoWidth:(double)arg3 completion:(id /* block */)arg4;
- (void)createSportsShareImageFor:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)mySportsShareImageFor:(id)arg1;
- (id)shareImageFor:(id)arg1;

@end
