
@interface FCNewsTabiFeedPersonalizationConfiguration : NSObject {
    FCNewsTabiFeedPersonalizationOutputConfiguration * _bundleOutputConfiguration;
    long long  _fullBodyEmbeddingDimension;
    long long  _maxTopicIds;
    FCNewsTabiFeedPersonalizationOutputConfiguration * _nonBundleOutputConfiguration;
    long long  _titleEmbeddingDimension;
}

@property (nonatomic, retain) FCNewsTabiFeedPersonalizationOutputConfiguration *bundleOutputConfiguration;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) long long fullBodyEmbeddingDimension;
@property (nonatomic) long long maxTopicIds;
@property (nonatomic, retain) FCNewsTabiFeedPersonalizationOutputConfiguration *nonBundleOutputConfiguration;
@property (nonatomic) long long titleEmbeddingDimension;

- (void).cxx_destruct;
- (id)bundleOutputConfiguration;
- (id)description;
- (id)dictionary;
- (long long)fullBodyEmbeddingDimension;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithMaxTopicIds:(long long)arg1 titleEmbeddingDimension:(long long)arg2 fullBodyEmbeddingDimension:(long long)arg3 bundleOutputConfiguration:(id)arg4 nonBundleOutputConfiguration:(id)arg5;
- (long long)maxTopicIds;
- (id)nonBundleOutputConfiguration;
- (void)setBundleOutputConfiguration:(id)arg1;
- (void)setFullBodyEmbeddingDimension:(long long)arg1;
- (void)setMaxTopicIds:(long long)arg1;
- (void)setNonBundleOutputConfiguration:(id)arg1;
- (void)setTitleEmbeddingDimension:(long long)arg1;
- (long long)titleEmbeddingDimension;

@end
