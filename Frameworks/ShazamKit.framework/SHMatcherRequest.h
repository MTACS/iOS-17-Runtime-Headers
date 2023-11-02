
@interface SHMatcherRequest : NSObject <NSSecureCoding> {
    NSDate * _deadline;
    NSString * _installationID;
    NSUUID * _requestID;
    bool  _sendNotifications;
    SHSignature * _signature;
    long long  _stopCondition;
    long long  _type;
}

@property (nonatomic, readonly) NSDate *deadline;
@property (nonatomic, readonly) bool hasHitDeadline;
@property (nonatomic, readonly, copy) NSString *installationID;
@property (nonatomic, readonly) NSUUID *requestID;
@property (nonatomic, readonly) bool sendNotifications;
@property (nonatomic, readonly) SHSignature *signature;
@property (nonatomic, readonly) long long stopCondition;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) double watchdogTimeout;

+ (id)requestOnceWithAppIntentForRequestID:(id)arg1;
+ (id)requestOnceWithNotifications:(bool)arg1;
+ (id)requestOnceWithNotifications:(bool)arg1 forRequestID:(id)arg2;
+ (id)requestSignatureGenerationOnce;
+ (id)requestSignatureGenerationOnceForRequestID:(id)arg1;
+ (id)requestSignatureGenerationUntilDeadline:(id)arg1;
+ (id)requestSignatureGenerationUntilDeadline:(id)arg1 forRequestID:(id)arg2;
+ (id)requestToMatchSignature:(id)arg1 installationID:(id)arg2 sendNotifications:(bool)arg3;
+ (id)requestToMatchSignature:(id)arg1 installationID:(id)arg2 sendNotifications:(bool)arg3 forRequestID:(id)arg4;
+ (id)requestToMatchUntilDeadline:(id)arg1 sendNotifications:(bool)arg2;
+ (id)requestToMatchUntilDeadline:(id)arg1 sendNotifications:(bool)arg2 forRequestID:(id)arg3;
+ (id)requestUntilMatchWithNotifications:(bool)arg1;
+ (id)requestUntilMatchWithNotifications:(bool)arg1 forRequestID:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deadline;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasHitDeadline;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignature:(id)arg1 deadline:(id)arg2 installationID:(id)arg3 sendNotifications:(bool)arg4 stopCondition:(long long)arg5 requestType:(long long)arg6 requestID:(id)arg7;
- (id)initWithSignature:(id)arg1 deadline:(id)arg2 sendNotifications:(bool)arg3 stopCondition:(long long)arg4 requestType:(long long)arg5 requestID:(id)arg6;
- (id)installationID;
- (id)requestID;
- (bool)sendNotifications;
- (id)signature;
- (long long)stopCondition;
- (long long)type;
- (double)watchdogTimeout;

@end
