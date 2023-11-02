
@interface CXSetScreeningCallAction : CXCallAction {
    bool  _screening;
}

@property (getter=isScreening, nonatomic) bool screening;

+ (bool)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 screening:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isScreening;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setScreening:(bool)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
