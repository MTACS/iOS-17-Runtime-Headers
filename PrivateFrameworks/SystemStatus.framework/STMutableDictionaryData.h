
@interface STMutableDictionaryData : STDictionaryData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *objectsAndKeys;
@property (readonly) Class superclass;

- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObjectsAndKeys:(id)arg1;

@end
