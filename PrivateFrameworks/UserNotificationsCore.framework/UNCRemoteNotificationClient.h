
@interface UNCRemoteNotificationClient : NSObject <NSCoding, NSSecureCoding> {
    NSString * _environment;
    NSData * _lastKnownDeviceToken;
    NSString * _tokenIdentifier;
}

@property (nonatomic, copy) NSString *environment;
@property (nonatomic, copy) NSData *lastKnownDeviceToken;
@property (nonatomic, copy) NSString *tokenIdentifier;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)environment;
- (id)initWithCoder:(id)arg1;
- (id)lastKnownDeviceToken;
- (void)setEnvironment:(id)arg1;
- (void)setLastKnownDeviceToken:(id)arg1;
- (void)setTokenIdentifier:(id)arg1;
- (id)tokenIdentifier;

@end
