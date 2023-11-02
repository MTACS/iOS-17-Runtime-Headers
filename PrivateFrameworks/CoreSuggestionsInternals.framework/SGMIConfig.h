
@interface SGMIConfig : NSObject {
    NSRegularExpression * _attachmentLinkDetectionRegex;
    float  _bodyAnalysisSamplingFactor;
    double  _defaultTimeIntervalForAWarning;
    double  _defaultTimeIntervalToEndWarningExposition;
    double  _defaultTimeIntervalToStartWarningExposition;
    NSDictionary * _followUpWarningsParameters;
    _PASLazyPurgeableResult * _lazyDetectors;
}

@property (nonatomic, readonly) NSRegularExpression *attachmentLinkDetectionRegex;
@property (nonatomic, readonly) float bodyAnalysisSamplingFactor;
@property (nonatomic, readonly) double defaultTimeIntervalForAWarning;
@property (nonatomic, readonly) double defaultTimeIntervalToEndWarningExposition;
@property (nonatomic, readonly) double defaultTimeIntervalToStartWarningExposition;
@property (nonatomic, readonly) NSDictionary *detectors;
@property (nonatomic, readonly) NSDictionary *followUpWarningsParameters;

+ (id)_defaultConfig;
+ (id)defaultConfig;

- (void).cxx_destruct;
- (id)attachmentLinkDetectionRegex;
- (float)bodyAnalysisSamplingFactor;
- (double)defaultTimeIntervalForAWarning;
- (double)defaultTimeIntervalToEndWarningExposition;
- (double)defaultTimeIntervalToStartWarningExposition;
- (id)description;
- (id)detectors;
- (id)followUpWarningsParameters;
- (id)init;
- (id)initWithAssetAttachmentDictionary:(id)arg1 attachmentLinkDetection:(id)arg2 recipientConservativeDictionary:(id)arg3 recipientDictionary:(id)arg4 nicknameDictionary:(id)arg5 followUpOnOutgoingMailsQuestionsDictionary:(id)arg6 followUpOnOutgoingMailsAsksDictionary:(id)arg7 followUpOnIncomingMailsDictionary:(id)arg8 bodyAnalysisSamplingFactor:(float)arg9 defaultTimeIntervalToStartWarningExposition:(double)arg10 defaultTimeIntervalForAWarning:(double)arg11 defaultTimeIntervalToEndWarningExposition:(double)arg12 followUpWarningsParameters:(id)arg13;
- (id)objectForKeyedSubscript:(id)arg1;
- (bool)shouldAnalyzeBody;

@end
