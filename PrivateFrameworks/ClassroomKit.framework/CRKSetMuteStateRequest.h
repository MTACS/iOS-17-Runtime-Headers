
@interface CRKSetMuteStateRequest : CATTaskRequest {
    bool  _mute;
}

@property (getter=shouldMute, nonatomic) bool mute;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setMute:(bool)arg1;
- (bool)shouldMute;

@end
