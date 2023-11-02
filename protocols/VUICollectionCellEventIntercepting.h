
@protocol VUICollectionCellEventIntercepting <NSObject>

@optional

- (void)didEndDisplaying;
- (void)didSelect;
- (void)willBeDisplayed;

@end
