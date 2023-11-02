
@interface CMIOExtensionDevice : NSObject {
    NSMutableDictionary * _changedProperties;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _changedPropertiesLock;
    NSString * _description;
    int  _deviceControlPID;
    NSUUID * _deviceID;
    bool  _isRegistered;
    NSString * _legacyDeviceID;
    NSString * _localizedName;
    CMIOExtensionProvider * _parent;
    bool  _runningSomewhere;
    <CMIOExtensionDeviceSource> * _source;
    NSMutableArray * _streams;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _streamsLock;
}

@property (nonatomic) int deviceControlPID;
@property (readonly, copy) NSUUID *deviceID;
@property (nonatomic) bool isRegistered;
@property (readonly, copy) NSString *legacyDeviceID;
@property (readonly, copy) NSString *localizedName;
@property (nonatomic) CMIOExtensionProvider *parent;
@property (getter=isRunningSomewhere, nonatomic) bool runningSomewhere;
@property (readonly) <CMIOExtensionDeviceSource> *source;
@property (readonly, copy) NSArray *streams;

+ (id)deviceWithLocalizedName:(id)arg1 deviceID:(id)arg2 legacyDeviceID:(id)arg3 source:(id)arg4;
+ (id)deviceWithLocalizedName:(id)arg1 deviceID:(id)arg2 source:(id)arg3;
+ (id)internalProperties;
+ (id)internalWritableProperties;

- (void).cxx_destruct;
- (id)_clientQueue_internalPropertyStatesForProperties:(id)arg1;
- (id)_clientQueue_setAndRemoveInternalPropertyValuesForClient:(id)arg1 propertyValues:(id)arg2 error:(id*)arg3;
- (bool)addStream:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (int)deviceControlPID;
- (id)deviceID;
- (bool)didRegister:(id*)arg1;
- (void)didUnregister;
- (id)initWithLocalizedName:(id)arg1 deviceID:(id)arg2 legacyDeviceID:(id)arg3 source:(id)arg4;
- (id)initWithLocalizedName:(id)arg1 deviceID:(id)arg2 source:(id)arg3;
- (bool)isRegistered;
- (bool)isRunningSomewhere;
- (id)legacyDeviceID;
- (id)localizedName;
- (void)notifyPropertiesChanged:(id)arg1;
- (id)parent;
- (bool)removeStream:(id)arg1 error:(id*)arg2;
- (void)setDeviceControlPID:(int)arg1;
- (void)setIsRegistered:(bool)arg1;
- (void)setParent:(id)arg1;
- (void)setRunningSomewhere:(bool)arg1;
- (id)source;
- (id)streams;

@end
