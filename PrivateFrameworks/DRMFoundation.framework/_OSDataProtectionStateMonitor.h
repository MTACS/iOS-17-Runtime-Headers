
@interface _OSDataProtectionStateMonitor : NSObject {
    id /* block */  _changeHandler;
    NSUUID * _handlerUUID;
    _OSDataProtectionManager * _manager;
}

@property (nonatomic, copy) id /* block */ changeHandler;
@property (nonatomic, readonly) NSUUID *handlerUUID;
@property (nonatomic, readonly) _OSDataProtectionManager *manager;

+ (id)dataProtectionClassA;
+ (id)dataProtectionClassC;
+ (id)dataProtectionClassD;

- (void).cxx_destruct;
- (id /* block */)changeHandler;
- (void)dealloc;
- (id)handlerUUID;
- (id)init;
- (bool)isDataAvailableFor:(id)arg1;
- (id)manager;
- (void)setChangeHandler:(id /* block */)arg1;
- (bool)unnotifiedIsDataAvailableForClassC;

@end
