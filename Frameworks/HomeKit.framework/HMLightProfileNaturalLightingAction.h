
@interface HMLightProfileNaturalLightingAction : HMAction {
    HMLightProfile * _lightProfile;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _naturalLightingEnabled;
}

@property (readonly) HMLightProfile *lightProfile;
@property (getter=isNaturalLightingEnabled, readonly) bool naturalLightingEnabled;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)actionFromProtoBuf:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 actionSet:(id)arg2;
- (bool)_handleUpdates:(id)arg1;
- (id)_serializeForAdd;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodeAsProtoBuf;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 home:(id)arg2;
- (id)initWithLightProfile:(id)arg1 naturalLightingEnabled:(bool)arg2;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isNaturalLightingEnabled;
- (id)lightProfile;
- (bool)mergeFromNewObject:(id)arg1;
- (unsigned long long)type;
- (void)updateNaturalLightingEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_affectedAccessoryProfiles;
- (id)hf_affectedAccessoryRepresentables;
- (id)hf_affectedCharacteristic;

@end
