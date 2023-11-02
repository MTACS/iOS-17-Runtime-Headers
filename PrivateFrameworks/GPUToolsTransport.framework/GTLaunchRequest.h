
@interface GTLaunchRequest : NSObject <NSSecureCoding> {
    NSArray * _arguments;
    NSString * _deviceUDID;
    NSDictionary * _environment;
    NSUUID * _sessionUUID;
}

@property (nonatomic, copy) NSArray *arguments;
@property (nonatomic, copy) NSString *deviceUDID;
@property (nonatomic, copy) NSDictionary *environment;
@property (nonatomic, copy) NSUUID *sessionUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arguments;
- (id)deviceUDID;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)sessionUUID;
- (void)setArguments:(id)arg1;
- (void)setDeviceUDID:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setSessionUUID:(id)arg1;

@end
