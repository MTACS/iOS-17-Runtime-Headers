
@interface TRISubjectProvider : NSObject <NSSecureCoding> {
    _PASLock * _lock;
    NSString * _path;
}

+ (id)defaultProviderWithPaths:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorDate;
- (void)decodeWithCoder:(id)arg1 guardedData:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1 guardedData:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithPath:(id)arg1;
- (bool)loadUsingGuardedData:(id)arg1;
- (id)nextRotationDate;
- (id)nextRotationDateAfter:(id)arg1;
- (unsigned long long)numberOfWeeksPerRotation;
- (void)rotateSubject;
- (bool)save;
- (void)setNextRotationDate:(id)arg1;
- (id)subject;
- (id)subjectWithProjectId:(int)arg1;

@end
