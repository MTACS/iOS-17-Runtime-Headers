
@interface MLSecureModel : MLModel <MLModeling, NSSecureCoding> {
    NSXPCConnection * _connectionToModelSecurityService;
    NSObject<CoreMLModelSecurityProtocol> * _secureModelProxy;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (nonatomic, retain) NSXPCConnection *connectionToModelSecurityService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, retain) NSObject<CoreMLModelSecurityProtocol> *secureModelProxy;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;

+ (id)modelWithContentsOfURL:(id)arg1 configuration:(id)arg2 decryptCredential:(id)arg3 error:(id*)arg4;
+ (id)modelWithContentsOfURL:(id)arg1 decryptCredential:(id)arg2 error:(id*)arg3;
+ (id)sandboxExtensionPathsForModelURL:(id)arg1;
+ (id)sandboxExtensionTokenForModelURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)connectionToModelSecurityService;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 error:(id*)arg2;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionsFromBatch:(id)arg1 error:(id*)arg2;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)secureModelProxy;
- (void)setConnectionToModelSecurityService:(id)arg1;
- (void)setSecureModelProxy:(id)arg1;

@end
