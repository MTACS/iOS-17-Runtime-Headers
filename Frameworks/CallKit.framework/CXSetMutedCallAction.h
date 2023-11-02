
@interface CXSetMutedCallAction : CXCallAction {
    bool  _bottomUpMute;
    bool  _muted;
}

@property (getter=isBottomUpMute, nonatomic) bool bottomUpMute;
@property (getter=isMuted, nonatomic) bool muted;

+ (bool)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 muted:(bool)arg2;
- (id)initWithCallUUID:(id)arg1 muted:(bool)arg2 bottomUpMute:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isBottomUpMute;
- (bool)isMuted;
- (void)setBottomUpMute:(bool)arg1;
- (void)setMuted:(bool)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
