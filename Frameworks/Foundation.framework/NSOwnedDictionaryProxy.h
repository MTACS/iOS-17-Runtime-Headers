
@interface NSOwnedDictionaryProxy : NSDictionary {
    id  _owner;
}

- (unsigned long long)count;
- (id)initWithOwner:(id)arg1;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (id)retain;
- (void)superRelease;

@end
