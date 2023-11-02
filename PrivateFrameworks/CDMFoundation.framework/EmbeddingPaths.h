
@interface EmbeddingPaths : NSObject {
    NSString * _configPath;
    NSString * _modelPath;
    NSString * _reformulationPath;
    NSString * _srcVocabPath;
}

@property (nonatomic, readonly) NSString *configPath;
@property (nonatomic, readonly) NSString *modelPath;
@property (nonatomic, readonly) NSString *reformulationPath;
@property (nonatomic, readonly) NSString *srcVocabPath;

- (void).cxx_destruct;
- (id)configPath;
- (id)initWithSrcVocabPath:(id)arg1 modelPath:(id)arg2 configPath:(id)arg3 reformulationPath:(id)arg4;
- (id)modelPath;
- (id)reformulationPath;
- (id)srcVocabPath;

@end
