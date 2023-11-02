
@protocol CPListItemPrivate <NSObject>

@required

- (void)_setNeedsUpdate;
- (NSUUID *)identifier;
- (CPListTemplate *)listTemplate;
- (void)setListTemplate:(CPListTemplate *)arg1;

@end
