
@interface HMDSetting : NSObject <HMDSettingBaseProtocol> {
    NSMutableArray * _constraints;
    NSUUID * _identifier;
    HMSettingValue * _internalValue;
    NSString * _keyPath;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    NSUUID * _parentIdentifier;
    NSNumber * _properties;
    bool  _readOnly;
    NSNumber * _type;
}

@property (nonatomic, retain) NSArray *constraints;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (copy) HMSettingValue *internalValue;
@property (copy) NSString *keyPath;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSUUID *parentIdentifier;
@property (copy) NSNumber *properties;
@property (getter=isReadOnly) bool readOnly;
@property (readonly) Class superclass;
@property (copy) NSNumber *type;
@property (readonly, copy) id value;

+ (id)logCategory;
+ (id)settingValueWithModel:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addConstraint:(id)arg1;
- (id)constraints;
- (id)constraintsByKeyPathWithCurrentKeyPath:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 properties:(id)arg4 type:(id)arg5 value:(id)arg6 constraints:(id)arg7;
- (id)initWithModel:(id)arg1;
- (id)internalValue;
- (bool)isReadOnly;
- (bool)isValidValue:(id)arg1 error:(id*)arg2;
- (id)keyPath;
- (id)logIdentifier;
- (id)name;
- (id)parentIdentifier;
- (id)properties;
- (void)setConstraints:(id)arg1;
- (void)setInternalValue:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (bool)updateWithSettingValue:(id)arg1;
- (id)value;
- (bool)wouldValueUpdate:(id)arg1;

@end
