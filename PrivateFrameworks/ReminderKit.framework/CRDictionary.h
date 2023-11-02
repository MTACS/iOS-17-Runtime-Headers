
@interface CRDictionary : NSObject <CRCoding, CRDataType, NSFastEnumeration> {
    NSMapTable * _contents;
    CRDocument * _document;
    long long  _removeClock;
}

@property (nonatomic, retain) NSMapTable *contents;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CRDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long removeClock;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contents;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)document;
- (void)encodeWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1 dictionary:(void*)arg2;
- (void)encodeWithCRCoder:(id)arg1 dictionary:(void*)arg2 elementValueCoder:(id /* block */)arg3;
- (void)enumerateKeysObjectsAndTimestampsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1 dictionary:(const void*)arg2;
- (id)initWithCRCoder:(id)arg1 dictionary:(const void*)arg2 elementValueDecoder:(id /* block */)arg3;
- (id)initWithDocument:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyEnumerator;
- (void)mergeWith:(id)arg1;
- (void)mergeWithDictionary:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)removeAllObjects;
- (long long)removeClock;
- (void)removeObjectForKey:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setRemoveClock:(long long)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
