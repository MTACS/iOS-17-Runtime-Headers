
@interface CKCodeServiceImplementation : NSObject {
    NSNumber * _boxedDatabaseScope;
    CKContainerImplementation * _containerImplementation;
    NSOperationQueue * _operationQueue;
    NSURL * _serviceInstanceURL;
    NSString * _serviceName;
    NSObject<OS_dispatch_queue> * _underlyingDispatchQueue;
}

@property (nonatomic, readonly, copy) NSNumber *boxedDatabaseScope;
@property (nonatomic, readonly) CKContainerImplementation *containerImplementation;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly, copy) NSURL *serviceInstanceURL;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *underlyingDispatchQueue;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)CKStatusReportArray;
- (void)_addPreparedOperation:(id)arg1;
- (void)addOperation:(id)arg1 wrappingCodeService:(id)arg2 convenienceConfiguration:(id)arg3;
- (id)boxedDatabaseScope;
- (id)containerImplementation;
- (id)description;
- (id)initInternalWithContainerImplementation:(id)arg1 serviceName:(id)arg2 boxedDatabaseScope:(id)arg3 serviceInstanceURL:(id)arg4;
- (id)operationQueue;
- (id)serviceInstanceURL;
- (id)serviceName;
- (id)underlyingDispatchQueue;

@end
