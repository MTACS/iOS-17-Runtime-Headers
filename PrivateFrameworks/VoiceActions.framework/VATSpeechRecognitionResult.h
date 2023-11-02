
@interface VATSpeechRecognitionResult : NSObject {
    bool  _final;
    NSLocale * _locale;
    NSString * _modelVersion;
    bool  _stable;
    NSArray * _transcriptions;
}

@property (getter=isFinal, nonatomic) bool final;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, retain) NSString *modelVersion;
@property (getter=isStable, nonatomic) bool stable;
@property (nonatomic, retain) NSArray *transcriptions;

+ (id)emptyResultWithLocale:(id)arg1 isFinal:(bool)arg2;
+ (id)resultWithPackage:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(bool)arg4;
+ (id)resultWithResults:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(bool)arg4;

- (void).cxx_destruct;
- (id)_transcriptionWithResult:(id)arg1 locale:(id)arg2;
- (id)bestTranscription;
- (id)initEmptyResultWithLocale:(id)arg1 isFinal:(bool)arg2;
- (id)initWithPackage:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(bool)arg4;
- (id)initWithResults:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(bool)arg4;
- (bool)isFinal;
- (bool)isStable;
- (id)locale;
- (id)modelVersion;
- (void)setFinal:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setStable:(bool)arg1;
- (void)setTranscriptions:(id)arg1;
- (id)transcriptions;

@end
