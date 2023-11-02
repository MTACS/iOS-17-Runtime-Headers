
@protocol PUPickerFilter <NSObject, NSCopying, NSSecureCoding>

@required

- (bool)allowsAlbums;
- (bool)allowsSearchSuggestions;
- (bool)containsFilter:(id <PUPickerFilter>)arg1;
- (NSPredicate *)generatedAssetPredicate;
- (unsigned long long)generatedPossibleAssetTypes;
- (unsigned long long)generatedRequiredAssetTypes;
- (bool)isValidFilter;

@end
