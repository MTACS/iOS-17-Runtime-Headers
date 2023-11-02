
@interface PUPickerAssetMediaTypeFilter : NSObject <PUPickerFilter> {
    long long  _mediaType;
}

@property (nonatomic, readonly) bool allowsAlbums;
@property (nonatomic, readonly) bool allowsSearchSuggestions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValidFilter;
@property (nonatomic, readonly) long long mediaType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (bool)allowsAlbums;
- (bool)allowsSearchSuggestions;
- (bool)containsFilter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generatedAssetPredicate;
- (unsigned long long)generatedPossibleAssetTypes;
- (unsigned long long)generatedRequiredAssetTypes;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValidFilter;
- (long long)mediaType;

@end
