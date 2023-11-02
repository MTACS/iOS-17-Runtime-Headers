
@interface VNRecognizeTextRequestConfiguration : VNStatefulRequestConfiguration {
    bool  _automaticallyDetectsLanguage;
    NSArray * _customWords;
    float  _minimumTextHeight;
    NSArray * _recognitionLanguages;
    long long  _recognitionLevel;
    bool  _usesLanguageCorrection;
}

@property (nonatomic) bool automaticallyDetectsLanguage;
@property (nonatomic, copy) NSArray *customWords;
@property (nonatomic) float minimumTextHeight;
@property (nonatomic, copy) NSArray *recognitionLanguages;
@property (nonatomic) long long recognitionLevel;
@property (nonatomic) bool usesLanguageCorrection;

- (void).cxx_destruct;
- (bool)automaticallyDetectsLanguage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customWords;
- (id)initWithRequestClass:(Class)arg1;
- (float)minimumTextHeight;
- (id)recognitionLanguages;
- (long long)recognitionLevel;
- (void)setAutomaticallyDetectsLanguage:(bool)arg1;
- (void)setCustomWords:(id)arg1;
- (void)setMinimumTextHeight:(float)arg1;
- (void)setRecognitionLanguages:(id)arg1;
- (void)setRecognitionLevel:(long long)arg1;
- (void)setUsesLanguageCorrection:(bool)arg1;
- (bool)usesLanguageCorrection;

@end
