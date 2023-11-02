
@interface SHMatcherResponse : NSObject <NSSecureCoding> {
    NSError * _error;
    SHMatch * _match;
    double  _recordingIntermission;
    long long  _result;
    double  _retrySeconds;
    NSUUID * _runningAssociatedRequestID;
    SHSignature * _signature;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) bool isStillRunningAssociatedRequest;
@property (nonatomic, readonly) SHMatch *match;
@property (nonatomic, readonly) double recordingIntermission;
@property (nonatomic, readonly) long long result;
@property (nonatomic, readonly) double retrySeconds;
@property (nonatomic, readonly) NSUUID *runningAssociatedRequestID;
@property (nonatomic, readonly) SHSignature *signature;

+ (id)errorResponseForSignature:(id)arg1 error:(id)arg2;
+ (id)matchWithRecordingIntermission:(double)arg1 retrySeconds:(double)arg2 match:(id)arg3;
+ (id)noMatchWithRecordingIntermission:(double)arg1 retrySeconds:(double)arg2 signature:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordingIntermission:(double)arg1 retrySeconds:(double)arg2 match:(id)arg3 signature:(id)arg4 associatedRequestID:(id)arg5 result:(long long)arg6 error:(id)arg7;
- (id)initWithRecordingIntermission:(double)arg1 retrySeconds:(double)arg2 match:(id)arg3 signature:(id)arg4 runningAssociatedRequestID:(id)arg5 error:(id)arg6;
- (bool)isStillRunningAssociatedRequest;
- (id)match;
- (double)recordingIntermission;
- (long long)result;
- (double)retrySeconds;
- (id)runningAssociatedRequestID;
- (id)signature;
- (void)validate;

@end
