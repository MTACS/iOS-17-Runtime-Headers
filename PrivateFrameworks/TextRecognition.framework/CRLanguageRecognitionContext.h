
@interface CRLanguageRecognitionContext : NSObject {
    NSMutableString * _contextString;
    NSString * _defaultLocale;
    NSMutableArray * _featuresAccumulator;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _languageRecognitionLock;
    NSString * _recognizedLanguage;
    unsigned long long  _script;
}

@property (retain) NSMutableString *contextString;
@property (readonly) NSString *defaultLocale;
@property (retain) NSMutableArray *featuresAccumulator;
@property struct os_unfair_lock_s { unsigned int x1; } languageRecognitionLock;
@property (readonly) NSString *recognizedLanguage;
@property unsigned long long script;

- (void).cxx_destruct;
- (void)_updateFeatureLocale:(id)arg1;
- (id)contextString;
- (id)defaultLocale;
- (id)featuresAccumulator;
- (id)initWithScript:(unsigned long long)arg1 defaultLocale:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })languageRecognitionLock;
- (void)processFeature:(id)arg1 recognizer:(id)arg2;
- (id)recognizedLanguage;
- (void)runRecognitionWithRecognizer:(id)arg1 force:(bool)arg2;
- (unsigned long long)script;
- (void)setContextString:(id)arg1;
- (void)setFeaturesAccumulator:(id)arg1;
- (void)setLanguageRecognitionLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setScript:(unsigned long long)arg1;

@end
