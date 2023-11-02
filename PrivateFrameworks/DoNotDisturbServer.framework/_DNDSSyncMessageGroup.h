
@interface _DNDSSyncMessageGroup : NSObject <NSCopying> {
    unsigned long long  _protocolVersion;
    unsigned long long  _serviceType;
    DNDSMutableModeAssertionStore * _store;
}

@property (nonatomic, readonly) unsigned long long protocolVersion;
@property (nonatomic, readonly) unsigned long long serviceType;
@property (nonatomic, readonly, copy) DNDSMutableModeAssertionStore *store;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithServiceType:(unsigned long long)arg1 protocolVersion:(unsigned long long)arg2 store:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)protocolVersion;
- (unsigned long long)serviceType;
- (id)store;

@end
