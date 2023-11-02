
@interface CMWorkoutMetsData : NSObject <NSCopying, NSSecureCoding> {
    NSDate * fEndDate;
    NSNumber * fMets;
    NSUUID * fSessionId;
    NSUUID * fSourceId;
    NSDate * fStartDate;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSNumber *mets;
@property (nonatomic, readonly) NSUUID *sessionId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCLWorkoutMets:(const struct CLWorkoutMets { double x1; double x2; unsigned char x3[16]; unsigned char x4[16]; double x5; }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 sourceId:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 mets:(id)arg5;
- (id)mets;
- (id)sessionId;
- (id)sourceId;
- (id)startDate;

@end
