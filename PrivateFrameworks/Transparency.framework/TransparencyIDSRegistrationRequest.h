
@interface TransparencyIDSRegistrationRequest : NSObject <NSSecureCoding> {
    bool  _dontWaitForKeySigning;
    double  _initialTimeout;
    NSDictionary * _requests;
}

@property bool dontWaitForKeySigning;
@property double initialTimeout;
@property (retain) NSDictionary *requests;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)dontWaitForKeySigning;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignatureRequests:(id)arg1;
- (double)initialTimeout;
- (id)requests;
- (void)setDontWaitForKeySigning:(bool)arg1;
- (void)setInitialTimeout:(double)arg1;
- (void)setRequests:(id)arg1;

@end
