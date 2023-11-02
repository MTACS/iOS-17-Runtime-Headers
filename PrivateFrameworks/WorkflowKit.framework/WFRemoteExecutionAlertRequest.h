
@interface WFRemoteExecutionAlertRequest : WFRemoteExecutionRequest {
    WFAlert * _alert;
    NSString * _associatedRunRequestIdentifier;
    WFREPBAlert * _pbAlert;
}

@property (nonatomic, readonly) WFAlert *alert;
@property (nonatomic, readonly) NSString *associatedRunRequestIdentifier;
@property (nonatomic, retain) WFREPBAlert *pbAlert;

+ (long long)version;

- (void).cxx_destruct;
- (id)alert;
- (id)associatedRunRequestIdentifier;
- (void)inflateAlertWithBlock:(id /* block */)arg1;
- (id)initWithAlert:(id)arg1 associatedRunRequestIdentifier:(id)arg2;
- (id)pbAlert;
- (bool)readMessageFromData:(id)arg1 error:(id*)arg2;
- (void)setPbAlert:(id)arg1;
- (id)writeMessageToWriter:(id)arg1 error:(id*)arg2;

@end
