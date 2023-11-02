
@interface CLClientManagerAuthorizationContext : NSObject {
    bool  _authorizedForWidgetUpdates;
    unsigned long long  _effectiveServiceMask;
    int  _inUseLevel;
    unsigned long long  _provisionalServiceMask;
    int  _registrationResult;
    unsigned long long  _staticServiceMask;
    int  _transientAwareRegistrationResult;
}

@property (nonatomic, readonly) bool authorizedForWidgetUpdates;
@property (nonatomic, readonly) unsigned long long effectiveServiceMask;
@property (nonatomic, readonly) int inUseLevel;
@property (nonatomic, readonly) unsigned long long provisionalServiceMask;
@property (nonatomic, readonly) int registrationResult;
@property (nonatomic, readonly) unsigned long long staticServiceMask;
@property (nonatomic, readonly) int transientAwareRegistrationResult;

- (id)authorizationContextByANDingServiceMaskTuple:(struct CLClientServiceTypeMaskTuple { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)authorizedForWidgetUpdates;
- (id)description;
- (unsigned long long)effectiveServiceMask;
- (int)inUseLevel;
- (bool)inUseLevelIsAtLeast:(int)arg1;
- (id)initWithInUseLevel:(int)arg1 registrationResult:(int)arg2 transientAwareRegistrationResult:(int)arg3 serviceMaskTuple:(struct CLClientServiceTypeMaskTuple { unsigned long long x1; unsigned long long x2; })arg4 authorizedForWidgetUpdates:(bool)arg5;
- (bool)isAuthorizedForServiceType:(unsigned long long)arg1;
- (bool)isAuthorizedForServiceTypeMask:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNonProvisionallyAuthorizedForServiceType:(unsigned long long)arg1;
- (bool)isNonProvisionallyAuthorizedForServiceTypeMask:(unsigned long long)arg1;
- (unsigned long long)provisionalServiceMask;
- (int)registrationResult;
- (unsigned long long)staticServiceMask;
- (int)transientAwareRegistrationResult;

@end
