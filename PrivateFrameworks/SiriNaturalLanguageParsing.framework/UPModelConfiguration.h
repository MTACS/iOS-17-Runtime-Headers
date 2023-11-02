
@interface UPModelConfiguration : NSObject {
    NSString * _bioLabelsVocabPath;
    NSString * _calibrationEspressoModelPath;
    NSString * _configPath;
    NSString * _espressoModelPath;
    NSString * _grammarPath;
    NSString * _intentVocabPath;
    NSString * _parserEspressoModelPath;
    NSString * _spanVocabPath;
}

@property (readonly, copy) NSString *bioLabelsVocabPath;
@property (readonly, copy) NSString *calibrationEspressoModelPath;
@property (readonly, copy) NSString *configPath;
@property (readonly, copy) NSString *espressoModelPath;
@property (readonly, copy) NSString *grammarPath;
@property (readonly, copy) NSString *intentVocabPath;
@property (readonly, copy) NSString *parserEspressoModelPath;
@property (readonly, copy) NSString *spanVocabPath;

+ (id)_configurationWithBioLabelsVocabPath:(id)arg1 configPath:(id)arg2 grammarPath:(id)arg3 intentVocabPath:(id)arg4 spanVocabPath:(id)arg5 parserEspressoModelPath:(id)arg6 calibrationEspressoModelPath:(id)arg7 error:(id*)arg8;
+ (id)configurationFromDirectoryUrl:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_initWithBioLabelsVocabPath:(id)arg1 configPath:(id)arg2 grammarPath:(id)arg3 intentVocabPath:(id)arg4 spanVocabPath:(id)arg5 parserEspressoModelPath:(id)arg6 calibrationEspressoModelPath:(id)arg7;
- (id)bioLabelsVocabPath;
- (id)calibrationEspressoModelPath;
- (id)configPath;
- (id)espressoModelPath;
- (id)grammarPath;
- (id)intentVocabPath;
- (id)parserEspressoModelPath;
- (id)spanVocabPath;

@end
