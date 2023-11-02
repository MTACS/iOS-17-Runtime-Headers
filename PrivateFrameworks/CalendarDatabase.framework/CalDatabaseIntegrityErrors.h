
@interface CalDatabaseIntegrityErrors : NSObject {
    <CalCalendarDatabaseIntegrityErrorReportingDelegate> * _delegate;
    NSCountedSet * _errors;
}

@property (nonatomic, retain) <CalCalendarDatabaseIntegrityErrorReportingDelegate> *delegate;
@property (nonatomic, readonly) NSCountedSet *errors;

- (void).cxx_destruct;
- (id)delegate;
- (id)errors;
- (id)init;
- (void)setDelegate:(id)arg1;

@end
