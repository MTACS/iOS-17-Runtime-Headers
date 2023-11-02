
@protocol PXTapbackStatusManager <NSObject>

@required

- (bool)hasTapbacksForAsset:(id <PXDisplayAsset>)arg1;

@optional

- (Class)decorationViewClass;
- (<PXTapbackUserData> *)tapbackUserDataForAsset:(id <PXDisplayAsset>)arg1 previousAsset:(id <PXDisplayAsset>)arg2;

@end
