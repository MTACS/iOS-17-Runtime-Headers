
@protocol NSFileProviderTestingIngestion <NSFileProviderTestingOperation>

@required

- (<NSFileProviderItem> *)item;
- (NSString *)itemIdentifier;
- (unsigned long long)side;

@end
