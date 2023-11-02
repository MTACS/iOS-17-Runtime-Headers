
@protocol PXGTitleSubtitleSource <PXGLayoutContentSource>

@required

- (NSString *)subtitleForSpriteAtIndex:(unsigned int)arg1;
- (NSString *)titleForSpriteAtIndex:(unsigned int)arg1;
- (PXTitleSubtitleLabelSpec *)titleSubtitleSpecForSpriteAtIndex:(unsigned int)arg1;

@optional

- (void)didRenderTitleAndSubtitleSpriteAtIndex:(unsigned int)arg1 layoutVersion:(long long)arg2 withLastBaseline:(double)arg3;

@end
