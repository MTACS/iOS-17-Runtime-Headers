
@interface WFRemoteQuarantineDecision : MTLModel <MTLJSONSerializing> {
    NSString * _errorMessage;
    NSString * _errorTitle;
    unsigned long long  _policy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) NSString *errorMessage;
@property (nonatomic, readonly) NSString *errorTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long policy;
@property (readonly) Class superclass;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)errorMessage;
- (id)errorTitle;
- (unsigned long long)policy;

@end
