
@interface AFSpeechParameters : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationName;
    bool  _censorSpeech;
    bool  _detectUtterances;
    bool  _farField;
    NSString * _inputOrigin;
    NSString * _interactionIdentifier;
    NSArray * _jitGrammar;
    NSString * _language;
    CLLocation * _location;
    NSArray * _loggingContext;
    double  _maximumRecognitionDuration;
    NSURL * _modelOverrideURL;
    bool  _narrowband;
    NSURL * _originalAudioFileURL;
    NSDictionary * _overrides;
    NSData * _profile;
    bool  _secureOfflineOnly;
    bool  _shouldStoreAudioOnDevice;
    NSString * _task;
}

@property (nonatomic, readonly, copy) NSString *applicationName;
@property (nonatomic, readonly) bool censorSpeech;
@property (nonatomic, readonly) bool detectUtterances;
@property (nonatomic, readonly) bool farField;
@property (nonatomic, readonly, copy) NSString *inputOrigin;
@property (nonatomic, readonly, copy) NSString *interactionIdentifier;
@property (nonatomic, readonly, copy) NSArray *jitGrammar;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly, copy) NSArray *loggingContext;
@property (nonatomic, readonly) double maximumRecognitionDuration;
@property (nonatomic, readonly, copy) NSURL *modelOverrideURL;
@property (nonatomic, readonly) bool narrowband;
@property (nonatomic, readonly, copy) NSURL *originalAudioFileURL;
@property (nonatomic, readonly, copy) NSDictionary *overrides;
@property (nonatomic, readonly, copy) NSData *profile;
@property (nonatomic, readonly) bool secureOfflineOnly;
@property (nonatomic, readonly) bool shouldStoreAudioOnDevice;
@property (nonatomic, readonly, copy) NSString *task;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)applicationName;
- (bool)censorSpeech;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)detectUtterances;
- (void)encodeWithCoder:(id)arg1;
- (bool)farField;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguage:(id)arg1 interactionIdentifier:(id)arg2 task:(id)arg3 loggingContext:(id)arg4 applicationName:(id)arg5 profile:(id)arg6 overrides:(id)arg7 modelOverrideURL:(id)arg8 originalAudioFileURL:(id)arg9 narrowband:(bool)arg10 detectUtterances:(bool)arg11 censorSpeech:(bool)arg12 farField:(bool)arg13 secureOfflineOnly:(bool)arg14 shouldStoreAudioOnDevice:(bool)arg15 maximumRecognitionDuration:(double)arg16 inputOrigin:(id)arg17 location:(id)arg18 jitGrammar:(id)arg19;
- (id)inputOrigin;
- (id)interactionIdentifier;
- (bool)isEqual:(id)arg1;
- (id)jitGrammar;
- (id)language;
- (id)location;
- (id)loggingContext;
- (double)maximumRecognitionDuration;
- (id)modelOverrideURL;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (bool)narrowband;
- (id)originalAudioFileURL;
- (id)overrides;
- (id)profile;
- (bool)secureOfflineOnly;
- (bool)shouldStoreAudioOnDevice;
- (id)task;

@end
