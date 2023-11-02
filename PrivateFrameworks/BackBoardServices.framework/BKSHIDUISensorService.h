
@interface BKSHIDUISensorService : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BSCompoundAssertion * _modeAssertion;
    BKSHIDUISensorMode * _prevailingMode;
}

@property (nonatomic, readonly) BKSHIDUISensorCharacteristics *sensorCharacteristics;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_lock_setupAssertion;
- (id)init;
- (id)requestUISensorMode:(id)arg1;
- (id)sensorCharacteristics;

@end
