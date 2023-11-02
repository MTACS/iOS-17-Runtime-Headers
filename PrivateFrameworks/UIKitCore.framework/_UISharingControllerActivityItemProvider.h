
@interface _UISharingControllerActivityItemProvider : NSItemProvider

- (id)initWithCKShare:(id)arg1 container:(id)arg2 allowedSharingOptions:(id)arg3;
- (id)initWithCKSharePreparationHandler:(id /* block */)arg1 allowedSharingOptions:(id)arg2;
- (void)registerCloudKitShareWithPreparationHandler:(id /* block */)arg1 allowedSharingOptions:(id)arg2;

@end
