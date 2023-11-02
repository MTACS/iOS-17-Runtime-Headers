
@interface _LTTaskContext : NSObject <NSSecureCoding> {
    NSString * _appIdentifier;
    NSString * _deviceOS;
    NSString * _deviceType;
    _LTLocalePair * _localePair;
    NSString * _sessionID;
    long long  _taskHint;
}

@property (nonatomic, readonly, copy) NSString *appIdentifier;
@property (nonatomic, readonly, copy) NSString *deviceOS;
@property (nonatomic, readonly, copy) NSString *deviceType;
@property (nonatomic, readonly, copy) _LTLocalePair *localePair;
@property (nonatomic, readonly, copy) NSString *sessionID;
@property (nonatomic, readonly) long long taskHint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)deviceOS;
- (id)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionID:(id)arg1 taskHint:(long long)arg2 localePair:(id)arg3 deviceOS:(id)arg4 deviceType:(id)arg5 appIdentifier:(id)arg6;
- (id)localePair;
- (id)sessionID;
- (long long)taskHint;

@end
