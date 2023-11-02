
@protocol MRUArtworkControllerDelegate <NSObject>

@required

- (void)artworkLoadingDidTimeoutInController:(MRUArtworkController *)arg1;
- (void)controller:(MRUArtworkController *)arg1 didLoadArtworkImage:(UIImage *)arg2;

@optional

- (void)controller:(MRUArtworkController *)arg1 didStartLoadingImageForCatalog:(MPArtworkCatalog *)arg2;

@end
