
@interface CXSetRelayingCallAction : CXCallAction {
    bool  _relaying;
}

@property (getter=isRelaying, nonatomic) bool relaying;

+ (bool)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 relaying:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isRelaying;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setRelaying:(bool)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
