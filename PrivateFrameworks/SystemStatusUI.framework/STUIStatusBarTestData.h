
@interface STUIStatusBarTestData : STMutableStatusBarData {
    NSSet * _enabledKeys;
    NSMutableDictionary * _testEntries;
    NSSet * _updatedKeys;
}

@property (nonatomic, copy) NSSet *enabledKeys;
@property (nonatomic, retain) NSMutableDictionary *testEntries;
@property (nonatomic, copy) NSSet *updatedKeys;

+ (id)dependentDataKeyForDisplayItemIdentifier:(id)arg1;
+ (id)dependentDataKeyForItemIdentifier:(id)arg1;
+ (id)emptyTestData;
+ (id)fullTestData;
+ (id)testDataWithUpdatedKeys:(id)arg1 enabledKeys:(id)arg2;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (void)applyUpdate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)enabledKeys;
- (id)existingEntryKeys;
- (id)init;
- (bool)isEmpty;
- (void)setDataEntry:(id)arg1 forKey:(id)arg2;
- (void)setEnabledKeys:(id)arg1;
- (void)setTestEntries:(id)arg1;
- (void)setUpdatedKeys:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)testEntries;
- (id)updatedKeys;
- (id)valueForKey:(id)arg1;

@end
