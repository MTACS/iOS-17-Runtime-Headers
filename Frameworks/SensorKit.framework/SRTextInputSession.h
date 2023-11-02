
@interface SRTextInputSession : NSObject <NSSecureCoding, SRSampleExporting> {
    double  _duration;
    NSString * _sessionIdentifier;
    long long  _sessionType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property long long sessionType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (id)textInputSessionWithDuration:(double)arg1 sessionType:(long long)arg2 sessionIdentifier:(id)arg3;

- (void)dealloc;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sessionIdentifier;
- (long long)sessionType;
- (void)setDuration:(double)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSessionType:(long long)arg1;
- (id)sr_dictionaryRepresentation;

@end
