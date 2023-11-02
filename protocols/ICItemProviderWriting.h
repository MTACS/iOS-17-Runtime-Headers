
@protocol ICItemProviderWriting <NSItemProviderWriting>

@required

- (NSString *)itemProviderIdentifier;
- (long long)itemProviderType;

@end
