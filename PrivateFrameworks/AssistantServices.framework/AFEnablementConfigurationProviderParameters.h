
@interface AFEnablementConfigurationProviderParameters : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _dateEndedResolvingExperiment;
    NSDate * _dateEndedResolvingUserStatus;
    NSDate * _dateStartedResolvingExperiment;
    NSDate * _dateStartedResolvingUserStatus;
    long long  _enablementFlow;
    AFExperiment * _experiment;
    NSError * _experimentFetchError;
    bool  _newUser;
    NSDictionary * _outputVoiceCountForRecognitionLanguage;
    bool  _recognitionLanguageWithMultipleOutputVoicesExists;
    NSError * _userStatusFetchError;
}

@property (nonatomic, readonly, copy) NSDate *dateEndedResolvingExperiment;
@property (nonatomic, readonly, copy) NSDate *dateEndedResolvingUserStatus;
@property (nonatomic, readonly, copy) NSDate *dateStartedResolvingExperiment;
@property (nonatomic, readonly, copy) NSDate *dateStartedResolvingUserStatus;
@property (nonatomic, readonly) long long enablementFlow;
@property (nonatomic, readonly, copy) AFExperiment *experiment;
@property (nonatomic, readonly, copy) NSError *experimentFetchError;
@property (nonatomic, readonly) bool newUser;
@property (nonatomic, readonly, copy) NSDictionary *outputVoiceCountForRecognitionLanguage;
@property (nonatomic, readonly) bool recognitionLanguageWithMultipleOutputVoicesExists;
@property (nonatomic, readonly, copy) NSError *userStatusFetchError;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateEndedResolvingExperiment;
- (id)dateEndedResolvingUserStatus;
- (id)dateStartedResolvingExperiment;
- (id)dateStartedResolvingUserStatus;
- (id)description;
- (long long)enablementFlow;
- (void)encodeWithCoder:(id)arg1;
- (id)experiment;
- (id)experimentFetchError;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnablementFlow:(long long)arg1 newUser:(bool)arg2 userStatusFetchError:(id)arg3 dateStartedResolvingUserStatus:(id)arg4 dateEndedResolvingUserStatus:(id)arg5 experiment:(id)arg6 experimentFetchError:(id)arg7 dateStartedResolvingExperiment:(id)arg8 dateEndedResolvingExperiment:(id)arg9 outputVoiceCountForRecognitionLanguage:(id)arg10 recognitionLanguageWithMultipleOutputVoicesExists:(bool)arg11;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (bool)newUser;
- (id)outputVoiceCountForRecognitionLanguage;
- (bool)recognitionLanguageWithMultipleOutputVoicesExists;
- (id)userStatusFetchError;

@end
