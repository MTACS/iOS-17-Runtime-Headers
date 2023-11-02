
@interface PPU16CountedSet : NSObject {
    NSMutableDictionary * _dictStorage;
    struct type { 
        unsigned char __lx[24]; 
    }  _vectorInlineStorage;
    void * _vectorStorage;
}

- (void).cxx_destruct;
- (void)addValue:(unsigned short)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)countForValue:(unsigned short)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (void)enumerateValuesAndCountsUsingBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)uniqueValueCount;

@end
