
@interface RBPowerAssertion : NSObject {
    NSDate * _acquisitionDate;
    NSString * _baseName;
    unsigned int  _identifier;
    bool  _invalidated;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
}

- (void).cxx_destruct;
- (id)_preventIdleSleepIdentifiers;
- (int)_targetPid;
- (void)dealloc;
- (id)description;
- (id)init;

@end
