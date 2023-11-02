
@interface JFXTrackedEffectProperties : NSObject <NSCopying, NSSecureCoding> {
    <JFXTrackedEffectPropertiesDelegate> * _delegate;
    bool  _disableTracking;
    long long  _internalTrackingType;
}

@property (nonatomic, readonly) long long currentTrackingType;
@property (nonatomic) <JFXTrackedEffectPropertiesDelegate> *delegate;
@property (getter=isTrackingDisabled) bool disableTracking;
@property long long internalTrackingType;
@property (nonatomic) long long trackingType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)currentTrackingType;
- (id)delegate;
- (void)enableTrackingState:(bool)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (long long)internalTrackingType;
- (bool)isTrackingDisabled;
- (void)setDelegate:(id)arg1;
- (void)setDisableTracking:(bool)arg1;
- (void)setInternalTrackingType:(long long)arg1;
- (void)setTrackingType:(long long)arg1;
- (long long)trackingType;

@end
