
@interface CKRecordValueStore : NSObject <CKRecordKeyValueSetting, NSCopying, NSSecureCoding> {
    NSMutableSet * _changedKeysSet;
    NSMutableDictionary * _originalValues;
    CKRecord * _record;
    bool  _trackChanges;
    NSMutableDictionary * _values;
}

@property (copy) NSMutableSet *changedKeysSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (copy) NSMutableDictionary *originalValues;
@property (readonly) Class superclass;
@property (copy) NSMutableDictionary *values;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (id)allKeys;
- (id)allRawValues;
- (id)changedKeys;
- (id)changedKeysSet;
- (bool)containsValueOfClasses:(id)arg1 options:(unsigned long long)arg2 passingTest:(id /* block */)arg3;
- (bool)containsValueOfClasses:(id)arg1 passingTest:(id /* block */)arg2;
- (bool)containsValuePassingTest:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateKeysAndValuesOfClasses:(id)arg1 options:(unsigned long long)arg2 usingBlock:(id /* block */)arg3;
- (void)enumerateKeysAndValuesOfClasses:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(id)arg1;
- (bool)isEncrypted;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)originalValues;
- (id)rawValueForKey:(id)arg1;
- (id)recordID;
- (void)resetChangedKeys;
- (void)setChangedKeysSet:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)setOriginalValues:(id)arg1;
- (void)setRawValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValues:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)values;

@end
