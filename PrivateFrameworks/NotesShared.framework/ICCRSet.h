
@interface ICCRSet : NSObject <ICCRCoding, ICCRDataType, NSFastEnumeration> {
    ICCRDictionary * _dictionary;
    NSHashTable * _observers;
}

@property (readonly, copy) NSArray *allObjects;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICCRDictionary *dictionary;
@property (nonatomic) ICCRDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)dictionary;
- (id)document;
- (void)encodeWithICCRCoder:(id)arg1;
- (void)encodeWithICCRCoder:(id)arg1 set:(void*)arg2;
- (void)encodeWithICCRCoder:(id)arg1 set:(void*)arg2 elementValueCoder:(id /* block */)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDocument:(id)arg1;
- (id)initWithICCRCoder:(id)arg1;
- (id)initWithICCRCoder:(id)arg1 set:(const void*)arg2;
- (id)initWithICCRCoder:(id)arg1 set:(const void*)arg2 elementValueDecoder:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (id)member:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)observers;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
