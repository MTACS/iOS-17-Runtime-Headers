
@interface MTChangeSet : NSObject {
    NSDictionary * _changeDictionary;
    NSSet * _changedProperties;
}

@property (nonatomic, retain) NSDictionary *changeDictionary;
@property (nonatomic, retain) NSSet *changedProperties;
@property (nonatomic, readonly) NSArray *changes;

+ (id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2;
+ (id)changeSetWithChangesFromObject:(id)arg1 toObject:(id)arg2 inProperties:(id)arg3;
+ (id)dictionaryFromChanges:(id)arg1;

- (void).cxx_destruct;
- (id)_deserializer;
- (bool)_isEqualToChangeSet:(id)arg1 checkOriginalValues:(bool)arg2;
- (id)changeDictionary;
- (id)changeSetByAddingChangeSet:(id)arg1;
- (id)changedProperties;
- (id)changedValueForProperty:(id)arg1 hasProperty:(bool*)arg2;
- (id)changes;
- (id)description;
- (id)deserializedChangedValueForProperty:(id)arg1 hasProperty:(bool*)arg2;
- (bool)hasChangeForProperty:(id)arg1;
- (bool)hasChangesInCommonWithChangeSet:(id)arg1;
- (bool)hasChangesInProperties:(id)arg1;
- (id)initWithChangeDictionary:(id)arg1;
- (id)initWithChanges:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalentToChangeSet:(id)arg1;
- (void)setChangeDictionary:(id)arg1;
- (void)setChangedProperties:(id)arg1;

@end
