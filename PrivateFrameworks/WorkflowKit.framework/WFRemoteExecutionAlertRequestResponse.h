
@interface WFRemoteExecutionAlertRequestResponse : WFRemoteExecutionRequest {
    NSError * _error;
    NSString * _requestIdentifier;
    NSString * _selectedButton;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSString *requestIdentifier;
@property (nonatomic, readonly) NSString *selectedButton;

+ (long long)version;

- (void).cxx_destruct;
- (id)error;
- (id)initWithSelectedButton:(id)arg1 requestIdentifier:(id)arg2 error:(id)arg3;
- (bool)readMessageFromData:(id)arg1 error:(id*)arg2;
- (id)requestIdentifier;
- (id)selectedButton;
- (void)setError:(id)arg1;
- (id)writeMessageToWriter:(id)arg1 error:(id*)arg2;

@end
