
@interface SOSiteCode : NSObject <NSSecureCoding> {
    NSString * _code;
    NSString * _networkFingerprint;
    NSDate * _timeStamp;
}

@property (nonatomic, readonly) NSString *code;
@property (nonatomic, readonly) NSString *networkFingerprint;
@property (nonatomic, readonly) NSDate *timeStamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)age;
- (id)code;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSiteCode:(id)arg1 forNetworkFingerprint:(id)arg2;
- (id)networkFingerprint;
- (id)timeStamp;

@end
