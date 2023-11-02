
@interface NTKFaceSupportUnlockAttemptEvent : NSObject <NTKFaceSupportAnalyticsRepresentable> {
    NSString * _bundleIdentifier;
    double  _length;
    unsigned long long  _method;
    unsigned long long  _status;
    long long  _unlockErrorCode;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double length;
@property (nonatomic, readonly) unsigned long long method;
@property (nonatomic, readonly) NSString *ntkfs_analyticsEventName;
@property (nonatomic, readonly) NSDictionary *ntkfs_analyticsJSONRepresentation;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long unlockErrorCode;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)initWithLength:(double)arg1 status:(unsigned long long)arg2 method:(unsigned long long)arg3 bundleIdentifier:(id)arg4 unlockErrorCode:(long long)arg5;
- (double)length;
- (unsigned long long)method;
- (id)ntkfs_analyticsEventName;
- (id)ntkfs_analyticsJSONRepresentation;
- (unsigned long long)status;
- (long long)unlockErrorCode;

@end
