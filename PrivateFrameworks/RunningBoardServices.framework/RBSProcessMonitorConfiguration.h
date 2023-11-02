
@interface RBSProcessMonitorConfiguration : NSObject <NSCopying, RBSProcessMonitorConfiguring, RBSXPCSecureCoding> {
    int  _clientPid;
    NSString * _desc;
    unsigned long long  _events;
    unsigned long long  _identifier;
    RBSProcessHandle * _lastMatch;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSArray * _predicates;
    id /* block */  _preventLaunchUpdateHandler;
    unsigned int  _serviceClass;
    RBSProcessStateDescriptor * _stateDescriptor;
    id /* block */  _updateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long events;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, copy) NSArray *predicates;
@property (nonatomic) unsigned int serviceClass;
@property (nonatomic, copy) RBSProcessStateDescriptor *stateDescriptor;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ updateHandler;

+ (bool)supportsRBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)events;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)matchesProcess:(id)arg1;
- (id)predicates;
- (unsigned int)serviceClass;
- (void)setEvents:(unsigned long long)arg1;
- (void)setPredicates:(id)arg1;
- (void)setPreventLaunchUpdateHandle:(id /* block */)arg1;
- (void)setServiceClass:(unsigned int)arg1;
- (void)setStateDescriptor:(id)arg1;
- (void)setUpdateHandler:(id /* block */)arg1;
- (id)stateDescriptor;
- (id /* block */)updateHandler;

@end
