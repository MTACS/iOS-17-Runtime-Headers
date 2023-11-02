
@interface SearchUITemporaryInternalAppsIcon : SBLeafIcon {
    SFSearchResult * _searchResult;
    unsigned long long  _variant;
}

@property (nonatomic, readonly) SFSearchResult *searchResult;
@property (nonatomic, readonly) unsigned long long variant;

+ (bool)canGenerateIconsInBackground;

- (void).cxx_destruct;
- (id)displayNameForLocation:(id)arg1;
- (id)iconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)initWithResult:(id)arg1 variant:(unsigned long long)arg2;
- (id)searchResult;
- (unsigned long long)variant;

@end
