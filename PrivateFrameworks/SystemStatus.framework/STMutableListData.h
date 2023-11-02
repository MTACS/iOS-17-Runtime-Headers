
@interface STMutableListData : STListData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *objects;
@property (readonly) Class superclass;

- (void)addObject:(id)arg1;
- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)removeAllOccurrencesOfObject:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)setObjects:(id)arg1;

@end
