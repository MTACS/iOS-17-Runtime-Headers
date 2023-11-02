
@interface CSUSceneNetV5CustomClassifierConfiguration : NSObject {
    NSString * _classificationTensorName;
    long long  _customClassifierIdentifier;
    NSString * _espressoNetworkPath;
    int  _executionEngine;
    NSString * _inputImageTensorName;
    long long  _revision;
    CSUSceneNetV5CustomClassifierTaxonomy * _taxonomy;
    NSString * _taxonomyPath;
    NSString * _vocabularyName;
}

@property (nonatomic, readonly, copy) NSString *classificationTensorName;
@property (nonatomic, readonly) long long customClassifierIdentifier;
@property (nonatomic, readonly, copy) NSString *espressoNetworkPath;
@property int executionEngine;
@property (nonatomic, readonly, copy) NSString *inputImageTensorName;
@property (nonatomic, readonly) long long revision;
@property (nonatomic, readonly) CSUSceneNetV5CustomClassifierTaxonomy *taxonomy;
@property (nonatomic, readonly, copy) NSString *taxonomyPath;
@property (nonatomic, readonly) NSString *vocabularyName;

+ (id)availableCityNatureRevisions;
+ (id)availableClassifierAlphaRevisions;
+ (id)availableClassifierBetaRevisions;
+ (id)availableJunkHierarchicalRevisions;
+ (id)availableJunkLeafRevisions;
+ (id)cityNatureConfigurationForRevision:(long long)arg1 error:(id*)arg2;
+ (id)classifierAlphaConfigurationForRevision:(long long)arg1 error:(id*)arg2;
+ (id)classifierBetaConfigurationForRevision:(long long)arg1 error:(id*)arg2;
+ (id)junkHierarchicalConfigurationForRevision:(long long)arg1 error:(id*)arg2;
+ (id)junkLeafConfigurationForRevision:(long long)arg1 error:(id*)arg2;
+ (id)validateAndInitCustomClassifierForRevision:(long long)arg1 forNetworkPath:(id)arg2 forTaxonomyPath:(id)arg3 withInputImageTensorName:(id)arg4 withVocabularyName:(id)arg5 withClassificationTensorName:(id)arg6 withIdentifier:(long long)arg7 error:(id*)arg8;

- (void).cxx_destruct;
- (id)classificationTensorName;
- (long long)customClassifierIdentifier;
- (id)espressoNetworkPath;
- (int)executionEngine;
- (id)initConfigurationForRevision:(long long)arg1 espressoNetworkPath:(id)arg2 inputImageTensorName:(id)arg3 vocabularyName:(id)arg4 taxonomyPath:(id)arg5 identifier:(long long)arg6 classificationTensorName:(id)arg7;
- (id)inputImageTensorName;
- (long long)revision;
- (void)setExecutionEngine:(int)arg1;
- (id)taxonomy;
- (id)taxonomyPath;
- (id)vocabularyName;

@end
