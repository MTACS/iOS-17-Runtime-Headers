
@interface TUIEmojiUpscaler : NSObject {
    MADService * _madService;
}

+ (struct CGColorSpace { }*)sRGB;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)generateEmoji:(id)arg1 completion:(id /* block */)arg2;
- (void)generateEmoji:(id)arg1 forImage:(id)arg2 completion:(id /* block */)arg3;
- (id)imageFromEmoji:(id)arg1;
- (id)init;
- (void)loadModel:(id /* block */)arg1;

@end
