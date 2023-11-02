
@interface TRIBackgroundMLTaskHistoryRecord : NSObject <NSCopying, NSSecureCoding> {
    NSString * _backgroundMLTaskId;
    int  _deploymentId;
    NSDate * _eventDate;
    unsigned char  _eventType;
    NSString<TRIFactorPackSetId> * _factorPackSetId;
}

@property (nonatomic, readonly) NSString *backgroundMLTaskId;
@property (nonatomic, readonly) int deploymentId;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) unsigned char eventType;
@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *factorPackSetId;

+ (id)recordWithEventDate:(id)arg1 eventType:(unsigned char)arg2 backgroundMLTaskId:(id)arg3 deploymentId:(int)arg4 factorPackSetId:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundMLTaskId;
- (id)copyWithReplacementBackgroundMLTaskId:(id)arg1;
- (id)copyWithReplacementDeploymentId:(int)arg1;
- (id)copyWithReplacementEventDate:(id)arg1;
- (id)copyWithReplacementEventType:(unsigned char)arg1;
- (id)copyWithReplacementFactorPackSetId:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deploymentId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventDate;
- (unsigned char)eventType;
- (id)factorPackSetId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventDate:(id)arg1 eventType:(unsigned char)arg2 backgroundMLTaskId:(id)arg3 deploymentId:(int)arg4 factorPackSetId:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRecord:(id)arg1;

@end
