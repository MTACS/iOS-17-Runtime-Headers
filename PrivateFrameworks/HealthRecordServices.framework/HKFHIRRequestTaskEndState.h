
@interface HKFHIRRequestTaskEndState : NSObject <NSCopying, NSSecureCoding> {
    bool  _hadError;
    double  _requestDuration;
    NSURL * _requestedURL;
    long long  _responseStatusCode;
}

@property (nonatomic, readonly, copy) NSString *eventLoggingDescription;
@property (nonatomic, readonly) bool hadError;
@property (nonatomic, readonly) double requestDuration;
@property (nonatomic, readonly, copy) NSURL *requestedURL;
@property (nonatomic, readonly) long long responseStatusCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asErrorEndState;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventLoggingDescription;
- (bool)hadError;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestedURL:(id)arg1 responseStatusCode:(long long)arg2 requestDuration:(double)arg3 hadError:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (double)requestDuration;
- (id)requestedURL;
- (long long)responseStatusCode;

@end
