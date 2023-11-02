
@interface DNDModeAssertionDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _identifier;
    DNDModeAssertionLifetime * _lifetime;
    NSDate * _modeConfigurationModifiedDate;
    NSString * _modeIdentifier;
    unsigned long long  _reason;
    NSDate * _userVisibleEndDate;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) DNDModeAssertionLifetime *lifetime;
@property (nonatomic, readonly, copy) NSDate *modeConfigurationModifiedDate;
@property (nonatomic, readonly, copy) NSString *modeIdentifier;
@property (nonatomic, readonly) unsigned long long reason;
@property (getter=isUserRequested, nonatomic, readonly) bool userRequested;
@property (nonatomic, readonly, copy) NSDate *userVisibleEndDate;

+ (id)detailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3;
+ (id)detailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3 reason:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;
+ (id)userRequestedAssertionDetailsWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 lifetime:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithDetails:(id)arg1;
- (id)_initWithIdentifier:(id)arg1 modeIdentifier:(id)arg2 modeConfigurationModifiedDate:(id)arg3 lifetime:(id)arg4 reason:(unsigned long long)arg5 userVisibleEndDate:(id)arg6;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isUserRequested;
- (id)lifetime;
- (id)modeConfigurationModifiedDate;
- (id)modeIdentifier;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)reason;
- (id)userVisibleEndDate;

@end
