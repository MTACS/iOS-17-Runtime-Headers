
@interface MPUMutableContentItemIdentifierCollection : MPUContentItemIdentifierCollection

@property (nonatomic) unsigned long long itemType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setIdentifier:(id)arg1 forIdentifierType:(unsigned long long)arg2;
- (void)setItemType:(unsigned long long)arg1;

@end
