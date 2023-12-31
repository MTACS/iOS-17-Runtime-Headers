
@interface CXSetHeldCallAction : CXCallAction {
    bool  _onHold;
}

@property (getter=isOnHold, nonatomic) bool onHold;

+ (bool)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 onHold:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isOnHold;
- (void)setOnHold:(bool)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
