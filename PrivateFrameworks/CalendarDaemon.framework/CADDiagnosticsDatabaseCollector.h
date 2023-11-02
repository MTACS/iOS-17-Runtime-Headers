
@interface CADDiagnosticsDatabaseCollector : NSObject <CADDiagnosticLogCollector> {
    NSArray * _dbInfos;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)collect:(id)arg1;
- (void)determineExpectedOutputFiles:(id)arg1;

@end
