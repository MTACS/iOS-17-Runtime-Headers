
@interface WFRemoteExecutionStopRequest : WFRemoteExecutionRequest {
    NSString * _requestIdentifier;
}

@property (nonatomic, readonly) NSString *requestIdentifier;

+ (long long)version;

- (void).cxx_destruct;
- (id)initWithRequestIdentifier:(id)arg1;
- (bool)readMessageFromData:(id)arg1 error:(id*)arg2;
- (id)requestIdentifier;
- (id)writeMessageToWriter:(id)arg1 error:(id*)arg2;

@end
