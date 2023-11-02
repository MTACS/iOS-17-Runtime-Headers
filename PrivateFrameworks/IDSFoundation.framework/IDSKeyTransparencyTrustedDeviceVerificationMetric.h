
@interface IDSKeyTransparencyTrustedDeviceVerificationMetric : NSObject <CUTRTCMetric> {
    long long  _accountKeyErrorCode;
    NSString * _accountKeyErrorDomain;
    double  _accountKeyOperationTimeInterval;
    bool  _accountKeySuccess;
    long long  _accountKeyUnderlyingErrorCode;
    NSString * _accountKeyUnderlyingErrorDomain;
    long long  _cloudKitErrorCode;
    NSString * _cloudKitErrorDomain;
    double  _cloudKitOperationTimeInterval;
    bool  _cloudKitSuccess;
    long long  _cloudKitUnderlyingErrorCode;
    NSString * _cloudKitUnderlyingErrorDomain;
    unsigned long long  _keyTransparencyVersion;
    unsigned long long  _numberOfCandidateDevices;
    unsigned long long  _numberOfMatchesFromAccountKey;
    unsigned long long  _numberOfMatchesFromCloudKit;
    unsigned long long  _numberOfTotalDevices;
}

@property (nonatomic, readonly) long long accountKeyErrorCode;
@property (nonatomic, readonly) NSString *accountKeyErrorDomain;
@property (nonatomic, readonly) double accountKeyOperationTimeInterval;
@property (nonatomic, readonly) bool accountKeySuccess;
@property (nonatomic, readonly) long long accountKeyUnderlyingErrorCode;
@property (nonatomic, readonly) NSString *accountKeyUnderlyingErrorDomain;
@property (nonatomic, readonly) long long cloudKitErrorCode;
@property (nonatomic, readonly) NSString *cloudKitErrorDomain;
@property (nonatomic, readonly) double cloudKitOperationTimeInterval;
@property (nonatomic, readonly) bool cloudKitSuccess;
@property (nonatomic, readonly) long long cloudKitUnderlyingErrorCode;
@property (nonatomic, readonly) NSString *cloudKitUnderlyingErrorDomain;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long keyTransparencyVersion;
@property (readonly) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfCandidateDevices;
@property (nonatomic, readonly) unsigned long long numberOfMatchesFromAccountKey;
@property (nonatomic, readonly) unsigned long long numberOfMatchesFromCloudKit;
@property (nonatomic, readonly) unsigned long long numberOfTotalDevices;
@property (readonly) unsigned short rtcType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)accountKeyErrorCode;
- (id)accountKeyErrorDomain;
- (double)accountKeyOperationTimeInterval;
- (bool)accountKeySuccess;
- (long long)accountKeyUnderlyingErrorCode;
- (id)accountKeyUnderlyingErrorDomain;
- (long long)cloudKitErrorCode;
- (id)cloudKitErrorDomain;
- (double)cloudKitOperationTimeInterval;
- (bool)cloudKitSuccess;
- (long long)cloudKitUnderlyingErrorCode;
- (id)cloudKitUnderlyingErrorDomain;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithKeyTransparencyVersion:(unsigned long long)arg1 cloudKitSuccess:(bool)arg2 cloudKitErrorDomain:(id)arg3 cloudKitErrorCode:(long long)arg4 cloudKitUnderlyingErrorDomain:(id)arg5 cloudKitUnderlyingErrorCode:(long long)arg6 cloudKitOperationTimeInterval:(double)arg7 accountKeySuccess:(bool)arg8 accountKeyErrorDomain:(id)arg9 accountKeyErrorCode:(long long)arg10 accountKeyUnderlyingErrorDomain:(id)arg11 accountKeyUnderlyingErrorCode:(long long)arg12 accountKeyOperationTimeInterval:(double)arg13 numberOfTotalDevices:(unsigned long long)arg14 numberOfCandidateDevices:(unsigned long long)arg15 numberOfMatchesFromCloudKit:(unsigned long long)arg16 numberOfMatchesFromAccountKey:(unsigned long long)arg17;
- (unsigned long long)keyTransparencyVersion;
- (id)name;
- (unsigned long long)numberOfCandidateDevices;
- (unsigned long long)numberOfMatchesFromAccountKey;
- (unsigned long long)numberOfMatchesFromCloudKit;
- (unsigned long long)numberOfTotalDevices;
- (unsigned short)rtcType;

@end
