
@interface MTStorageWriter : NSCoder <MTSerializer> {
    NSMutableArray * _stack;
}

@property (nonatomic, readonly) NSCoder *mtCoder;
@property (nonatomic, readonly) unsigned long long mtType;
@property (nonatomic, retain) NSMutableArray *stack;

- (void).cxx_destruct;
- (id)_dictionaryForProtocolObject:(id)arg1;
- (void)_encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_encodeProtocolObject:(id)arg1 forKey:(id)arg2;
- (id)_serializingProtocol;
- (void)encodeBool:(bool)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)encodedDictionary;
- (id)init;
- (id)mtCoder;
- (unsigned long long)mtType;
- (void)setStack:(id)arg1;
- (id)stack;

@end
