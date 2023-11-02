
@protocol MPCStoreFrontLocalEquivalencyMiddlewarePlayingItemProviding <NSObject>

@required

- (MPModelGenericObject *)overridePlayingItem;
- (NSIndexPath *)playingItemIndexPath;

@end
