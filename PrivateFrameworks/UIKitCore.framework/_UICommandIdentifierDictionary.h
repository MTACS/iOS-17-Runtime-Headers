
@interface _UICommandIdentifierDictionary : NSObject <NSCopying> {
    _UISelectorDictionary * _actionDictionary;
    NSMutableDictionary * _actionPropertyListDictionary;
}

- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)intersectingIdentifiersFromDictionary:(id)arg1;
- (bool)intersectsEntriesFromDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectForAction:(SEL)arg1 propertyList:(id)arg2;
- (void)removeEntriesFromDictionary:(id)arg1;
- (void)removeObjectForAction:(SEL)arg1 propertyList:(id)arg2;
- (void)setObject:(id)arg1 forAction:(SEL)arg2 propertyList:(id)arg3;

@end
