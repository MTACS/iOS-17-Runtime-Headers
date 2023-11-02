
@interface MCUIProvisioningProfile : NSObject <MCUIProvisioningProfileProtocol> {
    NSString * _UUID;
    NSString * _allowedAppIDEntitlement;
    bool  _isAppleInternal;
    bool  _isBeta;
    bool  _isFreePP;
    bool  _isUniversalPP;
}

@property (nonatomic, readonly) NSString *UUID;
@property (nonatomic, readonly) NSString *allowedAppIDEntitlement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAppleInternal;
@property (nonatomic, readonly) bool isBeta;
@property (nonatomic, readonly) bool isFreePP;
@property (nonatomic, readonly) bool isUniversalPP;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)UUID;
- (id)allowedAppIDEntitlement;
- (bool)allowsAppIDEntitlement:(id)arg1;
- (id)initWithProfile:(void*)arg1;
- (bool)isAppleInternal;
- (bool)isBeta;
- (bool)isFreePP;
- (bool)isUniversalPP;

@end
