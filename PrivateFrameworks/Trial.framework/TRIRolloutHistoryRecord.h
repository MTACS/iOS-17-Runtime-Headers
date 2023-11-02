
@interface TRIRolloutHistoryRecord : NSObject <NSCopying, NSSecureCoding> {
    int  _deploymentId;
    NSDate * _eventLogTime;
    unsigned char  _eventType;
    NSString<TRIFactorPackSetId> * _factorPackSetId;
    NSArray * _namespaces;
    NSString * _rampId;
    NSString * _rolloutId;
}

@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSDate *eventLogTime;
@property (nonatomic, readonly) unsigned char eventType;
@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *factorPackSetId;
@property (nonatomic, readonly) NSArray *namespaces;
@property (nonatomic, readonly) NSString *rampId;
@property (nonatomic, readonly) NSString *rolloutId;

+ (id)recordWithEventLogTime:(id)arg1 eventType:(unsigned char)arg2 rolloutId:(id)arg3 rampId:(id)arg4 factorPackSetId:(id)arg5 deploymentId:(int)arg6 namespaces:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithReplacementDeploymentId:(int)arg1;
- (id)copyWithReplacementEventLogTime:(id)arg1;
- (id)copyWithReplacementEventType:(unsigned char)arg1;
- (id)copyWithReplacementFactorPackSetId:(id)arg1;
- (id)copyWithReplacementNamespaces:(id)arg1;
- (id)copyWithReplacementRampId:(id)arg1;
- (id)copyWithReplacementRolloutId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventLogTime;
- (unsigned char)eventType;
- (id)factorPackSetId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventLogTime:(id)arg1 eventType:(unsigned char)arg2 rolloutId:(id)arg3 rampId:(id)arg4 factorPackSetId:(id)arg5 deploymentId:(int)arg6 namespaces:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;
- (id)namespaces;
- (id)rampId;
- (id)rolloutId;

@end
