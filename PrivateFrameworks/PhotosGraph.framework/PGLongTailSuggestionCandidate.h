
@interface PGLongTailSuggestionCandidate : NSObject {
    PHAsset * _asset;
    unsigned long long  _score;
}

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, readonly) unsigned long long score;

- (void).cxx_destruct;
- (id)asset;
- (id)initWithAsset:(id)arg1 score:(unsigned long long)arg2;
- (bool)isValidBeforeKeyItemFilterWithMeNodeLocalIdentifier:(id)arg1;
- (bool)isValidWithMeNodeLocalIdentifier:(id)arg1;
- (unsigned long long)score;

@end
