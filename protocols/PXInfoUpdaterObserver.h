
@protocol PXInfoUpdaterObserver <NSObject>

@required

- (void)infoUpdaterDidUpdate:(PXInfoUpdater *)arg1;

@optional

- (bool)infoUpdaterShouldUpdate:(PXInfoUpdater *)arg1;

@end
