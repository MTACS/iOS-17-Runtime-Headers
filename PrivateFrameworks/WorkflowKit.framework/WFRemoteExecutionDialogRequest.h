
@interface WFRemoteExecutionDialogRequest : WFRemoteExecutionRequest <WFPBCodable> {
    WFDialogRequest * _dialogRequest;
    NSString * _runRequestIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WFDialogRequest *dialogRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *runRequestIdentifier;
@property (readonly) Class superclass;

+ (long long)version;

- (void).cxx_destruct;
- (id)dialogRequest;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithDialogRequest:(id)arg1 runRequestIdentifier:(id)arg2;
- (bool)readMessageFromData:(id)arg1 error:(id*)arg2;
- (id)runRequestIdentifier;
- (id)writeMessageToWriter:(id)arg1 error:(id*)arg2;

@end
