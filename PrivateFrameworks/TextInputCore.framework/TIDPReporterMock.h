
@interface TIDPReporterMock : NSObject <TIDPReportingDelegate> {
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
- (bool)record:(id)arg1 metadata:(id)arg2;
- (bool)recordNumbersVectors:(id)arg1 metadata:(id)arg2;
- (bool)recordTokenFrequency:(id)arg1 withLocale:(id)arg2 withTokenType:(id)arg3;
- (id)recordsWritten;
- (void)reset;

@end
