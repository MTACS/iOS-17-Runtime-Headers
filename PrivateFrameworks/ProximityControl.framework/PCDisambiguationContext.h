
@interface PCDisambiguationContext : NSObject <NSSecureCoding> {
    <PCActivity> * _activity;
    NSData * _activityData;
    PCDeviceIdentifier * _deviceIdentifier;
    PCHomeKitIdentifier * _identifier;
    long long  _interactionDirection;
}

@property (nonatomic, readonly) <PCActivity> *activity;
@property (nonatomic, readonly) PCDeviceIdentifier *deviceIdentifier;
@property (nonatomic, readonly) PCHomeKitIdentifier *identifier;
@property (nonatomic, readonly) long long interactionDirection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activity;
- (void)cacheActivityData:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 direction:(long long)arg2 activityData:(id)arg3;
- (long long)interactionDirection;
- (id)leadingImage;
- (id)subtitleText;
- (id)titleText;

@end
