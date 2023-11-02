
@interface ATXUsageInsightsPhubbingEvent : NSObject <NSSecureCoding> {
    NSArray * _appSessions;
    double  _duration;
    NSDate * _endTime;
    NSString * _relationshipType;
    NSDate * _startTime;
}

@property (nonatomic, readonly, copy) NSArray *appSessions;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly, copy) NSDate *endTime;
@property (nonatomic, readonly, copy) NSString *relationshipType;
@property (nonatomic, readonly, copy) NSDate *startTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appSessions;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)endTime;
- (id)initWithCoder:(id)arg1;
- (id)initWithRelationshipType:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 duration:(double)arg4 appSessions:(id)arg5;
- (id)relationshipType;
- (id)startTime;

@end
