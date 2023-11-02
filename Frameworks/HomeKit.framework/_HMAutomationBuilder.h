
@interface _HMAutomationBuilder : NSObject <HMAutomationBuilderInternal> {
    _HMContext * _context;
    HMHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (void)adoptExternalCategoriesFromClasses:(Class)arg1;

- (void).cxx_destruct;
- (id)assistantIdentifier;
- (id)home;
- (id)initWithContext:(id)arg1 home:(id)arg2;
- (id)uniqueIdentifier;
- (id)uuid;

@end
