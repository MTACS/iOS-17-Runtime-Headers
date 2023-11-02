
@interface ECPointerNilKeyDictionary : OITSUPointerKeyDictionary {
    id  mNilKeyObject;
}

- (void).cxx_destruct;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forUncopiedKey:(id)arg2;

@end
