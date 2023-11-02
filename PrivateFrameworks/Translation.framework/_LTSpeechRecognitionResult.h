
@interface _LTSpeechRecognitionResult : NSObject <NSSecureCoding> {
    _LTSpeechRecognitionSausage * _bestRecognitionAlternatives;
    bool  _final;
    NSLocale * _locale;
    NSString * _modelVersion;
    bool  _stable;
    NSArray * _transcriptions;
}

@property (nonatomic, retain) _LTSpeechRecognitionSausage *bestRecognitionAlternatives;
@property (getter=isFinal, nonatomic) bool final;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic, retain) NSString *modelVersion;
@property (getter=isStable, nonatomic) bool stable;
@property (nonatomic, retain) NSArray *transcriptions;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bestRecognitionAlternatives;
- (id)bestTranscription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isFinal;
- (bool)isStable;
- (id)locale;
- (id)modelVersion;
- (void)setBestRecognitionAlternatives:(id)arg1;
- (void)setFinal:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setStable:(bool)arg1;
- (void)setTranscriptions:(id)arg1;
- (id)transcriptions;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)emptyResultWithLocale:(id)arg1 isFinal:(bool)arg2;
+ (id)resultWithPackage:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(bool)arg4;
+ (id)resultWithResult:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(bool)arg4;

- (id)_transcriptionWithResult:(id)arg1 locale:(id)arg2;
- (id)initEmptyResultWithLocale:(id)arg1 isFinal:(bool)arg2;
- (id)initWithOspreyPartialRecognitionResponse:(id)arg1 isSanitized:(bool)arg2;
- (id)initWithOspreyResponse:(id)arg1 confidenceThreshold:(long long)arg2 isSanitized:(bool)arg3;
- (id)initWithPackage:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(bool)arg4;
- (id)initWithResult:(id)arg1 locale:(id)arg2 modelVersion:(id)arg3 isFinal:(bool)arg4;

@end
