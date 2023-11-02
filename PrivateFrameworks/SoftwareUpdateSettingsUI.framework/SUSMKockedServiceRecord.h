
@interface SUSMKockedServiceRecord : NSObject {
    Class  _mockedServiceClass;
    NSString * _resolvedServiceClassName;
    long long  _serviceType;
}

@property (nonatomic, readonly) Class mockedServiceClass;
@property (nonatomic, readonly) NSString *resolvedServiceClassName;
@property (nonatomic, readonly) long long serviceType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithServiceType:(long long)arg1 resolvingService:(Class)arg2 usingMockedClass:(Class)arg3;
- (Class)mockedServiceClass;
- (id)resolvedServiceClassName;
- (long long)serviceType;

@end
