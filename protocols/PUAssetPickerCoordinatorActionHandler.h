
@protocol PUAssetPickerCoordinatorActionHandler <NSObject>

@required

- (void)coordinator:(PUAssetPickerCoordinator *)arg1 didFinishPicking:(NSOrderedSet *)arg2 additionalSelectionState:(PUPickerAdditionalSelectionState *)arg3;

@end
