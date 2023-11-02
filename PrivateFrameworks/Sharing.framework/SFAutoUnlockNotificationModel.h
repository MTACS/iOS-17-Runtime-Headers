
@interface SFAutoUnlockNotificationModel : NSObject <NSSecureCoding> {
    NSData * _applicationIconData;
    NSString * _applicationName;
    NSString * _deviceName;
    NSString * _modelIdentifier;
    NSString * _navBarTitle;
    NSString * _subtitle;
    long long  _type;
}

@property (nonatomic, retain) NSData *applicationIconData;
@property (nonatomic, copy) NSString *applicationName;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly, copy) NSString *modelIdentifier;
@property (nonatomic, copy) NSString *navBarTitle;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIconData;
- (id)applicationName;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 modelIdentifier:(id)arg2 type:(long long)arg3;
- (id)modelIdentifier;
- (id)navBarTitle;
- (void)setApplicationIconData:(id)arg1;
- (void)setApplicationName:(id)arg1;
- (void)setNavBarTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (long long)type;

@end
