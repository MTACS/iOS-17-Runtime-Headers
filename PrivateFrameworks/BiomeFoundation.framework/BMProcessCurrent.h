
@interface BMProcessCurrent : BMProcess {
    NSNumber * _reliesOnLegacyDirectAccess;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _reliesOnLegacyDirectAccessLock;
}

@property (nonatomic, readonly) bool isManaged;
@property (nonatomic, readonly) bool isRunningInUserContext;

- (void).cxx_destruct;
- (id)_initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (bool)isManaged;
- (bool)isRunningInUserContext;
- (bool)reliesOnDirectAccessForDomain:(unsigned long long)arg1;

@end
