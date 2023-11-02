
@interface ICMergeableDictionary : NSObject {
    ICCRDictionary * _dictionary;
    ICCRDocument * _document;
}

@property (nonatomic, readonly, copy) NSArray *allKeys;
@property (nonatomic, readonly) ICCRDictionary *dictionary;
@property (nonatomic, readonly) ICCRDocument *document;
@property (nonatomic, readonly, copy) NSUUID *replicaID;

- (void).cxx_destruct;
- (id)allKeys;
- (id)description;
- (id)dictionary;
- (id)document;
- (id)encodedData;
- (id)initWithData:(id)arg1 replicaID:(id)arg2;
- (unsigned long long)mergeWithDictionary:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)replicaID;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
