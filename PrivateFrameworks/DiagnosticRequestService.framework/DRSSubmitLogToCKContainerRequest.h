
@interface DRSSubmitLogToCKContainerRequest : DRSSubmitLogRequest {
    NSString * _containerName;
    NSString * _fileAssetField;
    NSDictionary * _recordDictionary;
    NSData * _recordDictionaryData;
    NSString * _recordType;
}

@property (nonatomic, readonly) NSString *containerName;
@property (nonatomic, readonly) NSString *fileAssetField;
@property (nonatomic, readonly) NSDictionary *recordDictionary;
@property (nonatomic, readonly) NSData *recordDictionaryData;
@property (nonatomic, readonly) NSString *recordType;

+ (Class)_moClass;
+ (bool)_requestMOHasRequiredFields_ON_MOC_QUEUE:(id)arg1;
+ (id)entityName;

- (void).cxx_destruct;
- (void)_configureRequestMO:(id)arg1;
- (id)_initWithSubmitLogToCKContainerRequestMO_ON_MOC_QUEUE:(id)arg1;
- (id)containerName;
- (id)debugDescription;
- (unsigned long long)expectedType;
- (id)fileAssetField;
- (id)initWithXPCDict:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;
- (id)jsonCompatibleDictionaryRepresentationVerbose:(bool)arg1;
- (id)recordDictionary;
- (id)recordDictionaryData;
- (id)recordRepresentation;
- (id)recordType;
- (id)requestType;
- (id)targetContainerName;

@end
