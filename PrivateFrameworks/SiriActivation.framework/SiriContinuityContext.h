
@interface SiriContinuityContext : SiriContext {
    NSNumber * _isTemporaryDevice;
    AFRequestInfo * _requestInfo;
    NSDictionary * _userActivity;
}

@property (nonatomic, readonly) AFRequestInfo *requestInfo;
@property (nonatomic, readonly) NSDictionary *userActivity;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestInfo:(id)arg1;
- (id)initWithSpeechRequestOptions:(id)arg1;
- (id)initWithUserActivity:(id)arg1;
- (bool)isTemporaryDevice;
- (id)requestInfo;
- (id)speechRequestOptions;
- (id)userActivity;

@end
