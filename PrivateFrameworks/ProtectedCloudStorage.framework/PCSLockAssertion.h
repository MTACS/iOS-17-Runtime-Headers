
@interface PCSLockAssertion : NSObject {
    bool  _held;
    PCSLockManager * _manager;
    NSString * _name;
}

@property bool held;
@property (retain) PCSLockManager *manager;
@property (retain) NSString *name;

- (void).cxx_destruct;
- (void)dealloc;
- (void)dropAssertion;
- (bool)held;
- (bool)holdAssertion;
- (id)initAssertion:(id)arg1 manager:(id)arg2;
- (id)manager;
- (id)name;
- (void)setHeld:(bool)arg1;
- (void)setManager:(id)arg1;
- (void)setName:(id)arg1;

@end
