
@interface HMMediaSystemBuilder : NSObject <HMFLogging> {
    HMFActivity * _activity;
    NSString * _builderSessionID;
    NSArray * _components;
    HMMutableArray * _componentsArray;
    NSString * _configuredName;
    _HMContext * _context;
    HMHome * _home;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    HMMediaSystem * _mediaSystem;
    NSUUID * _mediaSystemUUID;
    NSString * _name;
    NSUUID * _uuid;
}

@property (readonly) HMFActivity *activity;
@property (nonatomic, retain) NSString *builderSessionID;
@property (nonatomic, copy) NSArray *components;
@property (nonatomic, readonly) HMMutableArray *componentsArray;
@property (nonatomic, copy) NSString *configuredName;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HMMediaSystem *mediaSystem;
@property (nonatomic, readonly) NSUUID *mediaSystemUUID;
@property (nonatomic, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)canSupportMediaSystem:(id)arg1;
+ (bool)isStereoPairingSupportedForAccessories:(id)arg1;
+ (id)logCategory;
+ (bool)supportsMediaSystem:(id)arg1;

- (void).cxx_destruct;
- (void)_callCompletion:(id /* block */)arg1 builderSessionID:(id)arg2 error:(id)arg3 response:(id)arg4;
- (void)_commitWithCompletionHandler:(id /* block */)arg1;
- (id)activity;
- (id)builderSessionID;
- (void)commitWithCompletionHandler:(id /* block */)arg1;
- (id)components;
- (id)componentsArray;
- (id)configuredName;
- (id)context;
- (id)description;
- (void)handleResultingMediaSystem:(id)arg1;
- (id)home;
- (id)initWithHome:(id)arg1;
- (id)initWithHome:(id)arg1 mediaSystemUUID:(id)arg2 context:(id)arg3 components:(id)arg4;
- (id)initWithMediaSystem:(id)arg1;
- (void)legacyHandleResultingMediaSystem:(id)arg1;
- (id)logIdentifier;
- (id)mediaSystem;
- (id)mediaSystemUUID;
- (id)name;
- (id)resultingMediaSystemFromResponse:(id)arg1 error:(id*)arg2;
- (void)setBuilderSessionID:(id)arg1;
- (void)setComponents:(id)arg1;
- (void)setConfiguredName:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setName:(id)arg1;
- (id)uuid;

@end
