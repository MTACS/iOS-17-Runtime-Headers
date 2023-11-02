
@interface ATXPosterSwitch : NSObject <NSCopying, NSSecureCoding> {
    long long  _duration;
    NSString * _lockscreenId;
    NSString * _outcome;
    NSString * _switchMechanism;
}

@property (nonatomic, readonly) long long duration;
@property (nonatomic, readonly, copy) NSString *lockscreenId;
@property (nonatomic, readonly, copy) NSString *outcome;
@property (nonatomic, readonly, copy) NSString *switchMechanism;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLockscreenId:(id)arg1 switchMechanism:(id)arg2;
- (id)initWithLockscreenId:(id)arg1 switchMechanism:(id)arg2 outcome:(id)arg3 duration:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXPosterSwitch:(id)arg1;
- (id)lockscreenId;
- (id)outcome;
- (id)switchMechanism;

@end
