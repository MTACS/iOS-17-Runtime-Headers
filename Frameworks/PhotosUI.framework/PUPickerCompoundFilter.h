
@interface PUPickerCompoundFilter : NSObject <PUPickerFilter> {
    long long  _filterType;
    NSArray * _subfilters;
}

@property (nonatomic, readonly) bool allowsAlbums;
@property (nonatomic, readonly) bool allowsSearchSuggestions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long filterType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isValidFilter;
@property (nonatomic, readonly, copy) NSArray *subfilters;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
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
- (id)initWithFilterType:(long long)arg1 subfilters:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidFilter;
- (id)subfilters;

@end
