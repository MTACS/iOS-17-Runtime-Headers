
@interface MapsSuggestionsMutableSignalPack : MapsSuggestionsSignalPack <NSCopying, NSMutableCopying, NSSecureCoding>

- (bool)addFromEntry:(id)arg1;
- (bool)addFromMapItem:(id)arg1;
- (id)copy;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)removeAll;
- (bool)removeSignalType:(long long)arg1;
- (bool)writeSignalValue:(float)arg1 forType:(long long)arg2;
- (bool)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3;
- (bool)writeSignalValue:(float)arg1 forType:(long long)arg2 gathered:(id)arg3 expires:(id)arg4;

@end
