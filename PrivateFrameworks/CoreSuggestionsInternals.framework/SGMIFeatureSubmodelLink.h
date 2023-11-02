
@interface SGMIFeatureSubmodelLink : NSObject {
    long long  _bigramFeature;
    long long  _submodeledFeature;
    long long  _unigramFeature;
}

@property (readonly) long long bigramFeature;
@property (readonly) long long submodeledFeature;
@property (readonly) long long unigramFeature;

- (long long)bigramFeature;
- (id)initFor:(long long)arg1 fromUnigram:(long long)arg2 andBigram:(long long)arg3;
- (long long)submodeledFeature;
- (long long)unigramFeature;

@end
