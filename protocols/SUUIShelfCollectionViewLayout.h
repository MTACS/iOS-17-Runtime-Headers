
@protocol SUUIShelfCollectionViewLayout <NSObject>

@required

+ (bool)collectionViewCanClipToBounds;
+ (double)snapToBoundariesDecelerationRate;

- (SUUIShelfLayoutData *)layoutData;
- (void)setLayoutData:(SUUIShelfLayoutData *)arg1;

@end
