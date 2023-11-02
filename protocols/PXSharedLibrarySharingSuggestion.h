
@protocol PXSharedLibrarySharingSuggestion <NSObject, NSCopying>

@required

- (<NSCopying> *)identifier;
- (bool)isNew;
- (bool)isPlaceholder;
- (<PXDisplayAsset> *)keyAsset;
- (NSArray *)locations;
- (NSString *)title;

@end
