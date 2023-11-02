
@interface CLMiLoServiceStatus : NSObject <NSCopying, NSSecureCoding> {
    CLMiLoLocationType * _currentLocationOfInterestType;
    NSUUID * _currentLocationOfInterestUuid;
    NSError * _error;
    CLMiLoServiceMetaInfo * _metaInfo;
    NSArray * _places;
    CLMiLoServiceDescriptor * _serviceDescriptor;
    CLMiLoServiceQualityInfo * _serviceQualityInfo;
    unsigned long long  _serviceState;
    NSArray * _serviceSuspendReasons;
}

@property (nonatomic, readonly) CLMiLoLocationType *currentLocationOfInterestType;
@property (nonatomic, readonly) NSUUID *currentLocationOfInterestUuid;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) CLMiLoServiceMetaInfo *metaInfo;
@property (nonatomic, readonly) NSArray *places;
@property (nonatomic, readonly) CLMiLoServiceDescriptor *serviceDescriptor;
@property (nonatomic, readonly) CLMiLoServiceQualityInfo *serviceQualityInfo;
@property (nonatomic, readonly) unsigned long long serviceState;
@property (nonatomic, readonly) NSArray *serviceSuspendReasons;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentLocationOfInterestType;
- (id)currentLocationOfInterestUuid;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceState:(unsigned long long)arg1 suspendReasons:(id)arg2 serviceDescriptor:(id)arg3 currentLocationOfInterestUuid:(id)arg4 currentLocationOfInterestType:(id)arg5 error:(id)arg6 serviceQualityInfo:(id)arg7 places:(id)arg8 metaInfo:(id)arg9;
- (id)metaInfo;
- (id)places;
- (id)serviceDescriptor;
- (id)serviceQualityInfo;
- (unsigned long long)serviceState;
- (id)serviceSuspendReasons;

@end
