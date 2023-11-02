
@protocol SBHIconImageCacheObserver <NSObject>

@optional

- (void)iconImageCache:(SBHIconImageCache *)arg1 didUpdateImageForIcon:(SBIcon *)arg2;
- (void)iconImageCache:(SBHIconImageCache *)arg1 didUpdateUnmaskedImageForIcon:(SBIcon *)arg2;

@end
