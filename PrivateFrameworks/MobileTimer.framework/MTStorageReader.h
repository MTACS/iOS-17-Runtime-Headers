
@interface MTStorageReader : NSCoder <MTSerializer> {
    NSMutableArray * _stack;
}

@property (nonatomic, readonly) NSCoder *mtCoder;
@property (nonatomic, readonly) unsigned long long mtType;
@property (nonatomic, retain) NSMutableArray *stack;

+ (bool)_dictionaryIsForSerializableObject:(id)arg1;
+ (id)_unwrap:(id)arg1;

- (void).cxx_destruct;
- (id)_decodeObject:(id)arg1;
- (id)_objectForDictionary:(id)arg1;
- (bool)allowsKeyedCoding;
- (bool)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (long long)decodeIntegerForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (id)mtCoder;
- (unsigned long long)mtType;
- (void)setStack:(id)arg1;
- (id)stack;

@end
