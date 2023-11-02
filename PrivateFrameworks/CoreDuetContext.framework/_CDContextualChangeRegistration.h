
@interface _CDContextualChangeRegistration : NSObject <NSCopying, NSSecureCoding> {
    id /* block */  _callback;
    NSString * _clientIdentifier;
    unsigned long long  _deviceSet;
    unsigned long long  _deviceTypes;
    _CDContextualPredicate * _dismissalPolicy;
    NSString * _identifier;
    id /* block */  _informativeCallback;
    bool  _isDeserialized;
    NSString * _locationManagerEffectiveBundleID;
    NSString * _locationManagerEffectiveBundlePath;
    bool  _mustWake;
    _CDContextualPredicate * _predicate;
    unsigned int  _qualityOfService;
}

@property (readonly, copy) id /* block */ callback;
@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic) unsigned long long deviceSet;
@property (nonatomic, readonly) unsigned long long deviceTypes;
@property (nonatomic, retain) _CDContextualPredicate *dismissalPolicy;
@property (nonatomic, copy) NSString *identifier;
@property (copy) id /* block */ informativeCallback;
@property (nonatomic) bool isDeserialized;
@property (nonatomic, copy) NSString *locationManagerEffectiveBundleID;
@property (nonatomic, copy) NSString *locationManagerEffectiveBundlePath;
@property (nonatomic) bool mustWake;
@property (nonatomic, retain) _CDContextualPredicate *predicate;
@property (nonatomic, readonly) unsigned int qualityOfService;

+ (id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(id /* block */)arg3;
+ (id)localNonWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(id /* block */)arg4;
+ (id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 callback:(id /* block */)arg3;
+ (id)localWakingRegistrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 clientIdentifier:(id)arg3 callback:(id /* block */)arg4;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(bool)arg5 callback:(id /* block */)arg6;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 deviceTypes:(unsigned long long)arg3 clientIdentifier:(id)arg4 mustWake:(bool)arg5 qualityOfService:(unsigned int)arg6 callback:(id /* block */)arg7;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(bool)arg6 callback:(id /* block */)arg7;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 clientIdentifier:(id)arg5 mustWake:(bool)arg6 qualityOfService:(unsigned int)arg7 callback:(id /* block */)arg8;
+ (id)registrationWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 mustWake:(bool)arg5 callback:(id /* block */)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)deviceSet;
- (unsigned long long)deviceTypes;
- (id)dismissalPolicy;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id /* block */)informativeCallback;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(bool)arg7 callback:(id /* block */)arg8;
- (id)initWithIdentifier:(id)arg1 contextualPredicate:(id)arg2 dismissalPolicy:(id)arg3 deviceSet:(unsigned long long)arg4 deviceTypes:(unsigned long long)arg5 clientIdentifier:(id)arg6 mustWake:(bool)arg7 qualityOfService:(unsigned int)arg8 informativeCallback:(id /* block */)arg9;
- (bool)isDeserialized;
- (bool)isEqual:(id)arg1;
- (bool)isMultiDeviceRegistration;
- (id)locationManagerEffectiveBundleID;
- (id)locationManagerEffectiveBundlePath;
- (bool)mustWake;
- (id)predicate;
- (unsigned int)qualityOfService;
- (void)setClientIdentifier:(id)arg1;
- (void)setDeviceSet:(unsigned long long)arg1;
- (void)setDismissalPolicy:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInformativeCallback:(id /* block */)arg1;
- (void)setIsDeserialized:(bool)arg1;
- (void)setLocationManagerEffectiveBundleID:(id)arg1;
- (void)setLocationManagerEffectiveBundlePath:(id)arg1;
- (void)setMustWake:(bool)arg1;
- (void)setPredicate:(id)arg1;

@end
