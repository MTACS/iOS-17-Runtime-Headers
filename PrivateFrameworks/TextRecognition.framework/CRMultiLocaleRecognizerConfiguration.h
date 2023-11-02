
@interface CRMultiLocaleRecognizerConfiguration : CRRecognizerConfiguration {
    NSOrderedSet * _languages;
}

@property (readonly) NSOrderedSet *languages;

- (void).cxx_destruct;
- (id)initV1DefaultConfigWithOptions:(id)arg1;
- (id)initV2DefaultConfigWithOptions:(id)arg1;
- (id)initV3DefaultConfigWithOptions:(id)arg1;
- (id)initWithImageReaderOptions:(id)arg1 error:(id*)arg2;
- (id)languages;
- (id)textFeatureFilter;

@end
