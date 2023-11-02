
@interface WFRemoteExecutionAceCommandRequestResponse : WFRemoteExecutionRequest <WFPBCodable> {
    NSDictionary * _aceCommandResponseDictionary;
    NSError * _error;
    NSString * _originatingRequestIdentifier;
}

@property (nonatomic, readonly) NSDictionary *aceCommandResponseDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *originatingRequestIdentifier;
@property (readonly) Class superclass;

+ (long long)version;

- (void).cxx_destruct;
- (id)aceCommandResponseDictionary;
- (id)error;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithOriginatingRequestIdentifier:(id)arg1 aceCommandResponseDictionary:(id)arg2 error:(id)arg3;
- (id)originatingRequestIdentifier;
- (bool)readMessageFromData:(id)arg1 error:(id*)arg2;
- (id)writeMessageToWriter:(id)arg1 error:(id*)arg2;

@end
