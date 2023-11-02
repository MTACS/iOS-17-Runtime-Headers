
@interface AFTriggerlessListeningOptions : NSObject <NSCopying, NSSecureCoding> {
    double  _endpointDelay;
    bool  _playAlertBeforeListening;
    bool  _showUIDuringListening;
}

@property (nonatomic, readonly) bool beepBeforeListening;
@property (nonatomic, readonly) double delay;
@property (nonatomic, readonly) double endpointDelay;
@property (nonatomic) bool playAlertBeforeListening;
@property (nonatomic, readonly) bool showUIBeforeListening;
@property (nonatomic) bool showUIDuringListening;

+ (bool)supportsSecureCoding;

- (id)_initWithShowUIDuringListening:(bool)arg1 playAlertBeforeListening:(bool)arg2;
- (bool)beepBeforeListening;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)delay;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endpointDelay;
- (id)initWithCoder:(id)arg1;
- (bool)playAlertBeforeListening;
- (void)setPlayAlertBeforeListening:(bool)arg1;
- (void)setShowUIDuringListening:(bool)arg1;
- (bool)showUIBeforeListening;
- (bool)showUIDuringListening;

@end
