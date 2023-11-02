
@interface SFRequestParameters : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationName;
    NSString * _applicationVersion;
    bool  _detectMultipleUtterances;
    NSURL * _dynamicLanguageModel;
    NSURL * _dynamicVocabulary;
    bool  _enableAutoPunctuation;
    NSArray * _inlineItemList;
    NSString * _language;
    double  _maximumRecognitionDuration;
    NSURL * _modelOverrideURL;
    bool  _narrowband;
    bool  _onDeviceOnly;
    NSDictionary * _recognitionOverrides;
    NSString * _requestIdentifier;
    NSString * _task;
    NSString * _taskIdentifier;
}

@property (nonatomic, copy) NSString *applicationName;
@property (nonatomic, copy) NSString *applicationVersion;
@property (nonatomic) bool detectMultipleUtterances;
@property (nonatomic, copy) NSURL *dynamicLanguageModel;
@property (nonatomic, copy) NSURL *dynamicVocabulary;
@property (nonatomic) bool enableAutoPunctuation;
@property (nonatomic, copy) NSArray *inlineItemList;
@property (nonatomic, copy) NSString *language;
@property (nonatomic) double maximumRecognitionDuration;
@property (nonatomic, copy) NSURL *modelOverrideURL;
@property (nonatomic) bool narrowband;
@property (nonatomic) bool onDeviceOnly;
@property (nonatomic, copy) NSDictionary *recognitionOverrides;
@property (nonatomic, copy) NSString *requestIdentifier;
@property (nonatomic, copy) NSString *task;
@property (nonatomic, copy) NSString *taskIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationName;
- (id)applicationVersion;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)detectMultipleUtterances;
- (id)dynamicLanguageModel;
- (id)dynamicVocabulary;
- (bool)enableAutoPunctuation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)inlineItemList;
- (bool)isEqual:(id)arg1;
- (id)language;
- (double)maximumRecognitionDuration;
- (id)modelOverrideURL;
- (bool)narrowband;
- (bool)onDeviceOnly;
- (id)recognitionOverrides;
- (id)requestIdentifier;
- (void)setApplicationName:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setDetectMultipleUtterances:(bool)arg1;
- (void)setDynamicLanguageModel:(id)arg1;
- (void)setDynamicVocabulary:(id)arg1;
- (void)setEnableAutoPunctuation:(bool)arg1;
- (void)setInlineItemList:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMaximumRecognitionDuration:(double)arg1;
- (void)setModelOverrideURL:(id)arg1;
- (void)setNarrowband:(bool)arg1;
- (void)setOnDeviceOnly:(bool)arg1;
- (void)setRecognitionOverrides:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (id)task;
- (id)taskIdentifier;

@end
