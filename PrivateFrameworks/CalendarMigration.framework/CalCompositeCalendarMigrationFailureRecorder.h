
@interface CalCompositeCalendarMigrationFailureRecorder : NSObject <CalCalendarMigrationFailureRecorder> {
    NSArray * _failureRecorders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *failureRecorders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)failureRecorders;
- (id)initWithFailureRecorders:(id)arg1;
- (void)recordMigrationFailure:(id)arg1;
- (void)reportRecordedFailures;

@end
