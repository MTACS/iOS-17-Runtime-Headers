
@interface HMDFamiliarFacesBulletinLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging> {
    NSString * _bulletinReason;
    bool  _containsFaceClassification;
    bool  _doorbellPressed;
    long long  _numberOfKnownPersons;
    long long  _numberOfUnknownPersons;
    double  _secondsFromDoorbellToFaceClassification;
}

@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *bulletinReason;
@property (readonly) bool containsFaceClassification;
@property (nonatomic, readonly, copy) NSDictionary *coreAnalyticsEventDictionary;
@property (nonatomic, readonly, copy) NSString *coreAnalyticsEventName;
@property (nonatomic, readonly) unsigned long long coreAnalyticsEventOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool doorbellPressed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *homeUUID;
@property (readonly) long long numberOfKnownPersons;
@property (readonly) long long numberOfUnknownPersons;
@property (readonly) double secondsFromDoorbellToFaceClassification;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bulletinReason;
- (bool)containsFaceClassification;
- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;
- (unsigned long long)coreAnalyticsEventOptions;
- (bool)doorbellPressed;
- (id)initWithContainsFaceClassification:(bool)arg1 numberOfKnownPersons:(long long)arg2 numberOfUnknownPersons:(long long)arg3 bulletinReason:(id)arg4 doorbellPressed:(bool)arg5 secondsFromDoorbellToFaceClassification:(double)arg6;
- (long long)numberOfKnownPersons;
- (long long)numberOfUnknownPersons;
- (double)secondsFromDoorbellToFaceClassification;

@end
