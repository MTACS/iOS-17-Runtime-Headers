
@interface PXStoryMovieHighlightsConcreteCollection : NSObject <NSCopying, NSMutableCopying, PXStoryMovieHighlightsCollection> {
    NSMutableDictionary * _highlightsByAssetId;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSString *diagnosticDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)debugDescription;
- (id)description;
- (id)diagnosticDescription;
- (id)init;
- (id)movieHighlightsForDisplayAsset:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
