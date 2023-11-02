
@protocol PXAssetsSharingHelperDelegate <NSObject>

@required

- (bool)assetsSharingHelper:(void *)arg1 dismissViewController:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: <PXAssetsSharingHelper> *, UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)assetsSharingHelper:(id <PXAssetsSharingHelper>)arg1 presentViewController:(UIViewController *)arg2;

@optional

- (UIWindow *)windowForProgressPresentationInAssetsSharingHelper:(id <PXAssetsSharingHelper>)arg1;

@end
