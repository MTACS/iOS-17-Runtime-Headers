
@protocol MRMediaSuggestionRequestConfigurable <NSObject>

@required

- (bool)includeArtwork;
- (unsigned long long)maxResults;
- (NSUUID *)requestIdentifier;
- (void)setIncludeArtwork:(bool)arg1;
- (void)setMaxResults:(unsigned long long)arg1;
- (void)setRequestIdentifier:(NSUUID *)arg1;
- (void)setUseDirectAccess:(bool)arg1;
- (bool)useDirectAccess;

@end
