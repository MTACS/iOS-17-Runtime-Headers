
@interface _LTSpeechRecognitionSausage : NSObject <NSSecureCoding> {
    NSArray * _bins;
}

@property (nonatomic, retain) NSArray *bins;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bins;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBins:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

- (id)initWithOspreySausage:(id)arg1 choices:(id)arg2 locale:(id)arg3;
- (id)initWithRecognition:(id)arg1 wordConfidenceThreshold:(long long)arg2;

@end
