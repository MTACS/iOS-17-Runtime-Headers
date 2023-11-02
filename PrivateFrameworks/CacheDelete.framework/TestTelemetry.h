
@interface TestTelemetry : NSObject {
    unsigned long long  _files_deleted;
    NSObject<OS_dispatch_queue> * _q;
    NSMutableArray * _removeFailures;
    double  _remove_threshold;
    NSMutableArray * _terminationFailures;
    double  _termination_threshold;
}

@property unsigned long long files_deleted;
@property (readonly) NSObject<OS_dispatch_queue> *q;
@property (nonatomic, retain) NSMutableArray *removeFailures;
@property double remove_threshold;
@property (nonatomic, retain) NSMutableArray *terminationFailures;
@property double termination_threshold;

+ (id)testTelemetryWithInfo:(id)arg1;

- (void).cxx_destruct;
- (void)addDeletes:(unsigned long long)arg1;
- (void)addRemoveFailure:(id)arg1;
- (void)addTerminationFailure:(id)arg1;
- (unsigned long long)deletes;
- (id)description;
- (unsigned long long)files_deleted;
- (id)initWithInfo:(id)arg1;
- (id)q;
- (id)removeFailures;
- (double)remove_threshold;
- (void)setFiles_deleted:(unsigned long long)arg1;
- (void)setRemoveFailures:(id)arg1;
- (void)setRemove_threshold:(double)arg1;
- (void)setTerminationFailures:(id)arg1;
- (void)setTermination_threshold:(double)arg1;
- (id)terminationFailures;
- (double)termination_threshold;

@end
