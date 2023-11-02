
@interface _SFSpeechRecognizerSupportedFeatures : NSObject <NSSecureCoding> {
    unsigned long long  _flags;
    bool  _isSingleUtteranceTask;
    NSLocale * _locale;
    _SFSpeechRecognizerModelOptions * _modelOptions;
    NSSet * _taskHints;
    EARVoiceCommandActiveSet * _voiceCommandActiveSet;
}

@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, readonly) bool isSingleUtteranceTask;
@property (nonatomic, readonly) NSString *languageIdentifier;
@property (nonatomic, readonly, copy) NSLocale *locale;
@property (nonatomic, readonly, copy) _SFSpeechRecognizerModelOptions *modelOptions;
@property (nonatomic, readonly, copy) NSSet *taskHints;
@property (nonatomic, readonly, copy) NSSet *taskNames;
@property (nonatomic, readonly, copy) EARVoiceCommandActiveSet *voiceCommandActiveSet;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)featuresByAddingFlags:(unsigned long long)arg1;
- (id)featuresByAddingTaskHints:(id)arg1;
- (id)featuresWithCommandRecogitionForActiveSet:(id)arg1;
- (unsigned long long)flags;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocale:(id)arg1 taskHints:(id)arg2 voiceCommandActiveSet:(id)arg3 modelOptions:(id)arg4 flags:(unsigned long long)arg5;
- (bool)isSingleUtteranceTask;
- (id)languageIdentifier;
- (id)locale;
- (id)modelOptions;
- (id)taskHints;
- (bool)taskHintsContainsHint:(long long)arg1;
- (id)taskNames;
- (id)voiceCommandActiveSet;

@end
