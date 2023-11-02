
@interface SNUltronReportOperator : NSObject <SNOperator> {
    void buildVersion;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  date;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  destinationDirectory;
    void detectionResults;
    void recordOperator;
    void requestDescription;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDestinationDirectory:(id)arg1 date:(id)arg2 requestDescription:(id)arg3 buildVersion:(id)arg4 format:(id)arg5 error:(id*)arg6;
- (void)processInput:(id)arg1 portID:(id)arg2 downstreamHandler:(id /* block */)arg3;
- (void)processTerminationWithOptionalError:(id)arg1 portID:(id)arg2 downstreamHandler:(id /* block */)arg3;

@end
