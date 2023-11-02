
@interface HMSetting : NSObject <HFStateDumpBuildable, NSSecureCoding> {
    NSUUID * _identifier;
    NSString * _keyPath;
    NSString * _name;
    unsigned long long  _properties;
    <HMSettingManager> * _settingManager;
    long long  _type;
    id  _value;
    Class  _valueClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *hf_debugValueDescription;
@property (nonatomic, readonly) bool hf_isBooleanSetting;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) HMSettingValue *internalValue;
@property (copy) NSString *keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property (copy) NSString *name;
@property unsigned long long properties;
@property <HMSettingManager> *settingManager;
@property (readonly) Class superclass;
@property long long type;
@property (copy) id value;
@property (retain) Class valueClass;
@property (getter=isWritable, readonly) bool writable;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;
- (id)initWithInternal;
- (id)internalValue;
- (bool)isEqual:(id)arg1;
- (bool)isWritable;
- (id)keyPath;
- (id)localizedTitle;
- (void)merge:(id)arg1;
- (id)name;
- (unsigned long long)properties;
- (void)setKeyPath:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProperties:(unsigned long long)arg1;
- (void)setSettingManager:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setValue:(id)arg1;
- (void)setValueClass:(Class)arg1;
- (id)settingManager;
- (long long)type;
- (void)updateValue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)value;
- (Class)valueClass;
- (id)valueForUpdate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)hf_debugDescriptionForValue:(id)arg1 keyPath:(id)arg2;

- (id)hf_debugValueDescription;
- (bool)hf_isBooleanSetting;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
