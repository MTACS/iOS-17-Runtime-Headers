
@interface CXPlayDTMFCallAction : CXCallAction {
    NSString * _digits;
    long long  _type;
}

@property (nonatomic, copy) NSString *digits;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)customDescription;
- (id)digits;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 digits:(id)arg2 type:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)setDigits:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end
