
@protocol AVTStickerRecentsItem <AVTDiscardableContent>

@required

- (NSString *)cellIdentifier;
- (UIImage *)image;
- (NSString *)localizedDescription;
- (id /* block */)provider:(void *)arg1; // needs 1 arg types, found 20: void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*, id /* block */, id /* block */, void*, void, id /* block */, AVTStickerResource *, void*, bool, void*, id, SEL
- (void)setImage:(UIImage *)arg1;
- (void)setUrl:(NSURL *)arg1;
- (NSURL *)url;

@end
