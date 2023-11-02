
@interface SidecarDisplaySendingDeviceSessionState : NSObject <NSSecureCoding> {
    SidecarDevice * _device;
    long long  _sessionState;
}

@property (nonatomic, readonly) SidecarDevice *device;
@property (nonatomic, readonly) long long sessionState;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 sessionState:(long long)arg2;
- (long long)sessionState;

@end
