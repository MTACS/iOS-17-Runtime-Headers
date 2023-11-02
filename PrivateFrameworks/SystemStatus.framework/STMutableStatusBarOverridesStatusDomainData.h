
@interface STMutableStatusBarOverridesStatusDomainData : STStatusBarOverridesStatusDomainData <STMutableStatusDomainData, STMutableStatusDomainDataDifferencing> {
    NSMutableSet * _editedKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)applyDiff:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)editedKeys;
- (void)setEntry:(id)arg1 forKey:(id)arg2;

@end
