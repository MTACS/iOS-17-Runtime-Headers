
@protocol SXQuickLookInteractorDelegate <NSObject>

@required

- (void)didLoadThumbnail:(UIImage *)arg1;
- (void)failedToLoadThumbnail;

@end
