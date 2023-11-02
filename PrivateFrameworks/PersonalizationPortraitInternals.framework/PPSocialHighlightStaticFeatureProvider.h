
@interface PPSocialHighlightStaticFeatureProvider : NSObject <PPSocialHighlightFeatureProvider> {
    NSDictionary * _computedFeatures;
    id /* block */  _keyBlock;
}

- (void).cxx_destruct;
- (id)valueForHighlight:(id)arg1;

@end
