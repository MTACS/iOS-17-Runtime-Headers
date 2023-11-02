
@interface CTEmergencyMode : NSObject <NSCopying, NSSecureCoding> {
    bool  _enabled;
    bool  _isEmergencySetup;
    bool  _isEmergencyText;
    bool  _isStewieActive;
    long long  _state;
    long long  _type;
}

@property (nonatomic) bool enabled;
@property (nonatomic) bool isEmergencySetup;
@property (nonatomic) bool isEmergencyText;
@property (nonatomic, readonly) bool isStewieActive;
@property (nonatomic) long long state;
@property (nonatomic) long long type;

+ (id)convertFromEmergencyMode:(const struct EmergencyMode { int x1; int x2; int x3; bool x4; bool x5; bool x6; }*)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabled:(bool)arg1 type:(long long)arg2 isEmergencyText:(bool)arg3;
- (id)initWithEnabled:(bool)arg1 type:(long long)arg2 isEmergencyText:(bool)arg3 isEmergencySetup:(bool)arg4;
- (id)initWithEnabled:(bool)arg1 type:(long long)arg2 isEmergencyText:(bool)arg3 isEmergencySetup:(bool)arg4 isStewieActive:(bool)arg5;
- (id)initWithEnabled:(bool)arg1 type:(long long)arg2 isEmergencyText:(bool)arg3 isEmergencySetup:(bool)arg4 isStewieActive:(bool)arg5 state:(long long)arg6;
- (id)initWithEnabled:(bool)arg1 type:(long long)arg2 isEmergencyText:(bool)arg3 isEmergencySetup:(bool)arg4 state:(long long)arg5;
- (bool)isEmergencySetup;
- (bool)isEmergencyText;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCTEmergencyMode:(id)arg1;
- (bool)isStewieActive;
- (void)setEnabled:(bool)arg1;
- (void)setIsEmergencySetup:(bool)arg1;
- (void)setIsEmergencyText:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setType:(long long)arg1;
- (long long)state;
- (long long)type;

@end
