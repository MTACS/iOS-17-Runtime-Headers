
@interface WFRemoteExecutionAceCommandRequest : WFRemoteExecutionRequest <WFPBCodable> {
    NSDictionary * _aceCommandDictionary;
}

@property (nonatomic, readonly) NSDictionary *aceCommandDictionary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)version;

- (void).cxx_destruct;
- (id)aceCommandDictionary;
- (id)initWithAceCommandDictionary:(id)arg1;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (bool)readMessageFromData:(id)arg1 error:(id*)arg2;
- (id)writeMessageToWriter:(id)arg1 error:(id*)arg2;

@end
