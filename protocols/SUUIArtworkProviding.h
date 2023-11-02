
@protocol SUUIArtworkProviding <NSObject, NSSecureCoding, SUUICacheCoding, NSCopying>

@required

+ (bool)canHandleArtworkFormat:(id)arg1;

- (SUUIArtwork *)artworkForSize:(long long)arg1;
- (NSURL *)artworkURLForSize:(long long)arg1;
- (SUUIArtwork *)artworkWithWidth:(long long)arg1;
- (SUUIArtwork *)bestArtworkForScaledSize:(struct CGSize { double x1; double x2; })arg1;
- (SUUIArtwork *)bestArtworkForSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)hasArtwork;
- (SUUIArtwork *)largestArtwork;
- (SUUIArtwork *)preferredExactArtworkForSize:(struct CGSize { double x1; double x2; })arg1;
- (SUUIArtwork *)smallestArtwork;

@end
