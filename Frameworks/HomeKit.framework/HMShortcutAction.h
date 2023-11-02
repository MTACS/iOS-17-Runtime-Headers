
@interface HMShortcutAction : HMAction {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    WFHomeWorkflow * _shortcut;
    NSData * _shortcutData;
}

@property (readonly) WFHomeWorkflow *shortcut;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)isSupportedForHome:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_serializeForAdd;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 home:(id)arg2;
- (id)initWithShortcut:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithError:(id*)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (bool)requiresDeviceUnlock;
- (id)shortcut;
- (id)shortcutData;
- (unsigned long long)type;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_affectedAccessoryProfiles;
- (id)hf_affectedAccessoryRepresentables;
- (id)hf_affectedCharacteristic;

@end
