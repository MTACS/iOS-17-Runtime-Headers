
@interface SNLPITFMModelBundle : NSObject {
    NSURL * _configURL;
    NSURL * _contextVocabularyURL;
    NSURL * _espressoModelURL;
    NSURL * _spanVocabularyURL;
    NSURL * _targetVocabularyURL;
    NSURL * _versionURL;
}

@property (nonatomic, readonly) NSURL *configURL;
@property (nonatomic, readonly) NSURL *contextVocabularyURL;
@property (nonatomic, readonly) NSURL *espressoModelURL;
@property (nonatomic, readonly) NSURL *spanVocabularyURL;
@property (nonatomic, readonly) NSURL *targetVocabularyURL;
@property (nonatomic, readonly) NSURL *versionURL;

+ (id)_errorForMissingResourceURL:(id)arg1 errorDomain:(id)arg2;
+ (id)_existErrorForEspressoModelURL:(id)arg1 configURL:(id)arg2 contextVocabularyURL:(id)arg3 spanVocabularyURL:(id)arg4 targetVocabularyURL:(id)arg5 versionURL:(id)arg6 errorDomain:(id)arg7;
+ (id)bundleWithEspressoModelURL:(id)arg1 configURL:(id)arg2 contextVocabularyURL:(id)arg3 spanVocabularyURL:(id)arg4 targetVocabularyURL:(id)arg5 versionURL:(id)arg6 errorDomain:(id)arg7 error:(id*)arg8;

- (void).cxx_destruct;
- (id)_initWithEspressoModelURL:(id)arg1 configURL:(id)arg2 contextVocabularyURL:(id)arg3 spanVocabularyURL:(id)arg4 targetVocabularyURL:(id)arg5 versionURL:(id)arg6;
- (id)configURL;
- (id)contextVocabularyURL;
- (id)espressoModelURL;
- (id)spanVocabularyURL;
- (id)targetVocabularyURL;
- (id)versionURL;

@end
