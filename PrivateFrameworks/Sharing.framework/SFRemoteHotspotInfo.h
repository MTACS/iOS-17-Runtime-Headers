
@interface SFRemoteHotspotInfo : NSObject <NSSecureCoding> {
    NSNumber * _channel;
    NSString * _name;
    NSString * _password;
}

@property (retain) NSNumber *channel;
@property (copy) NSString *name;
@property (copy) NSString *password;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channel;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 password:(id)arg2 channel:(id)arg3;
- (id)name;
- (id)password;
- (void)setChannel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPassword:(id)arg1;

@end
