
@interface BLSPreventBacklightIdleAttribute : BLSAttribute <BSXPCCoding> {
    bool  _clearUserInteraction;
    bool  _restartTimerOnInvalidation;
}

@property (nonatomic, readonly) bool clearUserInteraction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool restartTimerOnInvalidation;
@property (readonly) Class superclass;

+ (id)preventIdle;
+ (id)preventIdleAndRestartTimerOnInvalidation;
+ (id)preventIdleClearUserInteractionAndRestartTimerOnInvalidation;
+ (bool)supportsSecureCoding;

- (bool)checkEntitlementSourceForRequiredEntitlements:(id)arg1 error:(out id*)arg2;
- (bool)clearUserInteraction;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRestartTimerOnInvalidation:(bool)arg1 clearUserInteraction:(bool)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)restartTimerOnInvalidation;

@end
