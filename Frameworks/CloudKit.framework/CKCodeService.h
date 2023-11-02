
@interface CKCodeService : NSObject {
    CKContainer * _container;
    CKCodeServiceImplementation * _implementation;
}

@property (nonatomic, readonly) CKContainer *container;
@property (nonatomic, readonly) CKCodeServiceImplementation *implementation;
@property (nonatomic, readonly, copy) NSURL *serviceInstanceURL;
@property (nonatomic, readonly, copy) NSString *serviceName;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (void)addOperation:(id)arg1;
- (id)boxedDatabaseScope;
- (id)container;
- (id)description;
- (id)implementation;
- (id)init;
- (id)initInternalWithImplementation:(id)arg1 container:(id)arg2;
- (id)serviceInstanceURL;
- (id)serviceName;

@end
