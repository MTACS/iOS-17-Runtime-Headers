
@interface CSVoiceTriggerRTModelRequestOptions : NSObject <NSCopying, NSSecureCoding> {
    CSCoreSpeechServicesAccessoryInfo * _accessoryInfo;
    NSNumber * _accessoryModelType;
    bool  _allowMph;
    NSUUID * _endpointId;
    NSNumber * _engineMajorVersion;
    NSNumber * _engineMinorVersion;
    NSString * _siriLocale;
    NSNumber * _userSelectedPhraseType;
}

@property (nonatomic, readonly, copy) CSCoreSpeechServicesAccessoryInfo *accessoryInfo;
@property (nonatomic, readonly) NSNumber *accessoryModelType;
@property (nonatomic, readonly) bool allowMph;
@property (nonatomic, readonly) NSUUID *endpointId;
@property (nonatomic, readonly) NSNumber *engineMajorVersion;
@property (nonatomic, readonly) NSNumber *engineMinorVersion;
@property (nonatomic, readonly) NSString *siriLocale;
@property (nonatomic, readonly) NSNumber *userSelectedPhraseType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryInfo;
- (id)accessoryModelType;
- (bool)allowMph;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endpointId;
- (id)engineMajorVersion;
- (id)engineMinorVersion;
- (id)initWithCSRTModelRequestOptions:(id)arg1 builder:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithMutableBuilder:(id /* block */)arg1;
- (id)siriLocale;
- (id)userSelectedPhraseType;

@end
