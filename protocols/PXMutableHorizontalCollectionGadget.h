
@protocol PXMutableHorizontalCollectionGadget <NSObject>

@required

- (NSString *)collectionAccessoryButtonTitle;
- (unsigned long long)collectionAccessoryButtonType;
- (double)collectionHeight;
- (NSString *)collectionTitle;
- (void)setCollectionAccessoryButtonTitle:(NSString *)arg1;
- (void)setCollectionAccessoryButtonType:(unsigned long long)arg1;
- (void)setCollectionHeight:(double)arg1;
- (void)setCollectionTitle:(NSString *)arg1;

@end
