
@interface _UIFocusTreeLockItem : NSObject {
    bool  _didCleanup;
    bool  _didSoftAssert;
    <UIFocusEnvironment> * _environment;
    NSString * _environmentDescription;
    id /* block */  _finalUnlockHandler;
    NSMutableArray * _lockCallStackSymbols;
    unsigned long long  _lockCount;
    double  _lockTime;
    NSMutableArray * _unlockCallStackSymbols;
    <UIFocusEnvironment> * _unsafeEnvironment;
}

@property (nonatomic, readonly) <UIFocusEnvironment> *environment;
@property (nonatomic, readonly) NSString *environmentDescription;
@property (nonatomic, readonly) NSArray *lockCallStackSymbols;
@property (nonatomic, readonly) unsigned long long lockCount;
@property (nonatomic, readonly) double lockTime;
@property (nonatomic, readonly) NSArray *unlockCallStackSymbols;

- (void).cxx_destruct;
- (void)_cleanup:(bool)arg1;
- (void)dealloc;
- (id)description;
- (id)environment;
- (id)environmentDescription;
- (id)initWithEnvironment:(id)arg1 finalUnlockHandler:(id /* block */)arg2;
- (void)lock;
- (id)lockCallStackSymbols;
- (unsigned long long)lockCount;
- (double)lockTime;
- (bool)unlock;
- (id)unlockCallStackSymbols;
- (void)validate;

@end
