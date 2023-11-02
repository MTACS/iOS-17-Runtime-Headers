
@interface DNDSLegacyBehaviorOverride : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _effectiveIntervals;
    unsigned long long  _mode;
    unsigned long long  _overrideType;
}

@property (nonatomic, readonly, copy) NSArray *effectiveIntervals;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) unsigned long long overrideType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)effectiveIntervals;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOverrideType:(unsigned long long)arg1 mode:(unsigned long long)arg2 effectiveIntervals:(id)arg3;
- (unsigned long long)mode;
- (unsigned long long)overrideType;

@end
