
@interface _PFTempNestedSnapshot : NSObject {
    NSKnownKeysDictionary * _snapshot;
    unsigned long long  _version;
}

- (id)_snapshot_;
- (unsigned int)_versionNumber;
- (void)dealloc;
- (id)initWithOwnedKKsD:(id)arg1 andVersion:(unsigned long long)arg2;
- (const id*)knownKeyValuesPointer;
- (id)valueForKey:(id)arg1;

@end
