
@protocol VKCStickerVideoDecoderDelegate

@required

- (void)decoder:(VKCStickerVideoDecoder *)arg1 displayFrame:(struct CGImage { }*)arg2 forIndex:(long long)arg3;
- (void)initialProcessingCompleteForDecoder:(VKCStickerVideoDecoder *)arg1;

@end
