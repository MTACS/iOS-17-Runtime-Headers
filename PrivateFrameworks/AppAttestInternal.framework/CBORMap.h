
@interface CBORMap : CBORValue {
    NSMapTable * m_data;
}

- (void).cxx_destruct;
- (int)fieldType;
- (id)getSortedKeys;
- (id)init;
- (void)setKey:(id)arg1 value:(id)arg2;
- (void)write:(id)arg1;

@end
