
@protocol NSFileProviderTestingCollisionResolution <NSFileProviderTestingOperation>

@required

- (<NSFileProviderItem> *)renamedItem;
- (unsigned long long)side;

@end
