
@interface PUPXSharePresentation : NSObject <PXSharePresentation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createActivitySharingControllerWithContext:(id)arg1;
- (id)createActivitySharingControllerWithContext:(id)arg1 selectedAssetIndexSet:(id)arg2;
- (id)defaultActivityTypeOrder;

@end
