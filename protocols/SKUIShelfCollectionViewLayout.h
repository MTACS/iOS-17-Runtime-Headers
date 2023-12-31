
@protocol SKUIShelfCollectionViewLayout <NSObject>

@required

+ (bool)collectionViewCanClipToBounds;
+ (double)snapToBoundariesDecelerationRate;

- (SKUIShelfLayoutData *)layoutData;
- (void)setLayoutData:(SKUIShelfLayoutData *)arg1;

@end
