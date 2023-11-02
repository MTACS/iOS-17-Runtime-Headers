
@interface EMFDPReporterMock : NSObject <EMFDPReportingDelegate> {
    NSMutableArray * _recordsWritten;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *recordsWritten;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (bool)record:(id)arg1;
- (id)recordsWritten;
- (void)reset;

@end
