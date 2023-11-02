
@interface CPLIgnoredRecord : NSObject {
    NSDate * _ignoredDate;
    CPLRecordChange * _record;
}

@property (nonatomic, readonly) NSDate *ignoredDate;
@property (nonatomic, readonly) CPLRecordChange *record;

- (void).cxx_destruct;
- (id)ignoredDate;
- (id)initWithRecord:(id)arg1 ignoredDate:(id)arg2;
- (id)record;

@end
