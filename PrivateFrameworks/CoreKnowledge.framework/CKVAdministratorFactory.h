
@interface CKVAdministratorFactory : NSObject <CKVAdministratorProvider> {
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<CKVAdminServiceProvider> * _serviceProvider;
}

+ (id)sharedAdministratorFactory;

- (void).cxx_destruct;
- (id)administrator;
- (id)init;
- (id)initWithServiceProvider:(id)arg1;

@end
