
@protocol NSFileProviderTestingLookup <NSFileProviderTestingOperation>

@required

- (NSString *)itemIdentifier;
- (unsigned long long)side;

@end
