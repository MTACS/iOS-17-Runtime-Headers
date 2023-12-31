
@interface _DPDataProtectionStateMonitor : NSObject {
    id /* block */  _changeHandler;
    NSUUID * _handlerUUID;
    _DPDataProtectionMaster * _master;
}

@property (copy) id /* block */ changeHandler;
@property (readonly) NSUUID *handlerUUID;
@property (nonatomic, readonly) _DPDataProtectionMaster *master;

+ (id)dataProtectionClassA;
+ (id)dataProtectionClassC;
+ (id)dataProtectionClassD;

- (void).cxx_destruct;
- (id /* block */)changeHandler;
- (void)dealloc;
- (id)handlerUUID;
- (id)init;
- (bool)isDataAvailableFor:(id)arg1;
- (id)master;
- (void)setChangeHandler:(id /* block */)arg1;

@end
