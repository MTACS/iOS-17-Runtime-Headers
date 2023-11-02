
@interface BLSHLocalAssertionAttributeHandler : NSObject <BLSHAssertionAttributeHandler> {
    NSMutableDictionary * _entries;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BLSHLocalAssertionService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BLSHLocalAssertionService *service;
@property (readonly) Class superclass;

+ (Class)attributeBaseClass;
+ (id)attributeClasses;
+ (Class)entryClass;
+ (id)registerHandlerForService:(id)arg1;

- (void).cxx_destruct;
- (void)activateAttributes:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;
- (void)deactivateAttributes:(id)arg1 fromAssertion:(id)arg2 forService:(id)arg3;
- (id)initForService:(id)arg1;
- (id)service;
- (void)setupService;

@end
