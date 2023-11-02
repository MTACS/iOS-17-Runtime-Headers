
@interface BLSBacklightSceneVisualState : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    long long  _activeAppearance;
    long long  _adjustedLuminance;
    bool  _dimmed;
    long long  _updateFidelity;
}

@property (nonatomic, readonly) long long activeAppearance;
@property (nonatomic, readonly) long long adjustedLuminance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic, readonly) bool dimmed;
@property (nonatomic, readonly) long long expectedFidelity;
@property (nonatomic, readonly) long long grantedFidelity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long updateFidelity;

+ (bool)supportsSecureCoding;

- (long long)activeAppearance;
- (long long)adjustedLuminance;
- (id)bls_loggingString;
- (id)bls_shortLoggingString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (long long)expectedFidelity;
- (long long)grantedFidelity;
- (unsigned long long)hash;
- (id)init;
- (id)initWithActiveAppearance:(long long)arg1 updateFidelity:(long long)arg2 adjustedLuminance:(long long)arg3;
- (id)initWithActiveAppearance:(long long)arg1 updateFidelity:(long long)arg2 adjustedLuminance:(long long)arg3 dimmed:(bool)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isDimmed;
- (bool)isEqual:(id)arg1;
- (bool)isEssentiallyEqualToVisualState:(id)arg1;
- (id)newVisualStateWithUpdateFidelity:(long long)arg1;
- (long long)updateFidelity;

@end
