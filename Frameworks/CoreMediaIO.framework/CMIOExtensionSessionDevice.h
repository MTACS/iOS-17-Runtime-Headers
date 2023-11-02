
@interface CMIOExtensionSessionDevice : NSObject {
    NSSet * _availableProperties;
    <CMIOExtensionSessionDeviceDelegate> * _delegate;
    NSString * _description;
    int  _deviceControlPID;
    NSUUID * _deviceID;
    bool  _invalidated;
    NSString * _legacyDeviceID;
    NSString * _localizedName;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _manufacturer;
    NSString * _modelID;
    NSMutableDictionary * _propertyStates;
    CMIOExtensionSessionProvider * _provider;
    bool  _runningSomewhere;
    NSArray * _streamIDs;
    NSMutableArray * _streams;
}

@property (nonatomic, readonly, copy) NSSet *availableProperties;
@property (nonatomic) <CMIOExtensionSessionDeviceDelegate> *delegate;
@property (nonatomic) int deviceControlPID;
@property (nonatomic, readonly, copy) NSUUID *deviceID;
@property (getter=isInvalidated, nonatomic) bool invalidated;
@property (nonatomic, readonly, copy) NSString *legacyDeviceID;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *manufacturer;
@property (nonatomic, readonly, copy) NSString *modelID;
@property (nonatomic, readonly) CMIOExtensionSessionProvider *provider;
@property (getter=isRunningSomewhere, nonatomic) bool runningSomewhere;
@property (nonatomic, readonly, copy) NSArray *streams;

+ (id)sessionDeviceWithPropertyStates:(id)arg1 streamsStates:(id)arg2 provider:(id)arg3;

- (void).cxx_destruct;
- (id)availableProperties;
- (id)cachedPropertyStateForProperty:(id)arg1;
- (id)cachedPropertyStatesForProperties:(id)arg1;
- (void)completeTransaction;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)deviceControlPID;
- (id)deviceID;
- (id)initWithPropertyStates:(id)arg1 streamsStates:(id)arg2 provider:(id)arg3;
- (bool)isInvalidated;
- (bool)isRunningSomewhere;
- (id)legacyDeviceID;
- (id)localizedName;
- (id)manufacturer;
- (id)modelID;
- (void)propertyStatesForProperties:(id)arg1 reply:(id /* block */)arg2;
- (id)provider;
- (void)setDelegate:(id)arg1;
- (void)setDeviceControlPID:(int)arg1;
- (void)setDeviceControlPID:(int)arg1 reply:(id /* block */)arg2;
- (void)setInvalidated:(bool)arg1;
- (void)setPropertyValues:(id)arg1 reply:(id /* block */)arg2;
- (void)setRunningSomewhere:(bool)arg1;
- (id)streams;
- (void)unregister;
- (void)updatePropertyStates:(id)arg1;
- (void)updateStreamIDs:(id)arg1;

@end
