
@interface MBStateInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _date;
    NSError * _error;
    NSMutableArray * _errors;
    unsigned long long  _estimatedTimeRemaining;
    bool  _isBackground;
    bool  _isCloud;
    float  _progress;
    NSNumber * _restoredSnapshotBackupPolicy;
    int  _state;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSMutableArray *errors;
@property (nonatomic) unsigned long long estimatedTimeRemaining;
@property (nonatomic) bool isBackground;
@property (nonatomic) bool isCloud;
@property (nonatomic) float progress;
@property (nonatomic, retain) NSNumber *restoredSnapshotBackupPolicy;
@property (nonatomic) int state;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)errors;
- (unsigned long long)estimatedTimeRemaining;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 error:(id)arg4 errors:(id)arg5;
- (id)initWithState:(int)arg1 progress:(float)arg2 estimatedTimeRemaining:(unsigned long long)arg3 isCloud:(bool)arg4 isBackground:(bool)arg5 error:(id)arg6 errors:(id)arg7;
- (bool)isBackground;
- (bool)isCloud;
- (float)progress;
- (id)restoredSnapshotBackupPolicy;
- (void)setDate:(id)arg1;
- (void)setError:(id)arg1;
- (void)setErrors:(id)arg1;
- (void)setEstimatedTimeRemaining:(unsigned long long)arg1;
- (void)setIsBackground:(bool)arg1;
- (void)setIsCloud:(bool)arg1;
- (void)setProgress:(float)arg1;
- (void)setRestoredSnapshotBackupPolicy:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;

@end
