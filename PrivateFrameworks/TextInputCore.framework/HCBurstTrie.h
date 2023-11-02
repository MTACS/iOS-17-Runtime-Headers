
@interface HCBurstTrie : NSObject {
    struct _CFBurstTrie { } * _burstTrie;
    unsigned long long  _keysAdded;
}

@property (nonatomic) struct _CFBurstTrie { }*burstTrie;
@property (nonatomic, readonly) unsigned long long keysAdded;

+ (id)burstTrieFromFile:(id)arg1;

- (void)_createUnderlyingBurstTrie;
- (struct _CFBurstTrie { }*)burstTrie;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;
- (unsigned long long)keysAdded;
- (id)payloadForKey:(id)arg1;
- (void)setBurstTrie:(struct _CFBurstTrie { }*)arg1;
- (bool)writeToFile:(id)arg1;

@end
