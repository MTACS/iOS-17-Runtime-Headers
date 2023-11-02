
@interface BPSLinkCell : BPSBadgedTableCell

+ (id)_iconCache;
+ (double)scale;

- (id)blankIcon;
- (void)forceSynchronousIconLoadOnNextIconLoad;
- (id)getLazyIcon;

@end
