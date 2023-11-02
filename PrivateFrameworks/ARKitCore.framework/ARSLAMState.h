
@interface ARSLAMState : NSObject <ARQATraceable, ARResultData, NSSecureCoding> {
    double  _minVergenceAngleCosine;
    struct CV3DSLAMStateContext { } * _slamState;
    double  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long externalAnchorsCount;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ARPointCloud *pointCloud;
@property (nonatomic, readonly) unsigned long long removedAnchorsCount;
@property (nonatomic, readonly) unsigned int slamMode;
@property (nonatomic, readonly) struct CV3DSLAMStateContext { }*slamState;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) NSDictionary *tracingEntry;
@property (nonatomic, readonly) int trackingState;
@property (nonatomic, readonly) unsigned long long updatedAnchorsCount;
@property (nonatomic, readonly) unsigned int visualSLAMState;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)externalAnchorsCount;
- (id)externalAnchorsForGroupIdentifiers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSLAMState:(struct CV3DSLAMStateContext { }*)arg1;
- (id)pointCloud;
- (unsigned long long)removedAnchorsCount;
- (id)removedAnchorsForGroupIdentifiers:(id)arg1;
- (bool)setSLAMState:(struct CV3DSLAMStateContext { }*)arg1;
- (unsigned int)slamMode;
- (struct CV3DSLAMStateContext { }*)slamState;
- (double)timestamp;
- (id)tracingEntry;
- (int)trackingState;
- (unsigned long long)updatedAnchorsCount;
- (id)updatedAnchorsForGroupIdentifiers:(id)arg1;
- (unsigned int)visualSLAMState;

@end
