
@interface _UIBarItemAppearanceStorage : NSObject {
    NSMutableDictionary * textAttributesForState;
}

- (void).cxx_destruct;
- (void)enumerateTextAttributesWithBlock:(id /* block */)arg1;
- (void)setTextAttribute:(id)arg1 forKey:(id)arg2 state:(unsigned long long)arg3;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)textAttributeForKey:(id)arg1 state:(unsigned long long)arg2;
- (id)textAttributesForState:(unsigned long long)arg1;

@end
