
@interface PUPickerOtherFilter : NSObject <PUPickerFilter> {
    long long  _filterType;
}

@property (nonatomic, readonly) bool allowsAlbums;
@property (nonatomic, readonly) bool allowsSearchSuggestions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long filterType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValidFilter;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (bool)allowsAlbums;
- (bool)allowsSearchSuggestions;
- (bool)containsFilter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)filterType;
- (id)generatedAssetPredicate;
- (unsigned long long)generatedPossibleAssetTypes;
- (unsigned long long)generatedRequiredAssetTypes;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilterType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValidFilter;

@end
