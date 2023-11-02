
@interface TRITrackingId : NSObject <NSSecureCoding> {
    int  _projectId;
    TRISubject * _subject;
    TRISubjectProvider * _subjectProvider;
    NSDate * _time;
    NSArray * _treatments;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) TRISubject *subject;
@property (nonatomic, readonly) NSDate *time;
@property (nonatomic, readonly) NSArray *treatments;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;
+ (id)trackingIdWithProjectId:(int)arg1 paths:(id)arg2;
+ (id)trackingIdWithProjectId:(int)arg1 paths:(id)arg2 treatments:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subject:(id)arg4;
- (id)initWithUUID:(id)arg1 time:(id)arg2 treatments:(id)arg3 subjectProvider:(id)arg4 projectId:(int)arg5;
- (bool)isEqual:(id)arg1;
- (id)subject;
- (id)time;
- (id)treatments;
- (id)uuid;

@end
